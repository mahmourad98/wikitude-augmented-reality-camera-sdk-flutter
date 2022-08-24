/******************************************************************************
 * File: CameraFrameInputPluginModule.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CameraFrameInputPluginModule_hpp
#define CameraFrameInputPluginModule_hpp

#ifdef __cplusplus

#include <cstdint>
#include <functional>

#include "Error.hpp"
#include "ErrorHandling.hpp"
#include "CameraFocusMode.hpp"
#include "CameraFrame.hpp"
#include "CompilerAttributes.hpp"

#include "PluginModule.hpp"


namespace wikitude::sdk {

        class WT_EXPORT_API CameraFrameInputPluginModule : public PluginModule {
        public:
            CameraFrameInputPluginModule() noexcept = default;
            virtual ~CameraFrameInputPluginModule() = default;

            /**
             * Override/implement this method to know when the default platform camera is fully released and this camera frame input plugin module can safely access all platform camera resources
             */
            virtual void onCameraReleased() = 0; // should we rename it to startCameraFrameUpdates()
            virtual void onCameraReleaseFailed(const sdk::Error& error_) = 0; // should we rename it to

            /**
             * Implement this method if this plugin module supports suspending camera frame updates while the surrounding SDK is still running.
             * This would be the case if PlatformCameraModule::setEnabled(false) is called while WikitudeUniversalSDK::isRunning is true.
             *
             * In case PlatformCameraModule::setEnabled(true) is called, ::startCameraFrameUpdates() is called again.
             *
             * In case PlatformCameraModule::setEnabled(true) is called while WikitudeUniversalSDK::isRunning is false, it's up to subclasses of this to handle this state correctly
             */
            virtual void pauseCameraFrameUpdates();
            virtual void resumeCameraFrameUpdates();

            /**
             * Implement this method if this plugin module supports camera focus mode changes.
             */
            virtual sdk::CallStatus setFocusMode(CameraFocusMode focusMode_);

            /**
             * Default: false
             */
            bool requestsCameraFrameRendering();

            /* Called from the Wikitude SDK */
            void registerOnPluginCameraReleasedHandler(std::function<void()> onPluginCameraReleasedHandler_);
            void registerNotifyNewUnmanagedCameraFrameHandler(std::function<void(const sdk::CameraFrame& cameraFrame_)> notifyNewUnmanagedCameraFrameHandler_);
            void registerNotifyNewUnmanagedCameraFramesHandler(std::function<void(const std::vector<sdk::CameraFrame>& cameraFrame_)> notifyNewUnmanagedCameraFramesHandler_);
            void registerCameraToSurfaceAngleChangedHandler(std::function<void(float cameraToSurfaceAngle_)> cameraToSurfaceAngleChangedHandler_);
            void registerOnPluginCameraErrorHandler(std::function<void(const sdk::Error& error_)> onPluginCameraErrorHandler_);

        protected:
            /**
             * Call this method to notify a new camera frame to the SDK
             */
            void notifyNewUnmanagedCameraFrameToSDK(const sdk::CameraFrame& cameraFrame_);

            /**
             * Call this method to notify multiple new camera frames to the SDK
             */
            void notifyNewUnmanagedCameraFramesToSDK(const std::vector<sdk::CameraFrame>& cameraFrames_);

            /**
             * Call this method to notify the SDK that this camer frame input plugin module fully released all platform camera resources.
             *
             */
            void notifyPluginCameraReleased();

            void setCameraToSurfaceAngle(float cameraToSurfaceAngle_);

            void onPluginCameraError(const sdk::Error& error_);

        protected:
            bool                                                      _requestsCameraFrameRendering = false;
            bool                                                      _userDisabledCameraFrameUpdates = false;

        private:
            std::function<void()>                                     _onPluginCameraReleasedHandler;
            std::function<void(const sdk::CameraFrame&)>              _notifyNewUnmanagedCameraFrameHandler;
            std::function<void(const std::vector<sdk::CameraFrame>&)> _notifyNewUnmanagedCameraFramesHandler;
            std::function<void(float)>                                _cameraToSurfaceAngleChangedHandler;
            std::function<void(const sdk::Error&)>                    _onPluginCameraErrorHandler;
        };
}

#endif /* __cplusplus */

#endif /* CameraFrameInputPluginModule_hpp */
