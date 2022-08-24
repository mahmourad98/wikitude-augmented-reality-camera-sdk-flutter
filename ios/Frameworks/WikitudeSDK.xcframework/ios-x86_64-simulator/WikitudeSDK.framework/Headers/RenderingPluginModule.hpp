/******************************************************************************
 * File: RenderingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef RenderingPluginModule_hpp
#define RenderingPluginModule_hpp

#ifdef __cplusplus

#include "PluginModule.hpp"
#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        class WT_EXPORT_API RenderingPluginModule : public PluginModule {
        public:
            virtual ~RenderingPluginModule() = default;
        };
}

#endif /* __cplusplus */

#endif /* RenderingPluginModule_hpp */
