/******************************************************************************
 * File: wikitude_sdk_build_information.dart
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

class WikitudeSDKBuildInformation {

  String buildConfiguration;
  String buildDate;
  String buildNumber;

  WikitudeSDKBuildInformation({required this.buildConfiguration, required this.buildDate, required this.buildNumber});
}