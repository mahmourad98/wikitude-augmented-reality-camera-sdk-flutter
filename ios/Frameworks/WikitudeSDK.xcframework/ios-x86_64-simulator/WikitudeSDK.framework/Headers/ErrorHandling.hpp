/******************************************************************************
 * File: ErrorHandling.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef ErrorHandling_hpp
#define ErrorHandling_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"
#include "Error.hpp"


namespace wikitude::sdk {

        struct WT_EXPORT_API CallStatus {
        public:
            static CallStatus Success() {
                return {true, Error::NoError()};
            }
            
        public:
            CallStatus(bool success_, sdk::Error error_)
            :
            _success(success_),
            _error(error_)
            { /* Intentionally Left Blank */ }

            explicit operator bool () const {
                return _success;
            }

            bool        _success;
            sdk::Error  _error;
        };


        template <typename T>
        struct WT_EXPORT_API CallValue {
        public:
            static CallValue<T> SuccessCallValue(T value_) {
                return {value_, {true, Error::NoError()}};
            }

        public:
            CallValue<T>(T value_, CallStatus status_)
            :
            _value(value_),
            _status(status_)
            { /* Intentionally Left Blank */ }

            explicit operator bool () const {
                return _status._success;
            }


        public:
            T           _value;
            CallStatus  _status;
        };
}

#endif /* __cplusplus */

#endif /* ErrorHandling_hpp */
