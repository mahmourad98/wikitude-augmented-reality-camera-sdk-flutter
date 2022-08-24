/******************************************************************************
 * File: ARBridgePluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef ARBridgePluginModule_hpp
#define ARBridgePluginModule_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"
#include "PluginModule.hpp"

#include <string>


namespace wikitude::universal_sdk {
    class ARBridgeInternal;
}

namespace wikitude::sdk {

    class WT_EXPORT_API ARBridgePluginModule : public PluginModule {
    public:
        virtual ~ARBridgePluginModule() = default;

        virtual std::string getIdentifier() const = 0;

        virtual void addARBridge(universal_sdk::ARBridgeInternal& arBridgeInternal_) = 0;
        virtual void removeARBridge(universal_sdk::ARBridgeInternal& arBridgeInternal_) = 0;
    };
}

#endif /* __cplusplus */

#endif /* ARBridgePluginModule_hpp */
