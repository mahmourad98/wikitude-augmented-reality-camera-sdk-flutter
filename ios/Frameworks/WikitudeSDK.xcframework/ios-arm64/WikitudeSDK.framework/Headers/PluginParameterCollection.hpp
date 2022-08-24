/******************************************************************************
 * File: PluginParameterCollection.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef PluginParameterCollection_hpp
#define PluginParameterCollection_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        class RuntimeParameters;
        class CameraParameters;
        class TrackingParameters;
        class WT_EXPORT_API PluginParameterCollection {
        public:
            virtual ~PluginParameterCollection() = default;

            virtual const RuntimeParameters& getRuntimeParameters() const = 0;
            virtual RuntimeParameters& getRuntimeParameters() = 0;

            virtual const CameraParameters& getCameraParameters() const = 0;
            virtual CameraParameters& getCameraParameters() = 0;

            virtual const TrackingParameters& getTrackingParameters() const = 0;
            virtual TrackingParameters& getTrackingParameters() = 0;
        };
}

#endif /* __cplusplus */

#endif /* PluginParameterCollection_hpp */
