/******************************************************************************
 * File: ArchitectWidgetFactory.m
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import "ArchitectWidgetFactory.h"

#import "ArchitectWidget.h"

@interface ArchitectWidgetFactory()

    @property NSObject<FlutterPluginRegistrar> *registrar;

@end

@implementation ArchitectWidgetFactory

- (instancetype)initWithRegistrar:(NSObject<FlutterPluginRegistrar> *)registrar
{
    self = [super init];
    if (self)
    {
        _registrar = registrar;
    }
    return self;
}

- (NSObject<FlutterMessageCodec>*)createArgsCodec
{
    return [FlutterStandardMessageCodec sharedInstance];
}

- (NSObject<FlutterPlatformView>*)createWithFrame:(CGRect)frame viewIdentifier:(int64_t)viewId arguments:(id _Nullable)args
{
    return [[ArchitectWidget alloc] initWithFrame:frame viewIdentifier:viewId arguments:args registrar:self.registrar];
}

@end
