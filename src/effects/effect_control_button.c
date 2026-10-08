/* The register result preserves the observed saved-register boolean lowering. */
#include "src/include/effect_control_input.h"
#define input_at ((EffectControlInput *(*)(int))0x8c36b024)
#define root_at ((float (*)(float))0x8c37f6c0)
int effect_control_button(void){register int result;EffectControlInput *input=input_at(6);result=(input->flags&0x20000)!=0;return result;}
