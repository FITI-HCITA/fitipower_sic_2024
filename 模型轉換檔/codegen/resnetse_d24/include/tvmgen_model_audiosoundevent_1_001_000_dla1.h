#ifndef TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_H_
#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor serving_default_input_0 size (in bytes) for TVM module "model_audiosoundevent_1_001_000_dla1" 
 */
#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_SERVING_DEFAULT_INPUT_0_SIZE 4608
/*!
 * \brief Output tensor PartitionedCall_0 size (in bytes) for TVM module "model_audiosoundevent_1_001_000_dla1" 
 */
#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_PARTITIONEDCALL_0_SIZE 4
/*!
 * \brief Input tensor pointers for TVM module "model_audiosoundevent_1_001_000_dla1" 
 */
struct tvmgen_model_audiosoundevent_1_001_000_dla1_inputs {
  void* serving_default_input_0;
};

/*!
 * \brief Output tensor pointers for TVM module "model_audiosoundevent_1_001_000_dla1" 
 */
struct tvmgen_model_audiosoundevent_1_001_000_dla1_outputs {
  void* PartitionedCall_0;
};

/*!
 * \brief entrypoint function for TVM module "model_audiosoundevent_1_001_000_dla1"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_model_audiosoundevent_1_001_000_dla1_run(
  struct tvmgen_model_audiosoundevent_1_001_000_dla1_inputs* inputs,
  struct tvmgen_model_audiosoundevent_1_001_000_dla1_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "model_audiosoundevent_1_001_000_dla1" 
 */
#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_WORKSPACE_SIZE 110600

#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_SERVING_DEFAULT_INPUT_0_SCALES 0.1588187962770462

#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_SERVING_DEFAULT_INPUT_0_ZERO_POINTS 1

#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_PARTITIONEDCALL_0_SCALES 0.13451950252056122

#define TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_PARTITIONEDCALL_0_ZERO_POINTS -15

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_MODEL_AUDIOSOUNDEVENT_1_001_000_DLA1_H_
