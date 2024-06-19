#ifndef TVMGEN_MODEL_HUMAN_DET_7_002_003_H_
#define TVMGEN_MODEL_HUMAN_DET_7_002_003_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor serving_default_input_1_0_int8 size (in bytes) for TVM module "model_human_det_7_002_003" 
 */
#define TVMGEN_MODEL_HUMAN_DET_7_002_003_SERVING_DEFAULT_INPUT_1_0_INT8_SIZE 307200
/*!
 * \brief Output tensor StatefulPartitionedCall_0_int8 size (in bytes) for TVM module "model_human_det_7_002_003" 
 */
#define TVMGEN_MODEL_HUMAN_DET_7_002_003_STATEFULPARTITIONEDCALL_0_INT8_SIZE 9000
/*!
 * \brief Input tensor pointers for TVM module "model_human_det_7_002_003" 
 */
struct tvmgen_model_human_det_7_002_003_inputs {
  void* serving_default_input_1_0_int8;
};

/*!
 * \brief Output tensor pointers for TVM module "model_human_det_7_002_003" 
 */
struct tvmgen_model_human_det_7_002_003_outputs {
  void* StatefulPartitionedCall_0_int8;
};

/*!
 * \brief entrypoint function for TVM module "model_human_det_7_002_003"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_model_human_det_7_002_003_run(
  struct tvmgen_model_human_det_7_002_003_inputs* inputs,
  struct tvmgen_model_human_det_7_002_003_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "model_human_det_7_002_003" 
 */
#define TVMGEN_MODEL_HUMAN_DET_7_002_003_WORKSPACE_SIZE 614400

#define TVMGEN_MODEL_HUMAN_DET_7_002_003_SERVING_DEFAULT_INPUT_1_0_INT8_SCALES 0.003921568859368563

#define TVMGEN_MODEL_HUMAN_DET_7_002_003_SERVING_DEFAULT_INPUT_1_0_INT8_ZERO_POINTS -128

#define TVMGEN_MODEL_HUMAN_DET_7_002_003_STATEFULPARTITIONEDCALL_0_INT8_SCALES 0.004071631468832493

#define TVMGEN_MODEL_HUMAN_DET_7_002_003_STATEFULPARTITIONEDCALL_0_INT8_ZERO_POINTS -128

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_MODEL_HUMAN_DET_7_002_003_H_
