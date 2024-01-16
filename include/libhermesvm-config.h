/*
* Copyright (c) Meta Platforms, Inc. and affiliates.
*
* This source code is licensed under the MIT license found in the
* LICENSE file in the root directory of this source tree.
*/
#ifndef LIBHERMESVM_CONFIG_H
#define LIBHERMESVM_CONFIG_H

#pragma once

#ifndef HERMESVM_COMPRESSED_POINTERS
/* #undef HERMESVM_COMPRESSED_POINTERS */
#endif
#ifndef HERMESVM_BOXED_DOUBLES
/* #undef HERMESVM_BOXED_DOUBLES */
#endif
#ifndef HERMESVM_CONTIGUOUS_HEAP
/* #undef HERMESVM_CONTIGUOUS_HEAP */
#endif
#ifndef HERMESVM_LOG_HEAP_SEGMENT_SIZE
#define HERMESVM_LOG_HEAP_SEGMENT_SIZE 22
#endif
#ifndef HERMES_IS_MOBILE_BUILD
/* #undef HERMES_IS_MOBILE_BUILD */
#endif
/// The value of `sizeof(void *)` as an integer for used by the preprocessor.
#define HERMESVM_SIZEOF_VOID_P   8

// The model changes depending on whether we are compiling with or without
// asserts. If the library is compiled with asserts, its model will have a _dbg
// suffix, while if the client code, which includes this same config file, is
// compiled without, its model will have a _rel suffix.
#ifdef NDEBUG
#define HERMESVM_MODEL _s22_p8_rel
#else
#define HERMESVM_MODEL _s22_p8_dbg
#endif

#endif
