#include "src/include/indexed_effect_template.h"
typedef struct Effect0Template { char unknown0[104]; float value104; char unknown108[8]; float value116; char unknown120[80]; short kind,index; char unknown204[8]; EffectTemplate64 parameters; } Effect0Template;
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((Effect0Template *)0)->field==offset?1:-1]
CHECK(value104,104); CHECK(value116,116); CHECK(kind,200); CHECK(index,202); CHECK(parameters,212);
typedef char check_prefix[sizeof(Effect0Template)==276?1:-1];
extern int template_adjustment(int);
extern EffectScalePair effect_scale_pairs[10];
extern float effect_scale_values[19];
void initialize_effect0_template(Effect0Template *effect){effect->parameters=*get_effect_template(0,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[0].increment*effect->index+effect_scale_pairs[0].base);}else{effect->parameters.value+=(float)(effect->index*25);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[0];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(0,effect->parameters.value);effect->value104=effect->parameters.unknown4+(float)template_adjustment(effect->kind-4); effect->value116=effect->parameters.value8;}
