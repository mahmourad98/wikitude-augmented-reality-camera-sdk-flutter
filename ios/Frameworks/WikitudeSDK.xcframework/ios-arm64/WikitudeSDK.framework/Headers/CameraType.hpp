/******************************************************************************
 * File: CameraType.hpp
 *
 * Copyright (c) 2021 Qualcomm Technologies, Inc.
 * All Rights Reserved
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef WKTD_COMMON_CODE_CAMERA_TYPE_HPP
#define WKTD_COMMON_CODE_CAMERA_TYPE_HPP

#ifdef __cplusplus

#include "CompilerAttributes.hpp"

namespace wikitude::sdk {

    /** @enum CameraType
     *  @brief An enum indicating the type of the camera used to capture frames.
     */
    enum class WT_EXPORT_API CameraType : int {
        /** @brief Indicates that the camera type is undefined. This value is used if no type was provided by the native platform while capturing frames.
         */
        Unspecified,
        /** @brief Indicates that the camera type is Rgb.
         */
        Rgb,
        /** @brief Indicates that the camera type is Tracking.
         */
        Tracking,
        /** @brief Indicates that the camera type is Depth.
         */
        Depth
    };
}

#endif /* __cplusplus */

#endif /* WKTD_COMMON_CODE_CAMERA_TYPE_HPP */
