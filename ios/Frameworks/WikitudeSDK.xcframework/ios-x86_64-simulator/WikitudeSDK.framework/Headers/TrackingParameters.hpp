/******************************************************************************
 * File: TrackingParameters.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef TrackingParameters_hpp
#define TrackingParameters_hpp

#ifdef __cplusplus

#include "PlatformTrackingHandler.hpp"
#include "CompilerAttributes.hpp"


namespace wikitude::universal_sdk {
    class TrackingParametersInternal;
}

namespace wikitude::sdk {

        class WT_EXPORT_API TrackingParameters {
        public:
            long getProcessedFrameId();
            void addProcessedFrameIdChangedHandler(std::uintptr_t handleOwner_, ProcessedFrameIdChangedHandler processedFrameIdChangedHandler_);
            void removeProcessedFrameIdChangedHandler(std::uintptr_t handleOwner_);

            void setInternalTrackingParameters(universal_sdk::TrackingParametersInternal* internalTrackingParameters_);

        protected:
            universal_sdk::TrackingParametersInternal*  _internalTrackingParameters;
        };
}

#endif /* __cplusplus */

#endif /* TrackingParameters_hpp */
