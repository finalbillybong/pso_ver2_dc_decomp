#include "src/include/indexed_effect_template.h"
extern EffectScalePair effect_scale_pairs[10];
extern float effect_scale_values[19];
void initialize_effect7_template(Effect4TemplateView *effect){effect->parameters=*get_effect_template(7,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[7].increment*effect->index+effect_scale_pairs[7].base);}else{effect->parameters.value+=(float)(effect->index*20);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[14];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(7,effect->parameters.value);}
