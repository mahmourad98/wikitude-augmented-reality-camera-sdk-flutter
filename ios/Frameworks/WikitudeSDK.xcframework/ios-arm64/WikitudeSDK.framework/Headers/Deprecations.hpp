/******************************************************************************
 * File: Deprecations.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef Deprecations_h
#define Deprecations_h

#ifndef _WIN32
    #define DEPRECATED_SINCE(__version__, __msg__) __attribute__((deprecated("Deprecated in Wikitude SDK " #__version__ ". " __msg__)))
#else
    #define DEPRECATED_SINCE(__version__, __msg__)
#endif

#endif /* Deprecations_h */
