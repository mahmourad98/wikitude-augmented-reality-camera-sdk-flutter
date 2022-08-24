/******************************************************************************
 * File: TrackingPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef TrackingPluginModule_hpp
#define TrackingPluginModule_hpp

#ifdef __cplusplus

#include <string>

#include "PluginModule.hpp"
#include "CompilerAttributes.hpp"


namespace wikitude::universal_sdk {
    class BaseTracker;
}

namespace wikitude::sdk {

        class WT_EXPORT_API TrackingPluginModule : public PluginModule {
        public:
            virtual ~TrackingPluginModule() = default;

            virtual std::string getIdentifier() const = 0;

            virtual bool canAddActiveTracker() const;
            virtual void setActiveTracker(universal_sdk::BaseTracker& /* tracker_ */) {}
            virtual void resetActiveTracker(universal_sdk::BaseTracker& /* tracker_ */) {};
            virtual void addTracker(universal_sdk::BaseTracker& tracker_) = 0;
            virtual void removeTracker(universal_sdk::BaseTracker& tracker_) = 0;
        };
}

#endif /* __cplusplus */

#endif /* TrackingPluginModule_hpp */
