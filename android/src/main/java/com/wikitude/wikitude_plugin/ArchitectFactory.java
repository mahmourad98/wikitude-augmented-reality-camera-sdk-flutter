/******************************************************************************
 * File: ArchitectFactory.java
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

package com.wikitude.wikitude_plugin;

import android.app.Activity;
import android.content.Context;

import androidx.annotation.NonNull;

import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.StandardMessageCodec;
import io.flutter.plugin.platform.PlatformView;
import io.flutter.plugin.platform.PlatformViewFactory;

public class ArchitectFactory extends PlatformViewFactory {

    private final BinaryMessenger binaryMessenger;
    private FlutterPlugin.FlutterAssets flutterAssets;
    private Activity activity;

    private ArchitectWidget architectWidget;

    public ArchitectFactory(@NonNull BinaryMessenger messenger, FlutterPlugin.FlutterAssets flutterAssets) {
        super(StandardMessageCodec.INSTANCE);
        this.binaryMessenger = messenger;
        this.flutterAssets = flutterAssets;
    }

    @Override
    public PlatformView create(Context context, int i, Object o) {
        architectWidget = new ArchitectWidget(binaryMessenger, flutterAssets, i, o);
        if (activity != null) {
            architectWidget.setContext(activity);
        }
        return architectWidget;
    }

    void setActivity(Activity activity) {
        this.activity = activity;
        if (architectWidget != null) {
            architectWidget.setContext(activity);
        }
    }

    void captureScreen() {
        if (architectWidget != null) {
            architectWidget.captureScreen();
        }
    }

    void captureScreenError(String error) {
        if (architectWidget != null) {
            architectWidget.captureScreenError(error);
        }
    }

    int getExternalStoragePermissionRequestCode() {
        if (architectWidget != null) {
            return architectWidget.getExternalStoragePermissionRequestCode();
        } else {
            return 0;
        }
    }

}