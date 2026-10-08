#include "src/include/indexed_effect_template.h"
extern EffectScalePair effect_scale_pairs[10];
extern float effect_scale_values[19];
void initialize_effect8_template(EffectIndexedTemplate *effect){effect->parameters=*get_effect_template(8,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[8].increment*effect->index+effect_scale_pairs[8].base);}else{effect->parameters.value+=(float)(effect->index*25);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[16];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(8,effect->parameters.value);}
