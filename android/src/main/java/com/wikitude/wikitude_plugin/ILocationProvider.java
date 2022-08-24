/******************************************************************************
 * File: ILocationProvider.java
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

package com.wikitude.wikitude_plugin;

interface ILocationProvider {

    /**
     * Call when host-activity is resumed (usually within systems life-cycle method)
     */
    void onResume();

    /**
     * Call when host-activity is paused (usually within systems life-cycle method)
     */
    void onPause();

}
