#ifndef PSO_EFFECT_RESOURCE_RECORDS_H
#define PSO_EFFECT_RESOURCE_RECORDS_H
/* Provisional accessed records; referenced contents remain outside source coverage. */
typedef struct EffectResourcePair {void *first,*second;} EffectResourcePair;
typedef struct EffectResourceRecord {int unknown0,unknown4;void **resource;} EffectResourceRecord;
typedef char check_EffectResourcePair_first[(unsigned long)&((EffectResourcePair *)0)->first==0?1:-1];
typedef char check_EffectResourcePair_second[(unsigned long)&((EffectResourcePair *)0)->second==4?1:-1];
typedef char check_EffectResourcePair_size[sizeof(EffectResourcePair)==8?1:-1];
typedef char check_EffectResourceRecord_resource[(unsigned long)&((EffectResourceRecord *)0)->resource==8?1:-1];
typedef char check_EffectResourceRecord_size[sizeof(EffectResourceRecord)==12?1:-1];
#endif
