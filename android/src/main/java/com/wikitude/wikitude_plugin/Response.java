/******************************************************************************
 * File: Response.java
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

package com.wikitude.wikitude_plugin;

class Response {

    private boolean success;
    private String message;

    Response(boolean success, String message) {
        this.success = success;
        this.message = message;
    }

}
