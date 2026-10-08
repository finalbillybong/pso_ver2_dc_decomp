#include "src/include/indexed_effect_template.h"
void initialize_effect12_template(EffectIndexedTemplate *effect){effect->parameters=*get_effect_template(12,effect->index);effect->parameters.value=(float)effect->index;effect->parameters.value=((float (*)(int,float))0x8c0afdec)(12,effect->parameters.value);}
