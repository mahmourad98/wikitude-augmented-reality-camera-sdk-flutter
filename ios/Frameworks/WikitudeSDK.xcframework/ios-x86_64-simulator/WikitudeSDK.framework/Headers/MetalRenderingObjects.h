/******************************************************************************
 * File: MetalRenderingObjects.h
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef MetalRenderingObjects_hpp
#define MetalRenderingObjects_hpp

#ifdef __cplusplus

#import <Metal/MTLDevice.h>
#import <Metal/MTLRenderCommandEncoder.h>
#import <Metal/MTLPixelFormat.h>

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {
            
            class WT_EXPORT_API MetalRenderingObjects {
            public:
                MetalRenderingObjects(id<MTLDevice> device_, id<MTLRenderCommandEncoder> commandEncoder_, MTLPixelFormat pixelFormat_);
                
                id<MTLDevice> getDevice() const;
                id<MTLRenderCommandEncoder> getCommandEncoder() const;
                MTLPixelFormat getPixelFormat() const;
                
            private:
                id<MTLDevice>                   _device;
                id<MTLRenderCommandEncoder>     _commandEncoder;
                MTLPixelFormat                  _pixelFormat;
            };
}

#endif /* __cplusplus */

#endif /* MetalRenderingObjects_hpp */
