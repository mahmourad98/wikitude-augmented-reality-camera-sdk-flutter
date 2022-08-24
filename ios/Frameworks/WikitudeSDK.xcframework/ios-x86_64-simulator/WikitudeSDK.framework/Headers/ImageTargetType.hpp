/******************************************************************************
 * File: ImageTargetType.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef ImageTargetType_hpp
#define ImageTargetType_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        /**
         * @brief Use this enum to determine the type of a image target that was detected by the image tracker.
         */
        enum class WT_EXPORT_API ImageTargetType {
            /** Image: The detected image target is an image. */
            Image,
            /** Cylinder: The detected image target is a cylinder. */
            Cylinder
        };
}

#endif /* __cplusplus */

#endif /* ImageTargetType_hpp */
