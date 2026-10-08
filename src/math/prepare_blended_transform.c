#include "src/include/blend_input.h"
#define select_at ((void (*)(unsigned int))0x8c0c3a40)
#define configure_at ((void (*)(void *,float))0x8c0c44f0)
void prepare_blended_transform(BlendInput *input,float amount) {
 select_at(1);
 configure_at(input->second,input->second_frame);
 select_at(0);
 configure_at(input->first,input->first_frame);
 *(float *)0x8c46f4e0=amount;
}
