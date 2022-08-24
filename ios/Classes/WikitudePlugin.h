/******************************************************************************
 * File: WikitudePlugin.h
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import <Flutter/Flutter.h>

#import <WikitudeSDK/WikitudeSDK.h>

@interface WikitudePlugin : NSObject<FlutterPlugin>

+ (WTFeatures)featuresFromArray:(id)featuresArray;
+ (void)readStartupConfigurationFrom:(NSDictionary *)arguments andApplyTo:(WTStartupConfiguration *)configuration;

@end
