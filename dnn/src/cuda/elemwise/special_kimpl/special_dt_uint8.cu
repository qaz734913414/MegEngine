/**
 * \file dnn/src/cuda/elemwise/special_kimpl/special_dt_uint8.cu
 * MegEngine is Licensed under the Apache License, Version 2.0 (the "License")
 *
 * Copyright (c) 2014-2020 Megvii Inc. All rights reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT ARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */
// generated by gen_elemwise_special_kern_impls.py
#include "../special_kerns.inl"
INST(::megdnn::dtype::Uint8)
#undef INST
}
}
