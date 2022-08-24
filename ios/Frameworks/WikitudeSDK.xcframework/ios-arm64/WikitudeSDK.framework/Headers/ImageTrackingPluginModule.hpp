/******************************************************************************
 * File: ImageTrackingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef ImageTrackingPluginModule_hpp
#define ImageTrackingPluginModule_hpp

#ifdef __cplusplus

#include "Matrix4.hpp"

#include "State.hpp"
#include "CompilerAttributes.hpp"

#include "TrackingPluginModule.hpp"


namespace wikitude::sdk {

        class ImageTracker;
        class ManagedCameraFrame;
        class WT_EXPORT_API ImageTrackingPluginModule : public TrackingPluginModule {
        public:
            virtual ~ImageTrackingPluginModule() = default;            

            virtual universal_sdk::ImageState getTrackingState(ImageTracker& imageTracker_) const = 0;
            virtual sdk::Matrix4 getViewMatrix() const = 0;
        };
}

#endif /* __cplusplus */

#endif /* ImageTrackingPluginModule_hpp */
