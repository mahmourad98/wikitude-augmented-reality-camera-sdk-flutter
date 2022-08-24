/******************************************************************************
 * File: CameraRenderingParameters.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CameraRenderingParameters_hpp
#define CameraRenderingParameters_hpp

#include "CameraPosition.hpp"

namespace wikitude::sdk {

    class WT_EXPORT_API CameraRenderingParameters {
    public:
        CameraRenderingParameters()
            : _cameraToRenderSurfaceRotation(0)
            , _cameraPosition(sdk::CameraPosition::Back) {
            /* Intentionally Left Blank */
        }

        CameraRenderingParameters(float cameraToRenderSurfaceRotation_, sdk::CameraPosition cameraPosition_)
            : _cameraToRenderSurfaceRotation(cameraToRenderSurfaceRotation_)
            , _cameraPosition(cameraPosition_) {
            /* Intentionally Left Blank */
        }

        float getCameraToRenderSurfaceRotation() const {
            return _cameraToRenderSurfaceRotation;
        }

        sdk::CameraPosition getCameraPosition() const {
            return _cameraPosition;
        }

    private:
        float _cameraToRenderSurfaceRotation;
        sdk::CameraPosition _cameraPosition;
    };
}

#endif /* CameraRenderingParameters_hpp */
