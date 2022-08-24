/******************************************************************************
 * File: InstantTrackingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef InstantTrackingPluginModule_hpp
#define InstantTrackingPluginModule_hpp

#ifdef __cplusplus

#include "ErrorHandling.hpp"
#include "Geometry.hpp"
#include "ManagedCameraFrame.hpp"
#include "CompilerAttributes.hpp"

#include "TrackingPluginModule.hpp"
#include "State.hpp"
#include "InstantTrackingState.hpp"


namespace wikitude::sdk {

        class WT_EXPORT_API InstantTrackingPluginModule : public TrackingPluginModule {
        public:
            virtual ~InstantTrackingPluginModule() = default;

            virtual universal_sdk::InstantState getInitializationState(/*float deviceHeightAboveGround*/) const = 0;
            virtual universal_sdk::InstantState getTrackingState() const = 0;
        };
}

#endif /* __cplusplus */

#endif /* InstantTrackingPluginModule_hpp */
