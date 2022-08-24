/******************************************************************************
 * File: OpenGLESRenderingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef OpenGLESRenderingPluginModule_hpp
#define OpenGLESRenderingPluginModule_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"
#include "RenderingPluginModule.hpp"


namespace wikitude::sdk {

        class RenderableCameraFrameBucket;
        class WT_EXPORT_API OpenGLESRenderingPluginModule : public RenderingPluginModule {
        public:
            virtual void startRender(RenderableCameraFrameBucket& frameBucket_) = 0;
            virtual void endRender(RenderableCameraFrameBucket& frameBucket_) = 0;
        };
}

#endif /* __cplusplus */

#endif /* OpenGLESRenderingPluginModule_hpp */
