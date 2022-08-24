/******************************************************************************
 * File: MetalRenderingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef MetalRenderingPluginModule_hpp
#define MetalRenderingPluginModule_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"
#include "RenderingPluginModule.hpp"


namespace wikitude::sdk {

        class MetalRenderingObjects;
        class RenderableCameraFrameBucket;
        class WT_EXPORT_API MetalRenderingPluginModule : public RenderingPluginModule {
        public:
            virtual void startRender(const MetalRenderingObjects& metalRenderingObjects, RenderableCameraFrameBucket& frameBucket_) = 0;
            virtual void endRender(const MetalRenderingObjects& metalRenderingObjects, RenderableCameraFrameBucket& frameBucket_) = 0;
        };
}

#endif /* __cplusplus */

#endif /* MetalRenderingPluginModule_hpp */
