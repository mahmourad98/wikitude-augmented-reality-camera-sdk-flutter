/******************************************************************************
 * File: PlatformCameraHandler.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef PlatformCameraHandler_hpp
#define PlatformCameraHandler_hpp

#ifdef __cplusplus

#include <functional>

#include "Geometry.hpp"
#include "CameraPosition.hpp"


namespace wikitude::sdk {

        class ManagedCameraFrame;
        using CameraFrameSizeChangedHandler = std::function<void(const sdk::Size<int>& cameraFrameSize_)>;
        using CameraVerticalFieldOfViewChangedHandler = std::function<void(const float verticalFieldOfView_)>;
        using CameraToSurfaceCorrectedFieldOfViewChangedHandler = std::function<void(const float cameraToSurfaceCorrectedFieldOfView_)>;
        using CameraPositionChangedHandler = std::function<void(CameraPosition cameraPosition_)>;
        using CameraDataOutputHandler = std::function<void(ManagedCameraFrame& managedCameraFrame_)>;
        using CameraDataOutputHandlerMultipleFrames = std::function<void(std::vector<ManagedCameraFrame>& managedCameraFrames_)>;
        using CameraVerticalFieldOfViewCorrectionHandler = std::function<float(float originalVerticalFieldOfView_)>;
}

#endif /* __cplusplus */

#endif /* PlatformCameraHandler_hpp */
