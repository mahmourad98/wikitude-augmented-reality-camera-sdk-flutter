/******************************************************************************
 * File: PlatformTrackingHandler.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef PlatformTrackingHandler_hpp
#define PlatformTrackingHandler_hpp

#ifdef __cplusplus

#include <functional>


namespace wikitude::sdk {

        using ProcessedFrameIdChangedHandler = std::function<void(const long processedFrameId_)>;
}

#endif /* __cplusplus */

#endif /* PlatformTrackingHandler_hpp */
