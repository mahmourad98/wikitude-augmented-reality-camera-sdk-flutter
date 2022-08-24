/******************************************************************************
 * File: DepthDataFormat.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef DepthDataFormat_hpp
#define DepthDataFormat_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        enum class WT_EXPORT_API DepthDataFormat {
            FLOAT_32,
            FLOAT_32_NORMALIZED,
            INTEGER_8,
            INTEGER_16,
            INTEGER_32
        };
}

#endif /* __cplusplus */

#endif /* DepthDataFormat_hpp */
