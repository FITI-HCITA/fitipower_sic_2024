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
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_0(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {2,2};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,96,96,1};
  cmsis_nn_dims filter_dims = {8,6,6,1};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,48,48,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_1(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,48,48,8};
  cmsis_nn_dims filter_dims = {8,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,24,24,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_2(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,24,8};
  cmsis_nn_dims filter_dims = {4,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,24,4};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_3(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  //1 24 24 4 (2304)
  //1 24 24 4 (2304)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1502888521, 19, output_, -128, 1672115730, -19, -128, 127, 2304);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_4(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,24,4};
  cmsis_nn_dims filter_dims = {4,1,1,4};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,24,4};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_5(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,24,4};
  cmsis_nn_dims filter_dims = {4,3,3,4};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,24,4};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_7(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  fiti_concat(input0_, 1, 1, 576, 4, input1_, 1, 1, 576, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_8(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,24,8};
  cmsis_nn_dims filter_dims = {4,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,4};
  cmsis_nn_dims output_dims = {1,24,24,4};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_9(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  fiti_requant(input_, 2304, 128, -128, -128, 127, 1857986608, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_13(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,24,8};
  cmsis_nn_dims filter_dims = {8,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,24,24,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_14(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,24,24,8};
  cmsis_nn_dims filter_dims = {16,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,12,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_15(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {8,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_16(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  //1 12 12 8 (1152)
  //1 12 12 8 (1152)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 2099937309, 19, output_, -128, 1505631878, -19, -128, 127, 1152);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_17(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,8};
  cmsis_nn_dims filter_dims = {8,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_18(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,8};
  cmsis_nn_dims filter_dims = {8,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_20(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  //1 12 12 8 (1152)
  //1 12 12 8 (1152)
  fiti_add(input_0_, input_1_, 128, 1725544031, 19, 128, 1073741824, 20, output_, -128, 1323636027, -19, -128, 127, 1152);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_21(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,8};
  cmsis_nn_dims filter_dims = {8,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_22(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,8};
  cmsis_nn_dims filter_dims = {8,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_24(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  fiti_concat(input0_, 1, 1, 144, 8, input1_, 1, 1, 144, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_25(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {8,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_26(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  fiti_requant(input_, 1152, 128, -128, -128, 127, 1154848258, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_30(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,12,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_31(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {32,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,6,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_32(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_33(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  //1 6 6 16 (576)
  //1 6 6 16 (576)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1400335665, 19, output_, -128, 1969441551, -19, -128, 127, 576);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_34(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_35(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_37(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  //1 6 6 16 (576)
  //1 6 6 16 (576)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1797207027, 19, output_, -128, 1671938853, -19, -128, 127, 576);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_38(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_39(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_41(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  //1 6 6 16 (576)
  //1 6 6 16 (576)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1658820851, 19, output_, -128, 1486330135, -19, -128, 127, 576);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_42(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_43(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_45(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  fiti_concat(input0_, 1, 1, 36, 16, input1_, 1, 1, 36, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_46(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_47(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  fiti_requant(input_, 576, 128, -128, -128, 127, 1828573328, -1, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_51(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,6,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_52(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {64,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,3,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_53(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_54(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  //1 3 3 32 (288)
  //1 3 3 32 (288)
  fiti_add(input_0_, input_1_, 128, 1333093289, 19, 128, 1073741824, 20, output_, -128, 1575788369, -19, -128, 127, 288);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_55(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_56(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_58(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  fiti_concat(input0_, 1, 1, 9, 32, input1_, 1, 1, 9, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_59(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_60(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  fiti_requant(input_, 288, 128, -128, -128, 127, 1107157912, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_64(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,3,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_65(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_66(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* input3_, int8_t* output_, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  fiti_concat(input0_, 1, 1, 9, 32, input1_, 1, 1, 9, 32, input2_, 1, 1, 9, 32, input3_, 1, 1, 9, 32, output_, 4);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_67(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  fiti_pool(input_, 3, 3, 32, output_, 3, 3, 5, 5, 1, 1, 2, 2, -128, 127, 0);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_69(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  fiti_pool(input_, 3, 3, 32, output_, 3, 3, 5, 5, 1, 1, 2, 2, -128, 127, 0);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_71(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  fiti_pool(input_, 3, 3, 32, output_, 3, 3, 5, 5, 1, 1, 2, 2, -128, 127, 0);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_75(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,128};
  cmsis_nn_dims filter_dims = {64,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,3,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_76(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_77(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  fiti_resize2d(input_, 3, 32, 6, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_78(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  fiti_requant(input_, 1152, 128, -128, -128, 127, 1782951442, -1, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_79(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  fiti_concat(input0_, 1, 1, 36, 32, input1_, 1, 1, 36, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_83(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,64};
  cmsis_nn_dims filter_dims = {16,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_84(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_85(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_86(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  fiti_concat(input0_, 1, 1, 36, 16, input1_, 1, 1, 36, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_87(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,64};
  cmsis_nn_dims filter_dims = {16,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_88(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  fiti_requant(input_, 576, 128, -128, -128, 127, 1860990090, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_92(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,6,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_93(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_94(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  fiti_resize2d(input_, 6, 16, 12, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_95(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  fiti_concat(input0_, 1, 1, 144, 16, input1_, 1, 1, 144, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_96(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  fiti_requant(input_, 2304, 128, -128, -128, 127, 1912553536, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_100(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,32};
  cmsis_nn_dims filter_dims = {8,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_101(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,8};
  cmsis_nn_dims filter_dims = {8,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_102(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,8};
  cmsis_nn_dims filter_dims = {8,3,3,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_103(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  fiti_concat(input0_, 1, 1, 144, 8, input1_, 1, 1, 144, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_104(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,32};
  cmsis_nn_dims filter_dims = {8,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,12,12,8};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_105(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  fiti_requant(input_, 1152, 128, -128, -128, 127, 1779949250, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_109(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,12,12,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_110(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 5, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {18,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,18};
  cmsis_nn_dims output_dims = {1,12,12,18};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_111(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  fiti_slice(input_, output_, 0, 2, 144, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_112(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  fiti_sigmoid(input_, 864, 9.065086e-02f, -5, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_113(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  //1 144 3 2 (864)
  //1 144 3 2 (864)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1183404436, -6, -128, 127, 864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_115(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  //1 144 3 2 (864)
  //1 144 3 2 (864)
  fiti_add(input_0_, input_1_, 128, 1484558242, 16, 0, 1073741824, 20, output_, -128, 1916415871, -18, -128, 127, 864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_117(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  //1 144 3 2 (864)
  //1 144 3 2 (864)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 2062732600, -7, -128, 127, 864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_118(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  fiti_concat(input0_, 1, 1, 432, 2, input1_, 1, 1, 432, 2, input2_, 1, 1, 432, 2, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_119(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  fiti_slice(input_, output_, 2, 4, 144, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_120(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
  fiti_sigmoid(input_, 864, 9.065086e-02f, -5, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_121(int8_t* input_0_, int8_t* output_, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  //1 144 3 2 (864)
  //1 144 3 2 (864)
  fiti_mul(input_0_, input_0_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 1078178126, -7, -128, 127, 864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_122(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  //1 144 3 2 (864)
  //1 144 3 2 (864)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1609120368, -6, -128, 127, 864);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_124(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  fiti_slice(input_, output_, 4, 6, 144, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_125(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  fiti_sigmoid(input_, 864, 9.065086e-02f, -5, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_126(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  fiti_requant(input_, 864, 128, -128, -128, 127, 2071010440, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_130(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_278_var, uint8_t* global_workspace_279_var) {
  for(int i=0;i<1;i++)
  {
    fiti_dma(input0_ + i * 2592, output_ + i * 3402 + 0 , 2592);
   fiti_dma(input1_ + i * 648, output_ + i * 3402 + 2592 , 648);
   fiti_dma(input2_ + i * 162, output_ + i * 3402 + 3240 , 162);
   }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_131(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,12,12,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_132(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  fiti_concat(input0_, 1, 1, 36, 16, input1_, 1, 1, 36, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_133(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  fiti_requant(input_, 576, 128, -128, -128, 127, 2005287262, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_137(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_138(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_139(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_140(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  fiti_concat(input0_, 1, 1, 36, 16, input1_, 1, 1, 36, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_141(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,6,6,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_142(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  fiti_requant(input_, 576, 128, -128, -128, 127, 1910368568, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_146(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,6,6,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_147(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -24, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {18,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,18};
  cmsis_nn_dims output_dims = {1,6,6,18};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_148(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
  fiti_slice(input_, output_, 0, 2, 36, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_149(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var) {
  fiti_sigmoid(input_, 216, 7.372325e-02f, 24, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_150(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var) {
  //1 36 3 2 (216)
  //1 36 3 2 (216)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1141249910, -6, -128, 127, 216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_152(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var) {
  //1 36 3 2 (216)
  //1 36 3 2 (216)
  fiti_add(input_0_, input_1_, 128, 1795959067, 17, 0, 1073741824, 20, output_, -128, 1708171842, -18, -128, 127, 216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_154(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var) {
  //1 36 3 2 (216)
  //1 36 3 2 (216)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 2000616836, -7, -128, 127, 216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_155(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var) {
  fiti_concat(input0_, 1, 1, 108, 2, input1_, 1, 1, 108, 2, input2_, 1, 1, 108, 2, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_156(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var) {
  fiti_slice(input_, output_, 2, 4, 36, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_157(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var) {
  fiti_sigmoid(input_, 216, 7.372325e-02f, 24, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_158(int8_t* input_0_, int8_t* output_, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var) {
  //1 36 3 2 (216)
  //1 36 3 2 (216)
  fiti_mul(input_0_, input_0_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 1146644133, -7, -128, 127, 216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_159(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var) {
  //1 36 3 2 (216)
  //1 36 3 2 (216)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1231467718, -5, -128, 127, 216);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_161(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var) {
  fiti_slice(input_, output_, 4, 6, 36, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_162(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var) {
  fiti_sigmoid(input_, 216, 7.372325e-02f, 24, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_163(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var) {
  fiti_requant(input_, 216, 128, -128, -128, 127, 2088775822, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_167(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var) {
  fiti_requant(input_, 648, 128, -128, -128, 127, 2129218946, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_169(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,6,6,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_170(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var) {
  fiti_concat(input0_, 1, 1, 9, 32, input1_, 1, 1, 9, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_171(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var) {
  fiti_requant(input_, 288, 128, -128, -128, 127, 1749573870, -2, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_175(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_176(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_177(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_178(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var) {
  fiti_requant(input_, 288, 128, -128, -128, 127, 1524373801, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_179(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var) {
  fiti_concat(input0_, 1, 1, 9, 32, input1_, 1, 1, 9, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_180(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,3,3,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_184(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,3,3,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_185(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -28, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,3,3,64};
  cmsis_nn_dims filter_dims = {18,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,18};
  cmsis_nn_dims output_dims = {1,3,3,18};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_186(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_250_var, uint8_t* global_workspace_251_var) {
  fiti_slice(input_, output_, 0, 2, 9, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_187(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_252_var, uint8_t* global_workspace_253_var) {
  fiti_sigmoid(input_, 54, 7.155554e-02f, 28, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_188(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_254_var, uint8_t* global_workspace_255_var) {
  //1 9 3 2 (54)
  //1 9 3 2 (54)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1100825165, -6, -128, 127, 54);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_190(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_256_var, uint8_t* global_workspace_257_var) {
  //1 9 3 2 (54)
  //1 9 3 2 (54)
  fiti_add(input_0_, input_1_, 128, 1396433077, 19, 0, 1073741824, 20, output_, -128, 1156183066, -18, -128, 127, 54);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_192(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_258_var, uint8_t* global_workspace_259_var) {
  //1 9 3 2 (54)
  //1 9 3 2 (54)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1970692830, -7, -128, 127, 54);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_193(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_274_var, uint8_t* global_workspace_275_var) {
  fiti_concat(input0_, 1, 1, 27, 2, input1_, 1, 1, 27, 2, input2_, 1, 1, 27, 2, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_194(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_260_var, uint8_t* global_workspace_261_var) {
  fiti_slice(input_, output_, 2, 4, 9, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_195(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_262_var, uint8_t* global_workspace_263_var) {
  fiti_sigmoid(input_, 54, 7.155554e-02f, 28, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_196(int8_t* input_0_, int8_t* output_, uint8_t* global_const_workspace_264_var, uint8_t* global_workspace_265_var) {
  //1 9 3 2 (54)
  //1 9 3 2 (54)
  fiti_mul(input_0_, input_0_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 1790682861, -7, -128, 127, 54);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_197(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_266_var, uint8_t* global_workspace_267_var) {
  //1 9 3 2 (54)
  //1 9 3 2 (54)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1156441023, -5, -128, 127, 54);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_199(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_268_var, uint8_t* global_workspace_269_var) {
  fiti_slice(input_, output_, 4, 6, 9, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_200(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_270_var, uint8_t* global_workspace_271_var) {
  fiti_sigmoid(input_, 54, 7.155554e-02f, 28, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_201(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_272_var, uint8_t* global_workspace_273_var) {
  fiti_requant(input_, 54, 128, -128, -128, 127, 2088974682, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_human_det_6_001_001_fiti_main_205(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_276_var, uint8_t* global_workspace_277_var) {
  fiti_requant(input_, 162, 128, -128, -128, 127, 2129016255, 0, output_);
  return 0;
}

