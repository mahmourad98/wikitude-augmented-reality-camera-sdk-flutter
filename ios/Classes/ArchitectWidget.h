/******************************************************************************
 * File: ArchitectWidget.h
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import <Foundation/Foundation.h>

#import <Flutter/Flutter.h>
#import <WikitudeSDK/WikitudeSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface ArchitectWidget : NSObject <FlutterPlatformView, WTArchitectViewDelegate>

- (instancetype)initWithFrame:(CGRect)frame
               viewIdentifier:(int64_t)viewId
                    arguments:(id _Nullable)args
                    registrar:(NSObject<FlutterPluginRegistrar>*)registrar;

- (UIView*)view;

@end

NS_ASSUME_NONNULL_END
