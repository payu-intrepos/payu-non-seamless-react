package com.example;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.core.DeviceEventManagerModule;

import java.util.ArrayList;
import java.util.List;

public class MainActivityLifecycleModule extends ReactContextBaseJavaModule {

    private static final String MODULE_NAME = "MainActivityLifecycleEmitter";
    private static final String EVENT_NAME = "MainActivityLifecycle";
    private static ReactApplicationContext reactContext;
    private static final List<LifecycleEvent> pendingEvents = new ArrayList<>();
    private static boolean isJsListenerReady = false;

    private static class LifecycleEvent {
        private final String methodName;
        private final double timestamp;

        LifecycleEvent(String methodName, double timestamp) {
            this.methodName = methodName;
            this.timestamp = timestamp;
        }
    }

    MainActivityLifecycleModule(ReactApplicationContext context) {
        super(context);
        reactContext = context;
    }

    @NonNull
    @Override
    public String getName() {
        return MODULE_NAME;
    }

    @ReactMethod
    public void addListener(String eventName) {
        // Required by NativeEventEmitter on newer React Native versions.
        reactContext = getReactApplicationContext();
    }

    @ReactMethod
    public void removeListeners(double count) {
        // Required by NativeEventEmitter on newer React Native versions.
    }

    @ReactMethod
    public void setJsListenerReady(boolean isReady) {
        reactContext = getReactApplicationContext();
        isJsListenerReady = isReady;
        if (isReady) {
            flushPendingEvents();
        }
    }

    @ReactMethod
    public void flushPendingEvents() {
        if (!isJsListenerReady || reactContext == null || !reactContext.hasActiveCatalystInstance()) {
            return;
        }

        List<LifecycleEvent> snapshot;
        synchronized (pendingEvents) {
            if (pendingEvents.isEmpty()) {
                return;
            }
            snapshot = new ArrayList<>(pendingEvents);
            pendingEvents.clear();
        }

        for (LifecycleEvent event : snapshot) {
            emitEventToJs(event.methodName, event.timestamp);
        }
    }

    public static void emitLifecycleEvent(String methodName) {
        double timestamp = System.currentTimeMillis();

        if (!isJsListenerReady || reactContext == null || !reactContext.hasActiveCatalystInstance()) {
            synchronized (pendingEvents) {
                pendingEvents.add(new LifecycleEvent(methodName, timestamp));
            }
            return;
        }

        emitEventToJs(methodName, timestamp);
    }

    private static void emitEventToJs(String methodName, double timestamp) {
        WritableMap payload = Arguments.createMap();
        payload.putString("methodName", methodName);
        payload.putDouble("timestamp", timestamp);

        reactContext
            .getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)
            .emit(EVENT_NAME, payload);
    }
}
