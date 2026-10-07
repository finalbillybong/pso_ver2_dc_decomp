#ifndef PSO_EFFECT_MANAGER_H
#define PSO_EFFECT_MANAGER_H
#include "src/include/effect.h"
/* Provisional resource and manager views from 0x8c0a7db8 and adjacent lifecycle
 * functions. Uninterpreted fields retain offset names; no gameplay meaning asserted. */
typedef struct EffectResource { int words[38]; } EffectResource;
typedef struct EffectManager {
 void *name; unsigned char unknown04[20]; void *dispatch;
 unsigned short field1c,extent;
 EffectVector position; unsigned char unknown2c[16];
 unsigned char field3c[24],field54[16];
 int field64,field68; Effect *effect; int field70,field74,field78,field7c,field80;
 EffectResource *resource;
} EffectManager;
typedef char check_effect_resource_size[sizeof(EffectResource)==152?1:-1];
typedef char check_effect_manager_size[sizeof(EffectManager)==136?1:-1];
typedef char check_effect_manager_name[((unsigned long)&((EffectManager *)0)->name)==0?1:-1];
typedef char check_effect_manager_dispatch[((unsigned long)&((EffectManager *)0)->dispatch)==24?1:-1];
typedef char check_effect_manager_extent[((unsigned long)&((EffectManager *)0)->extent)==30?1:-1];
typedef char check_effect_manager_position[((unsigned long)&((EffectManager *)0)->position)==32?1:-1];
typedef char check_effect_manager_field3c[((unsigned long)&((EffectManager *)0)->field3c)==60?1:-1];
typedef char check_effect_manager_field54[((unsigned long)&((EffectManager *)0)->field54)==84?1:-1];
typedef char check_effect_manager_field64[((unsigned long)&((EffectManager *)0)->field64)==100?1:-1];
typedef char check_effect_manager_field68[((unsigned long)&((EffectManager *)0)->field68)==104?1:-1];
typedef char check_effect_manager_effect[((unsigned long)&((EffectManager *)0)->effect)==108?1:-1];
typedef char check_effect_manager_field70[((unsigned long)&((EffectManager *)0)->field70)==112?1:-1];
typedef char check_effect_manager_field74[((unsigned long)&((EffectManager *)0)->field74)==116?1:-1];
typedef char check_effect_manager_field78[((unsigned long)&((EffectManager *)0)->field78)==120?1:-1];
typedef char check_effect_manager_field7c[((unsigned long)&((EffectManager *)0)->field7c)==124?1:-1];
typedef char check_effect_manager_field80[((unsigned long)&((EffectManager *)0)->field80)==128?1:-1];
typedef char check_effect_manager_resource[((unsigned long)&((EffectManager *)0)->resource)==132?1:-1];
#endif
