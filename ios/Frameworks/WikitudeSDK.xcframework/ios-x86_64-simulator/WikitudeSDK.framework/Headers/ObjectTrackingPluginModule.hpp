/******************************************************************************
 * File: ObjectTrackingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef ObjectTrackingPluginModule_hpp
#define ObjectTrackingPluginModule_hpp

#ifdef __cplusplus

#include "State.hpp"
#include "CompilerAttributes.hpp"
#include "TrackingPluginModule.hpp"


namespace wikitude::sdk {

        class ManagedCameraFrame;
        class ObjectTracker;
        class WT_EXPORT_API ObjectTrackingPluginModule : public TrackingPluginModule {
        public:
            virtual ~ObjectTrackingPluginModule() = default;

            virtual universal_sdk::ObjectState getTrackingState(sdk::ObjectTracker& objectTracker_) const = 0;
            virtual sdk::Matrix4 getViewMatrix() const = 0;
        };
}

#endif /* __cplusplus */

#endif /* ObjectTrackingPluginModule_hpp */
