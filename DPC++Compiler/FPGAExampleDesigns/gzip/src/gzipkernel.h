// ==============================================================
// Copyright (C) 2019 Intel Corporation
// 
// SPDX-License-Identifier: MIT
// =============================================================
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of this
// software and associated documentation files (the "Software"), to deal in the Software
// without restriction, including without limitation the rights to use, copy, modify, merge,
// publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to
// whom the Software is furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
// 
// This agreement shall be governed in all respects by the laws of the State of California and
// by the laws of the United States of America.

#ifndef __GZIPKERNEL_H__
#define __GZIPKERNEL_H__
#pragma once

class LZReduction;
class StaticHuffman;

extern "C" void submit_gzip_tasks(
    cl::sycl::queue &sycl_device,
    size_t block_size,      // size of block to compress.
    cl::sycl::buffer<char, 1> *  pibuf,
    cl::sycl::buffer<char, 1> *  pobuf,
    cl::sycl::buffer<struct gzip_out_info_t, 1> *  gzip_out_buf,
    cl::sycl::buffer<unsigned, 1> *  current_crc,
    bool bLastBlock);

#endif //__GZIPKERNEL_H__
