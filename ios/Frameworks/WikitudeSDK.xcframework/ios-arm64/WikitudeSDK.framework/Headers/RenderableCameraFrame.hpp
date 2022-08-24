/******************************************************************************
 * File: RenderableCameraFrame.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef RenderableCameraFrame_hpp
#define RenderableCameraFrame_hpp

#ifdef __cplusplus

#include <vector>

#include "CompilerAttributes.hpp"

#include "CameraFramePlane.hpp"
#include "CameraFrame.hpp"


namespace wikitude::sdk {

        class WT_EXPORT_API RenderableCameraFrame {
        public:
            RenderableCameraFrame() = default;
            RenderableCameraFrame(RenderableCameraFrame& other_) = delete;
            virtual ~RenderableCameraFrame() = default;
            
            RenderableCameraFrame& operator=(RenderableCameraFrame& other_) = delete;

            virtual const std::vector<CameraFramePlane>& getData() = 0;
            virtual const sdk::ColorCameraFrameMetadata& getColorMetadata() const = 0;
        };
}

#endif /* __cplusplus */

#endif //RenderableCameraFrame_hpp
