package com.example;

import com.facebook.react.ReactActivity;

public class MainActivity extends ReactActivity {

    /**
     * Returns the name of the main component registered from JavaScript.
     * This is used to schedule rendering of the component.
     */
    @Override
    protected String getMainComponentName() {
        return "example";
    }

    @Override
    protected void onCreate(android.os.Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        System.out.println("onCreateReactcalled");
        MainActivityLifecycleModule.emitLifecycleEvent("onCreate");
    }

    @Override
    protected void onStart() {
        super.onStart();
        MainActivityLifecycleModule.emitLifecycleEvent("onStart");
    }

    @Override
    protected void onResume() {
        super.onResume();
        MainActivityLifecycleModule.emitLifecycleEvent("onResume");
    }

    @Override
    protected void onPause() {
        MainActivityLifecycleModule.emitLifecycleEvent("onPause");
        super.onPause();
    }

    @Override
    protected void onStop() {
        MainActivityLifecycleModule.emitLifecycleEvent("onStop");
        super.onStop();
    }

    @Override
    protected void onDestroy() {
        MainActivityLifecycleModule.emitLifecycleEvent("onDestroy");
        super.onDestroy();
    }
}
