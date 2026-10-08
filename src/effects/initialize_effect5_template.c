#include "src/include/indexed_effect_template.h"
/* Preserve the distinct signed field124 guard and signed index126 arithmetic. */
typedef struct Effect5Template { char unknown0[124]; short mode,index; char unknown128[16]; EffectTemplate64 parameters; } Effect5Template;
typedef char check_mode[(unsigned long)&((Effect5Template *)0)->mode==124?1:-1];
typedef char check_index[(unsigned long)&((Effect5Template *)0)->index==126?1:-1];
typedef char check_parameters[(unsigned long)&((Effect5Template *)0)->parameters==144?1:-1];
typedef char check_prefix[sizeof(Effect5Template)==208?1:-1];
extern EffectScalePair effect_scale_pairs[10];
extern float effect_scale_values[19];
void initialize_effect5_template(Effect5Template *effect){effect->parameters=*get_effect_template(5,effect->index);if(effect->mode>=15&&!((int (*)(void))0x8c02b2a4)()){effect->parameters.value=(float)(effect_scale_pairs[5].increment*effect->index+effect_scale_pairs[5].base);}else{effect->parameters.value+=(float)(effect->index*40);if(((int (*)(void))0x8c02b2a4)())effect->parameters.value*=effect_scale_values[10];}effect->parameters.value=((float (*)(int,float))0x8c0afdec)(5,effect->parameters.value);}
