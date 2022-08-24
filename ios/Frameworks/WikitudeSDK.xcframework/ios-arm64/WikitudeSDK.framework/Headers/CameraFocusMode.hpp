/******************************************************************************
 * File: CameraFocusMode.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2020-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CameraFocusMode_hpp
#define CameraFocusMode_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        /**
         * @brief Use this enum to determine the focus mode of the camera.
         */
        enum class WT_EXPORT_API CameraFocusMode {
            /** Once: The device automatically adjusts the focus once. */
            Once,
            /** Continuous: The device continuously monitors focus and autofocuses when necessary. */
            Continuous,
            /** Off: The device has its focus locked */
            Off
        };
}

#endif /* __cplusplus */

#endif /* CameraFocusMode_hpp */
