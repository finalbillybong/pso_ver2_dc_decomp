#include "src/include/effect_template_init.h"
extern float effect_scale_values[31];
void initialize_effect15_template(Effect10TemplateView *effect) { effect->parameters=*get_effect_template(15,effect->index); effect->parameters.value+=(float)(effect->index*5); if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[30]; effect->parameters.value=((float (*)(int,float))0x8c0afdec)(15,effect->parameters.value); }
