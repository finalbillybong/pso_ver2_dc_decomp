#include "src/include/effect_template_init.h"
void initialize_effect13_template(Effect10TemplateView *effect){effect->parameters=*get_effect_template(13,effect->index);effect->parameters.value=(float)effect->index;effect->parameters.value=((float (*)(int,float))0x8c0afdec)(13,effect->parameters.value);}
