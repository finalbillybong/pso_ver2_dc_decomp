#include "src/include/effect_template_init.h"
extern Effect4ScaleRecord effect4_scale_record;
extern float effect4_scale_values[9];
void initialize_effect4_template(Effect4TemplateView *effect){effect->parameters=*get_effect_template(4,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect4_scale_record.increment*effect->index+effect4_scale_record.base);}else{effect->parameters.value+=(float)(effect->index*28);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect4_scale_values[8];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(4,effect->parameters.value);effect->value116=effect->parameters.value8;}
