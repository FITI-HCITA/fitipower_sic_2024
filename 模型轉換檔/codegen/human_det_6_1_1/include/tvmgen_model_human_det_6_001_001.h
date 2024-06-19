#ifndef TVMGEN_MODEL_HUMAN_DET_6_001_001_H_
#define TVMGEN_MODEL_HUMAN_DET_6_001_001_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor serving_default_input_1_0_int8 size (in bytes) for TVM module "model_human_det_6_001_001" 
 */
#define TVMGEN_MODEL_HUMAN_DET_6_001_001_SERVING_DEFAULT_INPUT_1_0_INT8_SIZE 9216
/*!
 * \brief Output tensor StatefulPartitionedCall_0_int8 size (in bytes) for TVM module "model_human_det_6_001_001" 
 */
#define TVMGEN_MODEL_HUMAN_DET_6_001_001_STATEFULPARTITIONEDCALL_0_INT8_SIZE 3402
/*!
 * \brief Input tensor pointers for TVM module "model_human_det_6_001_001" 
 */
struct tvmgen_model_human_det_6_001_001_inputs {
  void* serving_default_input_1_0_int8;
};

/*!
 * \brief Output tensor pointers for TVM module "model_human_det_6_001_001" 
 */
struct tvmgen_model_human_det_6_001_001_outputs {
  void* StatefulPartitionedCall_0_int8;
};

/*!
 * \brief entrypoint function for TVM module "model_human_det_6_001_001"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_model_human_det_6_001_001_run(
  struct tvmgen_model_human_det_6_001_001_inputs* inputs,
  struct tvmgen_model_human_det_6_001_001_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "model_human_det_6_001_001" 
 */
#define TVMGEN_MODEL_HUMAN_DET_6_001_001_WORKSPACE_SIZE 23040

#define TVMGEN_MODEL_HUMAN_DET_6_001_001_SERVING_DEFAULT_INPUT_1_0_INT8_SCALES 0.003921568859368563

#define TVMGEN_MODEL_HUMAN_DET_6_001_001_SERVING_DEFAULT_INPUT_1_0_INT8_ZERO_POINTS -128

#define TVMGEN_MODEL_HUMAN_DET_6_001_001_STATEFULPARTITIONEDCALL_0_INT8_SCALES 0.0040504904463887215

#define TVMGEN_MODEL_HUMAN_DET_6_001_001_STATEFULPARTITIONEDCALL_0_INT8_ZERO_POINTS -128

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_MODEL_HUMAN_DET_6_001_001_H_
