/******************************************************************************
 * File: CameraParameters.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CameraParameters_hpp
#define CameraParameters_hpp

#ifdef __cplusplus

#include "Geometry.hpp"
#include "CameraPosition.hpp"
#include "CompilerAttributes.hpp"

#include "PlatformCameraHandler.hpp"


namespace wikitude::universal_sdk {
    class CameraParametersInternal;
}

namespace wikitude::sdk {

        /**
         * @brief CameraParameters provide access to camera specific information.
         *
         * Calling getter methods will always return the most recent data available.
         *
         * PlatformComponent developer typically create a subclass and add more getter that are related to platform specific camera information.
         */
        class WT_EXPORT_API CameraParameters {
        public:

            /**
             * @brief This method returns the most recent horizontal field that is available.
             *
             * @return The horizontal field of view in degree.
             */
            float getHorizontalFieldOfView() const;
            void addHorizontalFieldOfViewChangedHandler(std::uintptr_t handleOwner_, CameraVerticalFieldOfViewChangedHandler cameraVerticalFieldOfViewChangedHandler_);
            void removeHorizontalFieldOfViewChangedHandler(std::uintptr_t handleOwner_);

            float getCameraToSurfaceCorrectedFieldOfView() const;
            void addCameraToSurfaceCorrectedFieldOfViewChangedHandler(std::uintptr_t handleOwner_, CameraToSurfaceCorrectedFieldOfViewChangedHandler cameraToSurfaceCorrectedFieldOfViewChangedHandler_);
            void removeCameraToSurfaceCorrectedFieldOfViewChangedHandler(std::uintptr_t handleOwner_);

            /**
             * @brief This method returns the most recent camera frame size that is available.
             *
             * @return The camera frame size in pixel.
             */
            Size<int> getCameraFrameSize() const;
            void addCameraFrameSizeChangedHandler(std::uintptr_t handleOwner_, CameraFrameSizeChangedHandler cameraFrameSizeChangedHandler_);
            void removeCameraFrameSizeChangedHandler(std::uintptr_t handleOwner_);

            CameraPosition getCameraPosition() const;
            void addCameraPositionChangedHandler(std::uintptr_t handleOwner_, CameraPositionChangedHandler cameraPositionChangedHandler_);
            void removeCameraPositionChangedHandler(std::uintptr_t handleOwner_);

            void setInternalCameraParameters(universal_sdk::CameraParametersInternal *internalCameraParameters_);
            
        protected:
            universal_sdk::CameraParametersInternal*    _internalCameraParameters = nullptr;
        };
}

#endif /* __cplusplus */

#endif /* CameraParameters_hpp */
