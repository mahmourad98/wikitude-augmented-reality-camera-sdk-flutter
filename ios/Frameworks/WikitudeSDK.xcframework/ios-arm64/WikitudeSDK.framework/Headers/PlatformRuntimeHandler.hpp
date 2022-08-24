/******************************************************************************
 * File: PlatformRuntimeHandler.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef PlatformRuntimeHandler_hpp
#define PlatformRuntimeHandler_hpp

#ifdef __cplusplus

#include <functional>

#include "Geometry.hpp"


namespace wikitude::sdk {

        using SurfaceSizeChangedHandler = std::function<void(const sdk::Size<int> surfaceSize_)>;
        using CameraToSurfaceScalingChangedHandler = std::function<void(const sdk::Scale2D<float> cameraToSurfaceScaling_)>;
        using CameraToSurfaceAngleChangedHandler = std::function<void(const float cameraToSurfaceAngle_)>;
}

#endif /* __cplusplus */

#endif /* PlatformRuntimeHandler_hpp */
