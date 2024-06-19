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
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_0(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {2,2};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,320,320,3};
  cmsis_nn_dims filter_dims = {16,6,6,3};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,160,160,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_1(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,160,160,16};
  cmsis_nn_dims filter_dims = {32,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,80,80,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_2(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,80,80,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,80,80,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_3(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  //1 80 80 16 (102400)
  //1 80 80 16 (102400)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1727021025, 19, output_, -128, 1913554719, -19, -128, 127, 102400);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_4(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,80,80,16};
  cmsis_nn_dims filter_dims = {16,1,1,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,80,80,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_5(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,80,80,16};
  cmsis_nn_dims filter_dims = {16,3,3,16};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,80,80,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_7(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  fiti_concat(input0_, 1, 1, 6400, 16, input1_, 1, 1, 6400, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_8(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,80,80,32};
  cmsis_nn_dims filter_dims = {16,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,16};
  cmsis_nn_dims output_dims = {1,80,80,16};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_9(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  fiti_requant(input_, 102400, 128, -128, -128, 127, 1648856584, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_13(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,80,80,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,80,80,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_14(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,80,80,32};
  cmsis_nn_dims filter_dims = {64,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,40,40,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_15(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_16(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  //1 40 40 32 (51200)
  //1 40 40 32 (51200)
  fiti_add(input_0_, input_1_, 128, 1911890350, 19, 128, 1073741824, 20, output_, -128, 1479862726, -19, -128, 127, 51200);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_17(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_18(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_20(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  //1 40 40 32 (51200)
  //1 40 40 32 (51200)
  fiti_add(input_0_, input_1_, 128, 1844638614, 19, 128, 1073741824, 20, output_, -128, 1931443671, -19, -128, 127, 51200);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_21(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_22(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_24(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  fiti_concat(input0_, 1, 1, 1600, 32, input1_, 1, 1, 1600, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_25(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,64};
  cmsis_nn_dims filter_dims = {32,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_26(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  fiti_requant(input_, 51200, 128, -128, -128, 127, 1073955425, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_30(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,40,40,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_31(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,64};
  cmsis_nn_dims filter_dims = {128,3,3,64};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,20,20,128};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_32(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,128};
  cmsis_nn_dims filter_dims = {64,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_33(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  //1 20 20 64 (25600)
  //1 20 20 64 (25600)
  fiti_add(input_0_, input_1_, 128, 1674120822, 19, 128, 1073741824, 20, output_, -128, 1073741824, -18, -128, 127, 25600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_34(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_35(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,64};
  cmsis_nn_dims filter_dims = {64,3,3,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_37(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  //1 20 20 64 (25600)
  //1 20 20 64 (25600)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1400297559, 19, output_, -128, 1616170250, -19, -128, 127, 25600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_38(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_39(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,64};
  cmsis_nn_dims filter_dims = {64,3,3,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_41(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  //1 20 20 64 (25600)
  //1 20 20 64 (25600)
  fiti_add(input_0_, input_1_, 128, 1073741824, 20, 128, 1439803316, 19, output_, -128, 2121023606, -19, -128, 127, 25600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_42(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_43(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,64};
  cmsis_nn_dims filter_dims = {64,3,3,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_45(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  fiti_concat(input0_, 1, 1, 400, 64, input1_, 1, 1, 400, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_46(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,128};
  cmsis_nn_dims filter_dims = {64,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_47(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  fiti_requant(input_, 25600, 128, -128, -128, 127, 1124033330, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_51(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,20,20,128};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_52(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,128};
  cmsis_nn_dims filter_dims = {240,3,3,128};
  cmsis_nn_dims bias_dims = {1,1,1,240};
  cmsis_nn_dims output_dims = {1,10,10,240};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_53(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,240};
  cmsis_nn_dims filter_dims = {120,1,1,240};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_54(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  //1 10 10 120 (12000)
  //1 10 10 120 (12000)
  fiti_add(input_0_, input_1_, 128, 2029054478, 19, 128, 1073741824, 20, output_, -128, 1172278533, -19, -128, 127, 12000);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_55(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,120};
  cmsis_nn_dims filter_dims = {120,1,1,120};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_56(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,120};
  cmsis_nn_dims filter_dims = {120,3,3,120};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_58(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  fiti_concat(input0_, 1, 1, 100, 120, input1_, 1, 1, 100, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_59(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,240};
  cmsis_nn_dims filter_dims = {120,1,1,240};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_60(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  fiti_requant(input_, 12000, 128, -128, -128, 127, 2054647004, -1, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_64(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,240};
  cmsis_nn_dims filter_dims = {240,1,1,240};
  cmsis_nn_dims bias_dims = {1,1,1,240};
  cmsis_nn_dims output_dims = {1,10,10,240};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_65(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,240};
  cmsis_nn_dims filter_dims = {120,1,1,240};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_66(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* input3_, int8_t* output_, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  fiti_concat(input0_, 1, 1, 100, 120, input1_, 1, 1, 100, 120, input2_, 1, 1, 100, 120, input3_, 1, 1, 100, 120, output_, 4);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_67(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  fiti_pool(input_, 10, 10, 120, output_, 10, 10, 5, 5, 1, 1, 2, 2, -128, 127, 0);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_69(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  fiti_pool(input_, 10, 10, 120, output_, 10, 10, 5, 5, 1, 1, 2, 2, -128, 127, 0);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_71(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  fiti_pool(input_, 10, 10, 120, output_, 10, 10, 5, 5, 1, 1, 2, 2, -128, 127, 0);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_75(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,480};
  cmsis_nn_dims filter_dims = {256,1,1,480};
  cmsis_nn_dims bias_dims = {1,1,1,256};
  cmsis_nn_dims output_dims = {1,10,10,256};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_76(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,256};
  cmsis_nn_dims filter_dims = {128,1,1,256};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,10,10,128};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_77(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  fiti_resize2d(input_, 10, 128, 20, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_78(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  fiti_requant(input_, 51200, 128, -128, -128, 127, 1905372993, -1, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_79(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  fiti_concat(input0_, 1, 1, 400, 128, input1_, 1, 1, 400, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_83(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,256};
  cmsis_nn_dims filter_dims = {60,1,1,256};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_84(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,60};
  cmsis_nn_dims filter_dims = {60,1,1,60};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_85(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,60};
  cmsis_nn_dims filter_dims = {60,3,3,60};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_86(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  fiti_requant(input_, 24000, 128, -128, -128, 127, 1916631487, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_87(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  fiti_concat(input0_, 1, 1, 400, 60, input1_, 1, 1, 400, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_88(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,256};
  cmsis_nn_dims filter_dims = {60,1,1,256};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_92(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,120};
  cmsis_nn_dims filter_dims = {120,1,1,120};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,20,20,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_93(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,120};
  cmsis_nn_dims filter_dims = {64,1,1,120};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_94(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  fiti_resize2d(input_, 20, 64, 40, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_95(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  fiti_requant(input_, 102400, 128, -128, -128, 127, 1972938747, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_96(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  fiti_concat(input0_, 1, 1, 1600, 64, input1_, 1, 1, 1600, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_100(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,128};
  cmsis_nn_dims filter_dims = {32,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_101(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,32};
  cmsis_nn_dims filter_dims = {32,1,1,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_102(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,32};
  cmsis_nn_dims filter_dims = {32,3,3,32};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_103(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  fiti_requant(input_, 51200, 128, -128, -128, 127, 2064295003, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_104(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  fiti_concat(input0_, 1, 1, 1600, 32, input1_, 1, 1, 1600, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_105(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,128};
  cmsis_nn_dims filter_dims = {32,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,32};
  cmsis_nn_dims output_dims = {1,40,40,32};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_109(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,64};
  cmsis_nn_dims filter_dims = {64,1,1,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,40,40,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_110(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,40,40,64};
  cmsis_nn_dims filter_dims = {64,3,3,64};
  cmsis_nn_dims bias_dims = {1,1,1,64};
  cmsis_nn_dims output_dims = {1,20,20,64};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_111(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  fiti_concat(input0_, 1, 1, 400, 64, input1_, 1, 1, 400, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_112(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  fiti_requant(input_, 25600, 128, -128, -128, 127, 1214408133, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_116(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,128};
  cmsis_nn_dims filter_dims = {60,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_117(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,60};
  cmsis_nn_dims filter_dims = {60,1,1,60};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_118(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,60};
  cmsis_nn_dims filter_dims = {60,3,3,60};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_119(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  fiti_concat(input0_, 1, 1, 400, 60, input1_, 1, 1, 400, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_120(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,128};
  cmsis_nn_dims filter_dims = {60,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,60};
  cmsis_nn_dims output_dims = {1,20,20,60};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_121(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
  fiti_requant(input_, 24000, 128, -128, -128, 127, 1773538390, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_125(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,120};
  cmsis_nn_dims filter_dims = {120,1,1,120};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,20,20,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_126(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 33, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,120};
  cmsis_nn_dims filter_dims = {18,1,1,120};
  cmsis_nn_dims bias_dims = {1,1,1,18};
  cmsis_nn_dims output_dims = {1,20,20,18};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_127(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  fiti_slice(input_, output_, 0, 2, 400, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_128(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  fiti_sigmoid(input_, 2400, 1.643720e-01f, -33, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_129(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  //1 400 3 2 (2400)
  //1 400 3 2 (2400)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1083437991, -6, -128, 127, 2400);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_131(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  //1 400 3 2 (2400)
  //1 400 3 2 (2400)
  fiti_add(input_0_, input_1_, 128, 1840661434, 15, 0, 1073741824, 20, output_, -128, 1969395936, -18, -128, 127, 2400);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_133(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  //1 400 3 2 (2400)
  //1 400 3 2 (2400)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1082196378, -6, -128, 127, 2400);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_134(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
  fiti_concat(input0_, 1, 1, 1200, 2, input1_, 1, 1, 1200, 2, input2_, 1, 1, 1200, 2, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_135(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  fiti_slice(input_, output_, 2, 4, 400, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_136(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  fiti_sigmoid(input_, 2400, 1.643720e-01f, -33, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_137(int8_t* input_0_, int8_t* output_, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  //1 400 3 2 (2400)
  //1 400 3 2 (2400)
  fiti_mul(input_0_, input_0_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 2139095930, -8, -128, 127, 2400);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_138(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  //1 400 3 2 (2400)
  //1 400 3 2 (2400)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1219834937, -7, -128, 127, 2400);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_140(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  fiti_slice(input_, output_, 4, 6, 400, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_141(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  fiti_sigmoid(input_, 2400, 1.643720e-01f, -33, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_142(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  fiti_requant(input_, 2400, 128, -128, -128, 127, 2112443005, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_146(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  fiti_requant(input_, 7200, 128, -126, -128, 127, 2134305287, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_147(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_250_var, uint8_t* global_workspace_251_var) {
  for(int i=0;i<1;i++)
  {
    fiti_dma(input0_ + i * 7200, output_ + i * 9000 + 0 , 7200);
   fiti_dma(input1_ + i * 1800, output_ + i * 9000 + 7200 , 1800);
   }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_148(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
  cmsis_nn_tile stride = {2,2};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,20,20,120};
  cmsis_nn_dims filter_dims = {128,3,3,120};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,10,10,128};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_149(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var) {
  fiti_concat(input0_, 1, 1, 100, 128, input1_, 1, 1, 100, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_150(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var) {
  fiti_requant(input_, 12800, 128, -128, -128, 127, 1303638601, -1, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_154(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,256};
  cmsis_nn_dims filter_dims = {120,1,1,256};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_155(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,120};
  cmsis_nn_dims filter_dims = {120,1,1,120};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_156(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {1,1};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,120};
  cmsis_nn_dims filter_dims = {120,3,3,120};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_157(int8_t* input0_, int8_t* input1_, int8_t* output_, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var) {
  fiti_concat(input0_, 1, 1, 100, 120, input1_, 1, 1, 100, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, output_, 2);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_158(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,256};
  cmsis_nn_dims filter_dims = {120,1,1,256};
  cmsis_nn_dims bias_dims = {1,1,1,120};
  cmsis_nn_dims output_dims = {1,10,10,120};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_159(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var) {
  fiti_requant(input_, 12000, 128, -128, -128, 127, 1554415048, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_163(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, -128, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,240};
  cmsis_nn_dims filter_dims = {240,1,1,240};
  cmsis_nn_dims bias_dims = {1,1,1,240};
  cmsis_nn_dims output_dims = {1,10,10,240};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_164(int8_t* input_, int8_t* filter_, int32_t* multiplier_, int32_t* bias_, int32_t* shift_, int8_t* output_, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var) {
  cmsis_nn_tile stride = {1,1};
  cmsis_nn_tile padding = {0,0};
  cmsis_nn_tile dilation = {1,1};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_conv_params conv_params = {128, 43, stride, padding, dilation, activation};
  cmsis_nn_per_channel_quant_params quant_params = {multiplier_, shift_};
  cmsis_nn_dims input_dims = {1,10,10,240};
  cmsis_nn_dims filter_dims = {18,1,1,240};
  cmsis_nn_dims bias_dims = {1,1,1,18};
  cmsis_nn_dims output_dims = {1,10,10,18};
  fiti_convolve_wrapper_s8(&conv_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_165(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var) {
  fiti_slice(input_, output_, 0, 2, 100, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_166(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var) {
  fiti_sigmoid(input_, 600, 1.313196e-01f, -43, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_167(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var) {
  //1 100 3 2 (600)
  //1 100 3 2 (600)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -128, 1081619349, -6, -128, 127, 600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_169(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var) {
  //1 100 3 2 (600)
  //1 100 3 2 (600)
  fiti_add(input_0_, input_1_, 128, 2006440850, 16, 0, 1073741824, 20, output_, -126, 1801644446, -18, -128, 127, 600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_171(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var) {
  //1 100 3 2 (600)
  //1 100 3 2 (600)
  fiti_mul(input_0_, input_1_, 126, 1073741824, 1, 0, 1073741824, 1, output_, -126, 1082196480, -6, -128, 127, 600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_172(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var) {
  fiti_concat(input0_, 1, 1, 300, 2, input1_, 1, 1, 300, 2, input2_, 1, 1, 300, 2, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_173(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var) {
  fiti_slice(input_, output_, 2, 4, 100, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_174(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var) {
  fiti_sigmoid(input_, 600, 1.313196e-01f, -43, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_175(int8_t* input_0_, int8_t* output_, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var) {
  //1 100 3 2 (600)
  //1 100 3 2 (600)
  fiti_mul(input_0_, input_0_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 1217739704, -7, -128, 127, 600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_176(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var) {
  //1 100 3 2 (600)
  //1 100 3 2 (600)
  fiti_mul(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, -126, 1667445640, -6, -128, 127, 600);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_178(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var) {
  fiti_slice(input_, output_, 4, 6, 100, 3, 6);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_179(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var) {
  fiti_sigmoid(input_, 600, 1.313196e-01f, -43, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_180(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var) {
  fiti_requant(input_, 600, 128, -126, -128, 127, 2103022536, 0, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_model_face_det_3_001_001_fiti_main_184(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var) {
  fiti_requant(input_, 1800, 126, -126, -128, 127, 2143865887, 0, output_);
  return 0;
}

