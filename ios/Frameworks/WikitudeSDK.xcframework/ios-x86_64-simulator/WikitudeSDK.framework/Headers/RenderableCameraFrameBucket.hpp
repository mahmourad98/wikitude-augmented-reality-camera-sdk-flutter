/******************************************************************************
 * File: RenderableCameraFrameBucket.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef RenderableCameraFrameBucket_h
#define RenderableCameraFrameBucket_h

#ifdef __cplusplus

#include <functional>

#include "Error.hpp"
#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        class RenderableCameraFrame;
        class WT_EXPORT_API RenderableCameraFrameBucket {
        public:
            virtual ~RenderableCameraFrameBucket() = default;
            
            virtual void getRenderableCameraFrameForId(long id_, std::function<void(RenderableCameraFrame&)> successHandler_, std::function<void(Error&)> errorHandler_) = 0;
        };
}

#endif /* __cplusplus */

#endif /* RenderableCameraFrameBuckett_h */
