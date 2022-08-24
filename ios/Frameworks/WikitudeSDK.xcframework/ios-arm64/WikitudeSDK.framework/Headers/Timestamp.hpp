/******************************************************************************
 * File: Timestamp.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef Timestamp_hpp
#define Timestamp_hpp

#ifdef __cplusplus

#include <cstdint>

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        /** @struct Timestamp
         * @brief Timestamp represents a single point in time. _value/_timescale = seconds.
         */
        struct WT_EXPORT_API Timestamp {
        public:
            std::int64_t    _value = 0;
            std::int32_t    _timescale = 0;
        };
}

#endif /* __cplusplus */

#endif /* Timestamp_hpp */
