/******************************************************************************
 * File: WikitudePluginResponse.h
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WikitudePluginResponse : NSObject

+ (NSString*)createJSONStringFromDictionary:(NSDictionary*)dictionary;

@end

NS_ASSUME_NONNULL_END
