/******************************************************************************
 * File: CompilerAttributes.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CompilerAttributes_hpp
#define CompilerAttributes_hpp

#ifdef __cplusplus

#if defined(__GNUC__) && (__GNUC__ >= 4)
    #define NO_DISCARD __attribute__ ((warn_unused_result))
#elif defined(_MSC_VER) && (_MSC_VER >= 1700)
    #define NO_DISCARD _Check_return_
#else
    #define NO_DISCARD
#endif

#if defined(_WIN32) || defined(__WIN32__)
#if defined(WKTD_EXPORT_LIBRARY_API)
    #define WT_EXPORT_API __declspec(dllexport)
#else
    #define WT_EXPORT_API
#endif
#else
    #define WT_EXPORT_API __attribute__ ((visibility("default")))
#endif

#define WKTD_UNUSED_VARIABLE(x) (void)(x)

#endif /* __cplusplus */

#endif /* CompilerAttributes_hpp */
