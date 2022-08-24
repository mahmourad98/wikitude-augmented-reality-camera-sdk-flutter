/******************************************************************************
 * File: PlaneType.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef PlaneType_hpp
#define PlaneType_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        /**
         * @brief Use this enum to determine the type of a plane that was detected by the instant tracker.
         */
        enum class WT_EXPORT_API PlaneType {
            /** HorizontalUpward: The detected plane is horizontal and points upward (e.g. floor). */
            HorizontalUpward,
            /** HorizontalDownward: The detected plane is horizontal and points downward (e.g. ceiling). */
            HorizontalDownward,
            /** Vertical: The detected plane is vertical (e.g. wall). */
            Vertical,
            /** Arbitrary: The detected plane has an arbitrary orientation. */
            Arbitrary,
        };
}

#endif /* __cplusplus */

#endif /* PlaneType_hpp */
