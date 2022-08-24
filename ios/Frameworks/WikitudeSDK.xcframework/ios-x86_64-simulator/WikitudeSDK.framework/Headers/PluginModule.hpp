/******************************************************************************
 * File: PluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef PluginModule_hpp
#define PluginModule_hpp

#ifdef __cplusplus

#include <vector>

#include "CompilerAttributes.hpp"

namespace wikitude::sdk {

        class ManagedCameraFrame;
        class WT_EXPORT_API PluginModule {
        public:
            virtual ~PluginModule() = default;

            virtual void pause();
            virtual void resume(unsigned int pausedTime_);

            virtual void cameraFrameAvailable(ManagedCameraFrame& managedCameraFrame_);
            virtual void cameraFramesAvailable(std::vector<ManagedCameraFrame>& managedCameraFrames_);
            virtual void prepareUpdate();
            virtual void update();

            void setEnabled(bool enabled_);
            bool isEnabled() const;

        protected:
            bool    _isEnabled = true;
        };
}

#endif /* __cplusplus */

#endif /* PluginModule_hpp */
