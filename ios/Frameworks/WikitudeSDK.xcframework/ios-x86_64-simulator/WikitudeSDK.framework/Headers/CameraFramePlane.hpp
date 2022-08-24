/******************************************************************************
 * File: CameraFramePlane.hpp
 * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *  2018-2021 Wikitude GmbH.
 * 
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

#ifndef CameraFramePlane_hpp
#define CameraFramePlane_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"

namespace wikitude::sdk {

        /** @class CameraFramePlane
         *  @brief A single plane of image data.
         */
        class WT_EXPORT_API CameraFramePlane {
        public:
            CameraFramePlane(const void* data_, unsigned int dataSize_, int pixelStride_ = -1, int rowStride_ = -1);
            virtual ~CameraFramePlane() = default;

            /** @brief Returns the data of the plane. How to use this is defined by the
             * frame ColorSpace.
             */
            virtual const void* getData() const;

            /** @brief Returns the size of the plane data.
             */
            unsigned int getDataSize() const;

            /** @brief Returns the distance between adjacent pixels in bytes.
             */
            int getPixelStride() const;

            /** @brief Returns the distance between the start of two consecutive rows of pixels.
             */
            int getRowStride() const;

        protected:
            const void*     _data;
            unsigned int    _dataSize;
            int             _pixelStride;
            int             _rowStride;
        };
}

#endif /* __cplusplus */

#endif //CameraFramePlane_hpp
