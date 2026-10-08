#ifndef PSO_SHORT_EFFECT_H
#define PSO_SHORT_EFFECT_H
#include "src/include/vector3.h"
/* Provisional observed layout; names do not assert original class identity. */
typedef struct ShortEffect {void *resource;unsigned short flags;char unknown06[18];void *dispatch;short unknown28;short size;char unknown32[4];Vector3 position;char unknown48[60];int ticks;int unknown112;int state;} ShortEffect;
typedef char check_ShortEffect_resource[(unsigned long)&((ShortEffect *)0)->resource==0?1:-1];
typedef char check_ShortEffect_flags[(unsigned long)&((ShortEffect *)0)->flags==4?1:-1];
typedef char check_ShortEffect_dispatch[(unsigned long)&((ShortEffect *)0)->dispatch==24?1:-1];
typedef char check_ShortEffect_size[(unsigned long)&((ShortEffect *)0)->size==30?1:-1];
typedef char check_ShortEffect_position[(unsigned long)&((ShortEffect *)0)->position==36?1:-1];
typedef char check_ShortEffect_ticks[(unsigned long)&((ShortEffect *)0)->ticks==108?1:-1];
typedef char check_ShortEffect_state[(unsigned long)&((ShortEffect *)0)->state==116?1:-1];
typedef char check_ShortEffect_size[sizeof(ShortEffect)==120?1:-1];
#endif
