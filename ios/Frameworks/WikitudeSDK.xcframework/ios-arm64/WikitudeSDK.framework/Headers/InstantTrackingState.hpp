/******************************************************************************
 * File: InstantTrackingState.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef InstantTrackingState_hpp
#define InstantTrackingState_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {
    
        /** @addtogroup InstantTracking
         *  @{
         */
        /** @enum InstantTrackingState
         *  @brief An enum indicating the current state in which an instant tracker is.
         */
        enum class WT_EXPORT_API InstantTrackingState {
            /** @brief Initializing indicates that the instant tracker is in initialization state, which allows the origin of the tracking scene to be set, as well as the device height above ground.
             */
            Initializing,
            /** @brief Tracking indicates that the instant tracker is in tracking state, which means that the current scene is being tracked and augmentations can be placed.
             */
            Tracking
        };
        /** @}*/
}

#endif /* __cplusplus */

#endif /* InstantTrackingState_hpp */
