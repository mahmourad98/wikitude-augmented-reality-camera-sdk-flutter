/******************************************************************************
 * File: RecognizedTargetsBucket.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2017-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef RecognizedTargetsBucket_hpp
#define RecognizedTargetsBucket_hpp

#ifdef __cplusplus

#include <vector>

#include "ImageTarget.hpp"
#include "ObjectTarget.hpp"
#include "InstantTarget.hpp"
#include "InitializationPose.hpp"
#include "Plane.hpp"
#include "CompilerAttributes.hpp"


namespace wikitude::sdk {

        class Matrix4;
        class WT_EXPORT_API RecognizedTargetsBucket {
        public:
            virtual ~RecognizedTargetsBucket() = default;

            virtual const std::vector<ImageTarget*>& getImageTargets() const = 0;
            virtual const std::vector<ObjectTarget*>& getObjectTargets() const = 0;

            virtual const std::vector<InstantTarget*>& getInstantTargets() const = 0;
            virtual const std::vector<InitializationPose*>& getInitializationPoses() const = 0;
            
            virtual const std::vector<Plane*>& getPlanes() const = 0;
            virtual const Matrix4& getViewMatrix() const = 0;
        };
}

#endif /* __cplusplus */

#endif /* RecognizedTargetsBucket_hpp */
