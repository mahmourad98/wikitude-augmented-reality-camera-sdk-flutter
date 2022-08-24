/******************************************************************************
 * File: RenderingAPI.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef RenderingAPI_hpp
#define RenderingAPI_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {
        
        enum class WT_EXPORT_API RenderingAPI {
            OpenGL_ES_2,
            OpenGL_ES_3,
            Metal,
            DirectX,
            None,
            RenderingAPIs
        };    
}

#endif /* __cplusplus */

#endif /* RenderingAPI_hpp */
