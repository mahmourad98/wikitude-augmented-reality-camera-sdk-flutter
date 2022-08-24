/******************************************************************************
 * File: SDKEdition.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2019-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef SDKEdition_hpp
#define SDKEdition_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        /**
         * @brief Use this enum to determine which edition of the SDK is running.
         */
        enum class WT_EXPORT_API SDKEdition {
            /** ProfessionalEdition: This is the regular version of the SDK. */
            ProfessionalEdition,
            /** ExpertEdition: The Expert edition of the SDK enables additional features. */
            ExpertEdition
        };
}

#endif /* __cplusplus */

#endif /* SDKEdition_hpp */
