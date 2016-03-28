/*
 * Copyright (C) 2016 Baidu, Inc. All Rights Reserved.
 */
package dodola.binder;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("binder_ndk");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        this.findViewById(R.id.button).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                new Thread(
                        new Runnable() {
                            @Override
                            public void run() {
                                addService();
                            }
                        }
                ).start();
            }
        });
        this.findViewById(R.id.button2).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                sendBinder();
            }
        });
    }

    public static native void sendBinder();

    public static native void addService();

}
