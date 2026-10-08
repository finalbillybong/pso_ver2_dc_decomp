#ifndef PSO_OFFSET_EFFECT_H
#define PSO_OFFSET_EFFECT_H
/* Provisional accessed prefix; names do not assert complete game types. */
typedef struct OffsetEffect {char unknown00[16];void *owner;char unknown14[12];int active;char unknown24[16];float first_offset;float second_offset;int unknown3c;int immediate;} OffsetEffect;
typedef char check_OffsetEffect_owner[(unsigned long)&((OffsetEffect *)0)->owner==16?1:-1];
typedef char check_OffsetEffect_active[(unsigned long)&((OffsetEffect *)0)->active==32?1:-1];
typedef char check_OffsetEffect_first_offset[(unsigned long)&((OffsetEffect *)0)->first_offset==52?1:-1];
typedef char check_OffsetEffect_second_offset[(unsigned long)&((OffsetEffect *)0)->second_offset==56?1:-1];
typedef char check_OffsetEffect_immediate[(unsigned long)&((OffsetEffect *)0)->immediate==64?1:-1];
typedef char check_OffsetEffect_size[sizeof(OffsetEffect)==68?1:-1];
#endif
