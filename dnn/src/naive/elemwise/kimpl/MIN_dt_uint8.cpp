/**
 * \file dnn/src/naive/elemwise/kimpl/MIN_dt_uint8.cpp
 * MegEngine is Licensed under the Apache License, Version 2.0 (the "License")
 *
 * Copyright (c) 2014-2020 Megvii Inc. All rights reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT ARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */
// generated by gen_elemwise_kern_impls.py
#define KERN_IMPL_MODE(cb) MEGDNN_ELEMWISE_MODE_ENABLE(MIN, cb)
#define KERN_IMPL_ARITY 2
#define KERN_IMPL_CTYPE dt_uint8
#include "../kern_impl.inl"
