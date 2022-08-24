/******************************************************************************
 * File: InterfaceOrientation.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2016-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef InterfaceOrientation_h
#define InterfaceOrientation_h

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {
        
        enum WT_EXPORT_API InterfaceOrientation : int {
            InterfaceOrientationLandscapeLeft = 90,
            InterfaceOrientationLandscapeRight = -90,
            InterfaceOrientationPortrait = 0,
            InterfaceOrientationPortraitUpsideDown = 180,
            InterfaceOrientationUnknown
        };
}

#endif /* __cplusplus */

#endif /* InterfaceOrientation_h */
