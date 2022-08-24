/******************************************************************************
 * File: WTArchitectViewDebugDelegate.h
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2014-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#import <Foundation/Foundation.h>



@class WTArchitectView;
@class WTWarning;


/** 
 * The WTArchitectViewDebugDelegate offers the posibility to react on unforeseen internal SDK situations.
 */
@protocol WTArchitectViewDebugDelegate <NSObject>

/**
 * Called when an internal waring occurs.
 *
 * @param architectView The WTArchitectView instance which encountered the warning.
 * @param warning The WTWarning object that contains more information about the problem.
 */
- (void)architectView:(WTArchitectView *)architectView didEncounterInternalWarning:(WTWarning *)warning;


/**
 * Called when an internal error is encountered. The SDK tries not to crash but the internal state is inconsistent and unpredictable.
 *
 * @param architectView The WTArchitectView instance which encountered the error.
 * @param error The NSError object that contains more information about the problem.
 */
- (void)architectView:(WTArchitectView *)architectView didEncounterInternalError:(NSError *)error;

@end
