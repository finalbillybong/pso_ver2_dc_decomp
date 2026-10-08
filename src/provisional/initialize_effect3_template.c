#include "src/include/indexed_effect_template.h"
typedef struct Effect3Template { char unknown0[104]; float value104; char unknown108[8]; float value116; char unknown120[80]; short kind,index; char unknown204[8]; EffectTemplate64 parameters; } Effect3Template;
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((Effect3Template *)0)->field==offset?1:-1]
CHECK(value104,104); CHECK(value116,116); CHECK(kind,200); CHECK(index,202); CHECK(parameters,212);
typedef char check_prefix[sizeof(Effect3Template)==276?1:-1];
extern EffectScalePair effect_scale_pairs[19];
extern float effect_scale_values[37];
void initialize_effect3_template(Effect3Template *effect){effect->parameters=*get_effect_template(3,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[3].increment*effect->index+effect_scale_pairs[3].base);}else{effect->parameters.value+=(float)(effect->index*10);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[6];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(3,effect->parameters.value);{ float adjustment=(float)((int)((unsigned int)(effect->kind/5)<<1)); effect->value104=effect->parameters.unknown4+adjustment; } effect->value116=effect->parameters.value8;}
