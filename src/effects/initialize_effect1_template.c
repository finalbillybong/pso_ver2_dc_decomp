#include "src/include/indexed_effect_template.h"
extern EffectScalePair effect_scale_pairs[10];
extern float effect_scale_values[19];
void initialize_effect1_template(EffectIndexedTemplate *effect){effect->parameters=*get_effect_template(1,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[1].increment*effect->index+effect_scale_pairs[1].base);}else{effect->parameters.value+=(float)(int)((unsigned int)(int)effect->index<<3);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[2];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(1,effect->parameters.value);}
