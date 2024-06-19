#ifndef TVMGEN_MODEL_FACE_DET_3_001_001_H_
#define TVMGEN_MODEL_FACE_DET_3_001_001_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor serving_default_input_1_0_int8 size (in bytes) for TVM module "model_face_det_3_001_001" 
 */
#define TVMGEN_MODEL_FACE_DET_3_001_001_SERVING_DEFAULT_INPUT_1_0_INT8_SIZE 307200
/*!
 * \brief Output tensor StatefulPartitionedCall_0_int8 size (in bytes) for TVM module "model_face_det_3_001_001" 
 */
#define TVMGEN_MODEL_FACE_DET_3_001_001_STATEFULPARTITIONEDCALL_0_INT8_SIZE 9000
/*!
 * \brief Input tensor pointers for TVM module "model_face_det_3_001_001" 
 */
struct tvmgen_model_face_det_3_001_001_inputs {
  void* serving_default_input_1_0_int8;
};

/*!
 * \brief Output tensor pointers for TVM module "model_face_det_3_001_001" 
 */
struct tvmgen_model_face_det_3_001_001_outputs {
  void* StatefulPartitionedCall_0_int8;
};

/*!
 * \brief entrypoint function for TVM module "model_face_det_3_001_001"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_model_face_det_3_001_001_run(
  struct tvmgen_model_face_det_3_001_001_inputs* inputs,
  struct tvmgen_model_face_det_3_001_001_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "model_face_det_3_001_001" 
 */
#define TVMGEN_MODEL_FACE_DET_3_001_001_WORKSPACE_SIZE 614400

#define TVMGEN_MODEL_FACE_DET_3_001_001_SERVING_DEFAULT_INPUT_1_0_INT8_SCALES 0.003921568859368563

#define TVMGEN_MODEL_FACE_DET_3_001_001_SERVING_DEFAULT_INPUT_1_0_INT8_ZERO_POINTS -128

#define TVMGEN_MODEL_FACE_DET_3_001_001_STATEFULPARTITIONEDCALL_0_INT8_SCALES 0.003995565231889486

#define TVMGEN_MODEL_FACE_DET_3_001_001_STATEFULPARTITIONEDCALL_0_INT8_ZERO_POINTS -126

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_MODEL_FACE_DET_3_001_001_H_
