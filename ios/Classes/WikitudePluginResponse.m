/******************************************************************************
 * File: WikitudePluginResponse.m
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import "WikitudePluginResponse.h"

@implementation WikitudePluginResponse

+ (NSString*)createJSONStringFromDictionary:(NSDictionary*)dictionary
{
    NSError *serializationError;
    NSData *responseData = [NSJSONSerialization dataWithJSONObject:dictionary options:NSJSONWritingPrettyPrinted error:&serializationError];
    NSString* JSONString = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];

    return JSONString;
}

@end
