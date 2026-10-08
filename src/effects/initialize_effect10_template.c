#include "src/include/effect_template_init.h"
void initialize_effect10_template(Effect10TemplateView *effect){effect->parameters=*get_effect_template(10,effect->index);effect->parameters.value=(float)effect->index;effect->parameters.value=((float (*)(int,float))0x8c0afdec)(10,effect->parameters.value);}
