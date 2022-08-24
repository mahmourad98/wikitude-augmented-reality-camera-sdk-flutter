/******************************************************************************
 * File: WTSDKBuildInformation.h
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2016-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>


/**
 * Use this class to get more information about this specific version of the SDK. 
 *
 * @Discussion Usually this class is used if Wikitude support is contacted
 */
@interface WTSDKBuildInformation : NSObject

/**
 * The build date of the SDK
 */
@property(nonatomic, copy, readonly) NSString *buildDate;

/**
 * The build number of the SDK
 */
@property(nonatomic, copy, readonly) NSString *buildNumber;

/**
 * The build configuration that was used to build this SDK
 */
@property(nonatomic, copy, readonly) NSString *buildConfiguration;

/**
 * This method can be used to get a JSON representation of the above properties
 */
- (NSString *)toJSONString;

@end
