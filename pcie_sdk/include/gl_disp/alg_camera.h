/*
 The MIT License (MIT)

Copyright (c) 2022 Aili-Light. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#ifndef __ALG_CAMERA_H__
#define __ALG_CAMERA_H__

#include "glDisplay.h"
#include "jetson-utils/RingBuffer.h"
#include "alg_common/basic_types.h"

class AlgCamera 
{
public:
    AlgCamera();
    ~AlgCamera();

    /* Initialize Camera */
    int init_camera(int _ch_id);

    /* Close Camera */
    int close_camera();

    /* Capture the Latest Frame */
    int capture_image(void *msg);

    /* Convert Image for Display */
    int img_converter();

    /* Convert YUV to RGB (by CUDA) */
    int cuda_yuv_2_rgb_converter(void* src, void* dst, int width, int height, int video_format);

    /* Image Render & Display */
    int render_image();

    /* Return is camera init */    
    bool is_init();

    /* Return is camera close */    
    int is_closed();

    /* Get pointer to the next image in buffer */
    void* next_image();

private:

    /* camera initialized */
    bool b_init;

    /* Display Windows Hanlder*/
    glDisplay* display;

    /* Channel ID*/
    int ch_id;

    /* Image width */
    int width;

    /* Image height */
    int height;

    /* Image Data Type */
    int data_type;

    /* Image format */
    int format;

    /* PCIE Image Data */
    pcie_image_data_t* pcie_image;

    /* YUV Image */
    void* nextYUV;

    /* RGB Image */
    void* nextRGB;

    /* Buffer Size */
    int buffer_size;

    /* RGB Buffer */
    RingBuffer mBufferRGB;

    /* YUV Buffer */
    RingBuffer mBufferYUV;
};

#endif
