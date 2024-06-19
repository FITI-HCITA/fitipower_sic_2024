// tvm target: fiti 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlpack/dlpack.h>
#include <arm_nnfunctions.h>
#include <arm_nn_types.h>
#include <arm_nn_math_types.h>
#include "fiti_dla.h"
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_0(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {-1, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,1};
  cmsis_nn_dims filter_dims = {4,3,3,1};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,192,4};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_1(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,4};
  cmsis_nn_dims filter_dims = {4,1,1,4};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,192,4};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_2(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,4};
  cmsis_nn_dims filter_dims = {4,3,3,4};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,192,4};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_3(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -5, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,4};
  cmsis_nn_dims filter_dims = {8,1,1,4};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,24,192,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_4(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  //1 24 192 8 (36864)
  //1 8 (8)
  int n = 4608;
  int x = 8;
  int8_t* input_1_new = fiti_malloc(36864);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 5, 1073741824, 1, 128, 1073741824, 1, output_, -23, 1500769890, -7, -128, 127, 36864);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_5(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* context_buffer_0_let = (&(global_workspace_11_var[55296]));
  cmsis_nn_context context= {context_buffer_0_let,32};
  cmsis_nn_tile stride = {192,24};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,24,192,8};
  cmsis_nn_dims filter_dims = {1,24,192,1};
  cmsis_nn_dims output_dims = {1,1,1,8};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_6(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  fiti_slice_a(input_, output_, 0, 8, 1, 1, 8);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_7(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  fiti_slice_a(input_, output_, 0, 8, 1, 1, 8);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_8(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  fiti_dense_a(input_, filter_, bias_, 5, -128, 8, 1, 1963741981, -1, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_9(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 3, 1, 8, 1249155538, -9, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_10(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  fiti_sigmoid_a(input_, 8, 8.224260e-03f, -3, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_12(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  //1 24 192 8 (36864)
  //1 24 192 8 (36864)
  fiti_add_a(input_0_, input_1_, 23, 1073741824, 20, -24, 1703414512, 19, output_, -128, 1829458692, -18, -128, 127, 36864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_13(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 24, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,4};
  cmsis_nn_dims filter_dims = {8,1,1,4};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,24,192,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_15(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,8};
  cmsis_nn_dims filter_dims = {4,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,192,4};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_16(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,4};
  cmsis_nn_dims filter_dims = {4,3,3,4};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,192,4};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_17(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -2, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,4};
  cmsis_nn_dims filter_dims = {8,1,1,4};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,24,192,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_18(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  //1 24 192 8 (36864)
  //1 8 (8)
  int n = 4608;
  int x = 8;
  int8_t* input_1_new = fiti_malloc(36864);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 2, 1073741824, 1, 128, 1073741824, 1, output_, -34, 1892939554, -7, -128, 127, 36864);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_19(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* context_buffer_1_let = (&(global_workspace_35_var[73728]));
  cmsis_nn_context context= {context_buffer_1_let,32};
  cmsis_nn_tile stride = {192,24};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,24,192,8};
  cmsis_nn_dims filter_dims = {1,24,192,1};
  cmsis_nn_dims output_dims = {1,1,1,8};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_20(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  fiti_slice_a(input_, output_, 0, 8, 1, 1, 8);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_21(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  fiti_slice_a(input_, output_, 0, 8, 1, 1, 8);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_22(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  fiti_dense_a(input_, filter_, bias_, 2, -128, 8, 1, 1211946045, -1, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_23(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 77, 1, 8, 1675535917, -7, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_24(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  fiti_sigmoid_a(input_, 8, 7.093449e-03f, -77, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_26(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  //1 24 192 8 (36864)
  //1 24 192 8 (36864)
  fiti_add_a(input_0_, input_1_, 34, 1073741824, 20, 128, 1337297986, 19, output_, -128, 1705229264, -18, -128, 127, 36864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_28(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,8};
  cmsis_nn_dims filter_dims = {8,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,24,192,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_29(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,8};
  cmsis_nn_dims filter_dims = {8,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,96,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_30(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -19, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,8};
  cmsis_nn_dims filter_dims = {16,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,96,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_31(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  //1 12 96 16 (18432)
  //1 16 (16)
  int n = 1152;
  int x = 16;
  int8_t* input_1_new = fiti_malloc(18432);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 19, 1073741824, 1, 128, 1073741824, 1, output_, -63, 2058018706, -8, -128, 127, 18432);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_32(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* context_buffer_2_let = (&(global_workspace_57_var[55296]));
  cmsis_nn_context context= {context_buffer_2_let,64};
  cmsis_nn_tile stride = {96,12};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,12,96,16};
  cmsis_nn_dims filter_dims = {1,12,96,1};
  cmsis_nn_dims output_dims = {1,1,1,16};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_33(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  fiti_slice_a(input_, output_, 0, 16, 1, 1, 16);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_34(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  fiti_slice_a(input_, output_, 0, 16, 1, 1, 16);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_35(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  fiti_dense_a(input_, filter_, bias_, 19, -128, 16, 2, 1481913256, -3, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_36(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 15, 2, 16, 2031352560, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_37(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  fiti_sigmoid_a(input_, 16, 1.228494e-02f, -15, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_39(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  //1 12 96 16 (18432)
  //1 12 96 16 (18432)
  fiti_add_a(input_0_, input_1_, 63, 1240133548, 19, -15, 1073741824, 20, output_, -128, 1250896534, -17, -128, 127, 18432);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_40(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 15, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,192,8};
  cmsis_nn_dims filter_dims = {16,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,96,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_42(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,16};
  cmsis_nn_dims filter_dims = {8,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,96,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_43(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,8};
  cmsis_nn_dims filter_dims = {8,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,96,8};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_44(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 3, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,8};
  cmsis_nn_dims filter_dims = {16,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,96,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_45(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  //1 12 96 16 (18432)
  //1 16 (16)
  int n = 1152;
  int x = 16;
  int8_t* input_1_new = fiti_malloc(18432);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, -3, 1073741824, 1, 128, 1073741824, 1, output_, -65, 1857443703, -8, -128, 127, 18432);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_46(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* context_buffer_3_let = (&(global_workspace_81_var[36864]));
  cmsis_nn_context context= {context_buffer_3_let,64};
  cmsis_nn_tile stride = {96,12};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,12,96,16};
  cmsis_nn_dims filter_dims = {1,12,96,1};
  cmsis_nn_dims output_dims = {1,1,1,16};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_47(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  fiti_slice_a(input_, output_, 0, 16, 1, 1, 16);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_48(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  fiti_slice_a(input_, output_, 0, 16, 1, 1, 16);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_49(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  fiti_dense_a(input_, filter_, bias_, -3, -128, 16, 2, 1183611029, -2, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_50(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  fiti_dense_a(input_, filter_, bias_, 128, -1, 2, 16, 1471418374, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_51(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  fiti_sigmoid_a(input_, 16, 1.016606e-02f, 1, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_53(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  //1 12 96 16 (18432)
  //1 12 96 16 (18432)
  fiti_add_a(input_0_, input_1_, 65, 1073741824, 20, 128, 1356454017, 19, output_, -128, 1428046629, -18, -128, 127, 18432);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_55(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,96,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_56(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_57(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -8, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {32,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,48,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_58(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  //1 6 48 32 (9216)
  //1 32 (32)
  int n = 288;
  int x = 32;
  int8_t* input_1_new = fiti_malloc(9216);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 8, 1073741824, 1, 128, 1073741824, 1, output_, -41, 1175843833, -7, -128, 127, 9216);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_59(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* context_buffer_4_let = (&(global_workspace_103_var[27648]));
  cmsis_nn_context context= {context_buffer_4_let,128};
  cmsis_nn_tile stride = {48,6};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {1,6,48,1};
  cmsis_nn_dims output_dims = {1,1,1,32};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_60(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_61(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_62(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  fiti_dense_a(input_, filter_, bias_, 8, -128, 32, 4, 1718907731, -4, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_63(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 22, 4, 32, 1299357176, -7, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_64(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  fiti_sigmoid_a(input_, 32, 2.196624e-02f, -22, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_66(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  //1 6 48 32 (9216)
  //1 6 48 32 (9216)
  fiti_add_a(input_0_, input_1_, 41, 1073741824, 20, -1, 1873220510, 19, output_, -128, 1628263079, -18, -128, 127, 9216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_67(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 1, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,96,16};
  cmsis_nn_dims filter_dims = {32,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,48,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_69(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_70(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_71(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -14, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {32,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,48,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_72(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  //1 6 48 32 (9216)
  //1 32 (32)
  int n = 288;
  int x = 32;
  int8_t* input_1_new = fiti_malloc(9216);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 14, 1073741824, 1, 128, 1073741824, 1, output_, -72, 1513658116, -8, -128, 127, 9216);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_73(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* context_buffer_5_let = (&(global_workspace_127_var[18432]));
  cmsis_nn_context context= {context_buffer_5_let,128};
  cmsis_nn_tile stride = {48,6};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {1,6,48,1};
  cmsis_nn_dims output_dims = {1,1,1,32};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_74(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_75(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_76(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  fiti_dense_a(input_, filter_, bias_, 14, -128, 32, 4, 2012482490, -5, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_77(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 7, 4, 32, 1960147779, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_78(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  fiti_sigmoid_a(input_, 32, 2.794628e-02f, -7, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_80(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  //1 6 48 32 (9216)
  //1 6 48 32 (9216)
  fiti_add_a(input_0_, input_1_, 72, 1073741824, 20, 128, 1636312883, 19, output_, -128, 1379245759, -18, -128, 127, 9216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_82(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_83(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_84(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 6, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {32,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,48,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_85(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  //1 6 48 32 (9216)
  //1 32 (32)
  int n = 288;
  int x = 32;
  int8_t* input_1_new = fiti_malloc(9216);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, -6, 1073741824, 1, 128, 1073741824, 1, output_, -64, 1134839236, -7, -128, 127, 9216);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_86(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* context_buffer_6_let = (&(global_workspace_149_var[18432]));
  cmsis_nn_context context= {context_buffer_6_let,128};
  cmsis_nn_tile stride = {48,6};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {1,6,48,1};
  cmsis_nn_dims output_dims = {1,1,1,32};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_87(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_88(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_89(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  fiti_dense_a(input_, filter_, bias_, -6, -128, 32, 4, 1605032996, -3, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_90(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  fiti_dense_a(input_, filter_, bias_, 128, -21, 4, 32, 1714581586, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_91(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  fiti_sigmoid_a(input_, 32, 1.851085e-02f, 21, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_93(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  //1 6 48 32 (9216)
  //1 6 48 32 (9216)
  fiti_add_a(input_0_, input_1_, 64, 1073741824, 20, 128, 1390701143, 19, output_, -128, 1434169952, -18, -128, 127, 9216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_95(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_96(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,48,16};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_97(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -33, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,16};
  cmsis_nn_dims filter_dims = {32,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,48,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_98(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  //1 6 48 32 (9216)
  //1 32 (32)
  int n = 288;
  int x = 32;
  int8_t* input_1_new = fiti_malloc(9216);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 33, 1073741824, 1, 128, 1073741824, 1, output_, -42, 1278841673, -7, -128, 127, 9216);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_99(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  void* context_buffer_7_let = (&(global_workspace_171_var[18432]));
  cmsis_nn_context context= {context_buffer_7_let,128};
  cmsis_nn_tile stride = {48,6};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {1,6,48,1};
  cmsis_nn_dims output_dims = {1,1,1,32};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_100(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_101(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  fiti_slice_a(input_, output_, 0, 32, 1, 1, 32);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_102(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  fiti_dense_a(input_, filter_, bias_, 33, -128, 32, 4, 1809807715, -4, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_103(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 27, 4, 32, 2056395886, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_104(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  fiti_sigmoid_a(input_, 32, 3.264676e-02f, -27, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_106(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  //1 6 48 32 (9216)
  //1 6 48 32 (9216)
  fiti_add_a(input_0_, input_1_, 42, 1073741824, 20, 128, 1452060326, 19, output_, -128, 1622254611, -18, -128, 127, 9216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_108(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,48,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_109(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,24,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_110(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -20, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,24,32};
  cmsis_nn_dims filter_dims = {64,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,24,64};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_111(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var) {
  //1 3 24 64 (4608)
  //1 64 (64)
  int n = 72;
  int x = 64;
  int8_t* input_1_new = fiti_malloc(4608);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 20, 1073741824, 1, 128, 1073741824, 1, output_, -37, 1229463230, -7, -128, 127, 4608);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_112(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  void* context_buffer_8_let = (&(global_workspace_193_var[13824]));
  cmsis_nn_context context= {context_buffer_8_let,256};
  cmsis_nn_tile stride = {24,3};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,3,24,64};
  cmsis_nn_dims filter_dims = {1,3,24,1};
  cmsis_nn_dims output_dims = {1,1,1,64};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_113(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  fiti_slice_a(input_, output_, 0, 64, 1, 1, 64);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_114(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
  fiti_slice_a(input_, output_, 0, 64, 1, 1, 64);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_115(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  fiti_dense_a(input_, filter_, bias_, 20, -128, 64, 8, 1683829159, -6, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_116(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
  fiti_dense_a(input_, filter_, bias_, 128, -5, 8, 64, 1394500214, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_117(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var) {
  fiti_sigmoid_a(input_, 64, 8.514798e-02f, 5, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_119(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var) {
  //1 3 24 64 (4608)
  //1 3 24 64 (4608)
  fiti_add_a(input_0_, input_1_, 37, 1673769632, 19, 10, 1073741824, 20, output_, -128, 2140719970, -18, -128, 127, 4608);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_120(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -10, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,48,32};
  cmsis_nn_dims filter_dims = {64,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,24,64};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_122(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,24,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,24,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_123(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,24,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,24,32};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_124(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -6, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,24,32};
  cmsis_nn_dims filter_dims = {64,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,24,64};
  fiti_convolve_wrapper_s8_a(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_125(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var) {
  //1 3 24 64 (4608)
  //1 64 (64)
  int n = 72;
  int x = 64;
  int8_t* input_1_new = fiti_malloc(4608);
  for(int i=0;i<n;i++) {
    memcpy(input_1_new + i * x, input_1_, x);
  }

  fiti_mul_a(input_0_, input_1_new, 6, 1073741824, 1, 128, 1073741824, 1, output_, -54, 2034909954, -8, -128, 127, 4608);

  fiti_free(input_1_new);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_126(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var) {
  void* context_buffer_9_let = (&(global_workspace_217_var[9216]));
  cmsis_nn_context context= {context_buffer_9_let,256};
  cmsis_nn_tile stride = {24,3};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_pool_params pool_params = {stride, padding, activation};
  cmsis_nn_dims input_dims = {1,3,24,64};
  cmsis_nn_dims filter_dims = {1,3,24,1};
  cmsis_nn_dims output_dims = {1,1,1,64};
  arm_cmsis_nn_status status = arm_avgpool_s8(&context, &pool_params, &input_dims, input_, &filter_dims, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_127(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var) {
  fiti_slice_a(input_, output_, 0, 64, 1, 1, 64);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_128(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var) {
  fiti_slice_a(input_, output_, 0, 64, 1, 1, 64);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_129(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var) {
  fiti_dense_a(input_, filter_, bias_, 6, -128, 64, 8, 1115664847, -5, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_130(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var) {
  fiti_dense_a(input_, filter_, bias_, 128, 9, 8, 64, 1825499598, -8, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_131(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var) {
  fiti_sigmoid_a(input_, 64, 4.268691e-02f, -9, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_133(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var) {
  //1 3 24 64 (4608)
  //1 3 24 64 (4608)
  fiti_add_a(input_0_, input_1_, 54, 1073741824, 20, 128, 1289950889, 19, output_, -128, 1509298139, -18, -128, 127, 4608);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_135(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var) {
  //1 192 (192)
  //192 (192)
  fiti_mul_a(input_0_, input_1_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -88, 1317510406, -3, -128, 127, 192);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_137(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var) {
  //1 192 (192)
  //192 (192)
  fiti_add_a(input_0_, input_1_, 88, 1073741824, 20, -127, 1427631364, 17, output_, -86, 1116116288, -18, -128, 127, 192);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_139(int8_t* input_, int8_t* filter_, int8_t* output_, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var) {
  fiti_dense_a(input_, filter_, NULL, 86, -8, 192, 64, 1255537369, -9, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_fiti_main_140(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var) {
  fiti_dense_a(input_, filter_, bias_, 8, -15, 64, 4, 1432944937, -8, -128, 127, output_);
  return 0;
}

