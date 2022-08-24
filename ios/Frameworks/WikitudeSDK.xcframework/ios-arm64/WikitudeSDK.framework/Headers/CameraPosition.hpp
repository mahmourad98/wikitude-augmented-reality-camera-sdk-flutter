/******************************************************************************
 * File: CameraPosition.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 *
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CameraPosition_hpp
#define CameraPosition_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"

namespace wikitude::sdk {

    /** @enum CameraPosition
     *  @brief An enum indicating the physical position of the camera used to capture frames.
     */
    enum class WT_EXPORT_API CameraPosition : int {
        /** @brief Indicates that the camera position is undefined. Desktop web cams might return this value.
         */
        Unspecified,
        /** @brief Indicates that the camera is located on the back.
         */
        Back,
        /** @brief Indicates that the camera is located on the front.
         */
        Front,
        /** @brief Indicates that the camera is located on the left.
         */
        Left,
        /** @brief Indicates that the camera is located on the right.
         */
        Right
    };
}

#endif /* __cplusplus */

#endif /* CameraPosition_hpp */
