#include "src/include/indexed_effect_template.h"
typedef struct Effect18Template { char unknown0[104]; float value104; char unknown108[8]; float value116; char unknown120[80]; short kind,index; char unknown204[8]; EffectTemplate64 parameters; } Effect18Template;
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((Effect18Template *)0)->field==offset?1:-1]
CHECK(value104,104); CHECK(value116,116); CHECK(kind,200); CHECK(index,202); CHECK(parameters,212);
typedef char check_prefix[sizeof(Effect18Template)==276?1:-1];
extern EffectScalePair effect_scale_pairs[19];
extern float effect_scale_values[37];
void initialize_effect18_template(Effect18Template *effect){effect->parameters=*get_effect_template(18,effect->index);if(effect->index>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[18].increment*effect->index+effect_scale_pairs[18].base);}else{effect->parameters.value+=(float)((int)((unsigned int)effect->index<<2));if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[36];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(18,effect->parameters.value);{ float adjustment=(float)((int)((unsigned int)(effect->kind/5)<<1)); effect->value104=effect->parameters.unknown4+adjustment; } effect->value116=effect->parameters.value8;}
