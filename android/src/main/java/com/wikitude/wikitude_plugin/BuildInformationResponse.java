/******************************************************************************
 * File: BuildInformationResponse.java
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

package com.wikitude.wikitude_plugin;

public class BuildInformationResponse {

    private String buildConfiguration;
    private String buildNumber;
    private String buildDate;

    BuildInformationResponse(String buildConfiguration, String buildNumber, String buildDate) {
        this.buildConfiguration = buildConfiguration;
        this.buildNumber = buildNumber;
        this.buildDate = buildDate;
    }

}
