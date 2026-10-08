#ifndef PSO_INDEXED_EFFECT_TEMPLATE_H
#define PSO_INDEXED_EFFECT_TEMPLATE_H
#include "src/include/effect_template_init.h"
/* Provisional indexed template and independently accessed actor prefixes. */
typedef struct EffectIndexedTemplate {char unknown0[126];short index;char unknown128[16];EffectTemplate64 parameters;} EffectIndexedTemplate;
typedef struct EffectScalePair {short base,increment;} EffectScalePair;
typedef struct EffectShortPredicate {short unknown0,value;} EffectShortPredicate;
typedef struct AreaEffectActor {char unknown0[60];Vector3 position;char unknown72[1906];short area;char unknown1980[4];char context[4];} AreaEffectActor;
typedef char check_EffectIndexedTemplate_index[(unsigned long)&((EffectIndexedTemplate *)0)->index==126?1:-1];
typedef char check_EffectIndexedTemplate_parameters[(unsigned long)&((EffectIndexedTemplate *)0)->parameters==144?1:-1];
typedef char check_EffectIndexedTemplate_size[sizeof(EffectIndexedTemplate)==208?1:-1];
typedef char check_EffectScalePair_base[(unsigned long)&((EffectScalePair *)0)->base==0?1:-1];
typedef char check_EffectScalePair_increment[(unsigned long)&((EffectScalePair *)0)->increment==2?1:-1];
typedef char check_EffectScalePair_size[sizeof(EffectScalePair)==4?1:-1];
typedef char check_EffectShortPredicate_value[(unsigned long)&((EffectShortPredicate *)0)->value==2?1:-1];
typedef char check_EffectShortPredicate_size[sizeof(EffectShortPredicate)==4?1:-1];
typedef char check_AreaEffectActor_position[(unsigned long)&((AreaEffectActor *)0)->position==60?1:-1];
typedef char check_AreaEffectActor_area[(unsigned long)&((AreaEffectActor *)0)->area==1978?1:-1];
typedef char check_AreaEffectActor_context[(unsigned long)&((AreaEffectActor *)0)->context==1984?1:-1];
typedef char check_AreaEffectActor_size[sizeof(AreaEffectActor)==1988?1:-1];
#endif
