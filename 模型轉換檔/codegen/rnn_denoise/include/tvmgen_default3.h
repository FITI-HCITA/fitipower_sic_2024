#ifndef TVMGEN_DEFAULT3_H_
#define TVMGEN_DEFAULT3_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor noise_gru_prev_state size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_NOISE_GRU_PREV_STATE_SIZE 48
/*!
 * \brief Input tensor denoise_gru_prev_state size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_DENOISE_GRU_PREV_STATE_SIZE 96
/*!
 * \brief Input tensor vad_gru_prev_state size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_VAD_GRU_PREV_STATE_SIZE 24
/*!
 * \brief Input tensor main_input size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_MAIN_INPUT_SIZE 38
/*!
 * \brief Output tensor Identity_2 size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_IDENTITY_2_SIZE 24
/*!
 * \brief Output tensor Identity_3 size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_IDENTITY_3_SIZE 48
/*!
 * \brief Output tensor Identity_4 size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_IDENTITY_4_SIZE 96
/*!
 * \brief Output tensor Identity size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_IDENTITY_SIZE 18
/*!
 * \brief Output tensor Identity_1 size (in bytes) for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_IDENTITY_1_SIZE 1
/*!
 * \brief Input tensor pointers for TVM module "default3" 
 */
struct tvmgen_default3_inputs {
  void* main_input;
  void* vad_gru_prev_state;
  void* noise_gru_prev_state;
  void* denoise_gru_prev_state;
};

/*!
 * \brief Output tensor pointers for TVM module "default3" 
 */
struct tvmgen_default3_outputs {
  void* Identity;
  void* Identity_1;
  void* Identity_2;
  void* Identity_3;
  void* Identity_4;
};

/*!
 * \brief entrypoint function for TVM module "default3"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_default3_run(
  struct tvmgen_default3_inputs* inputs,
  struct tvmgen_default3_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "default3" 
 */
#define TVMGEN_DEFAULT3_WORKSPACE_SIZE 864

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DEFAULT3_H_
