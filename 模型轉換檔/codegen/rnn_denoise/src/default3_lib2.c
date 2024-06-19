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
TVM_DLL int32_t tvmgen_default3_fiti_main_0(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  fiti_dense_b(input_, filter_, bias_, -15, -22, 38, 24, 1116400558, -6, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_1(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  fiti_requant_b(input_, 24, 0, 15, -128, 127, 1268982971, -4, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_2(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  fiti_dense_b(input_, filter_, bias_, -15, 11, 24, 72, 1182339167, -5, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_3(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  //1 24 (24)
  //1 24 (24)
  fiti_add_b(input_0_, input_1_, -11, 1073741824, 20, -7, 2006966016, 19, output_, 12, 1628310084, -19, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_4(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  fiti_dense_b(input_, filter_, bias_, 1, 7, 24, 72, 1500815216, -10, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_6(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  fiti_sigmoid_b(input_, 24, 6.371056e-02f, -12, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_7(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* context_buffer_0_let = (&(global_workspace_25_var[32]));
  //1 24 (24)
  //1 24 (24)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 1, 1073741824, 1, output_, 0, 1090855596, -7, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_9(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  //1 24 (24)
  //1 24 (24)
  fiti_add_b(input_0_, input_1_, 0, 2118828242, 19, 0, 1073741824, 20, output_, 15, 1270755153, -23, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_10(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* context_buffer_2_let = (&(global_workspace_39_var[176]));
  //1 24 (24)
  //1 24 (24)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, 0, 1076301833, -7, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_11(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  //1 24 (24)
  //1 24 (24)
  fiti_add_b(input_0_, input_1_, -11, 1073741824, 20, -4, 1400453619, 19, output_, -6, 1150778289, -18, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_12(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  //1 24 (24)
  //1 24 (24)
  fiti_add_b(input_0_, input_1_, -11, 1073741824, 20, -7, 2006966016, 19, output_, -25, 1171697372, -18, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_14(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  fiti_sigmoid_b(input_, 24, 4.426935e-02f, 25, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_15(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* context_buffer_1_let = (&(global_workspace_33_var[240]));
  //1 24 (24)
  //1 24 (24)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, -7, 1073741824, 1, output_, 4, 1538760957, -7, -128, 127, 24);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_20(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  fiti_concat_b(input0_, 1, 1, 1, 24, input1_, 1, 1, 1, 48, input2_, 1, 1, 1, 38, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_21(int8_t* input0_, int8_t* input1_, int8_t* input2_, int8_t* output_, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  fiti_concat_b(input0_, 1, 1, 1, 24, input1_, 1, 1, 1, 24, input2_, 1, 1, 1, 38, 0, 0, 0, 0, 0, output_, 3);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_26(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  fiti_dense_b(input_, filter_, bias_, -15, -2, 86, 144, 1172582303, -6, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_27(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  //1 48 (48)
  //1 48 (48)
  fiti_add_b(input_0_, input_1_, 2, 1310967842, 19, -1, 1073741824, 20, output_, 2, 1899921063, -19, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_28(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  fiti_dense_b(input_, filter_, bias_, 128, 1, 48, 144, 1606748653, -9, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_30(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  fiti_sigmoid_b(input_, 48, 1.803763e-01f, -2, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_31(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* context_buffer_3_let = (&(global_workspace_59_var[48]));
  //1 48 (48)
  //1 48 (48)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 1819945765, -7, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_33(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  //1 48 (48)
  //1 48 (48)
  fiti_add_b(input_0_, input_1_, 128, 1268524316, 19, 128, 1073741824, 20, output_, 15, 1203607251, -20, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_34(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* context_buffer_5_let = (&(global_workspace_71_var[144]));
  //1 48 (48)
  //1 48 (48)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 128, 1073741824, 1, output_, -128, 1079451745, -7, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_35(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  //1 48 (48)
  //1 48 (48)
  fiti_add_b(input_0_, input_1_, 2, 1855385761, 19, -37, 1073741824, 20, output_, -128, 2039531283, -18, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_36(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  //1 48 (48)
  //1 48 (48)
  fiti_add_b(input_0_, input_1_, 2, 1310967842, 19, -1, 1073741824, 20, output_, -16, 1328104751, -18, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_38(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  fiti_sigmoid_b(input_, 48, 1.290187e-01f, 16, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_39(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* context_buffer_4_let = (&(global_workspace_67_var[288]));
  //1 48 (48)
  //1 48 (48)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, -1, 1073741824, 1, output_, 37, 1519644668, -7, -128, 127, 48);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_48(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  fiti_dense_b(input_, filter_, bias_, -15, 15, 110, 288, 1442556239, -7, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_49(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  //1 96 (96)
  //1 96 (96)
  fiti_add_b(input_0_, input_1_, -15, 1073741824, 20, 4, 1773680785, 18, output_, 8, 1866850754, -19, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_50(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  fiti_dense_b(input_, filter_, bias_, 1, -4, 96, 288, 2072253631, -11, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_52(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  fiti_sigmoid_b(input_, 96, 1.821832e-01f, -8, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_53(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* context_buffer_6_let = (&(global_workspace_91_var[96]));
  //1 96 (96)
  //1 96 (96)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 1, 1073741824, 1, output_, -1, 1073986170, -7, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_55(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  //1 96 (96)
  //1 96 (96)
  fiti_add_b(input_0_, input_1_, 1, 2147000422, 19, 0, 1073741824, 20, output_, -1, 2147478293, -19, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_56(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* context_buffer_8_let = (&(global_workspace_105_var[384]));
  //1 96 (96)
  //1 96 (96)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 0, 1073741824, 1, output_, 0, 1073744502, -7, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_57(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  //1 96 (96)
  //1 96 (96)
  fiti_add_b(input_0_, input_1_, -15, 1073741824, 20, 1, 1392014281, 18, output_, 11, 1665735812, -18, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_58(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  //1 96 (96)
  //1 96 (96)
  fiti_add_b(input_0_, input_1_, -15, 1073741824, 20, 4, 1773680785, 18, output_, -1, 1104513976, -18, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_60(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  fiti_sigmoid_b(input_, 96, 1.539631e-01f, 1, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_61(int8_t* input_0_, int8_t* input_1_, int8_t* output_, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* context_buffer_7_let = (&(global_workspace_99_var[576]));
  //1 96 (96)
  //1 96 (96)
  fiti_mul_b(input_0_, input_1_, 128, 1073741824, 1, 4, 1073741824, 1, output_, -1, 1368143465, -7, -128, 127, 96);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_66(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  fiti_dense_b(input_, filter_, bias_, 1, -9, 96, 18, 1206200211, -10, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_67(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  fiti_sigmoid_b(input_, 18, 5.614376e-02f, 9, 3.906250e-03f, -128, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_68(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  fiti_dense_b(input_, filter_, bias_, -15, 2, 24, 1, 1356325489, -6, -128, 127, output_);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default3_fiti_main_69(int8_t* input_, int8_t* output_, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  fiti_sigmoid_b(input_, 1, 8.422225e-02f, -2, 3.906250e-03f, -128, output_);
  return 0;
}

