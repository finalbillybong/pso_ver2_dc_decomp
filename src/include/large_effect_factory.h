#ifndef PSO_LARGE_EFFECT_FACTORY_H
#define PSO_LARGE_EFFECT_FACTORY_H
/* Provisional accessed layouts; initializer remains unmatched. */
typedef struct EffectParent {char unknown00[32];short field20;} EffectParent;
typedef struct Block64 {int words[16];} Block64;
typedef struct Payload92 {int words[23];} Payload92;
typedef struct LargeEffect {int tag;char unknown04[20];void *dispatch;short unknown1c,size;EffectParent *parent;char unknown24[108];Block64 block;short parent_value;char unknownd2[54];Payload92 payload;} LargeEffect;
typedef char check_EffectParent_field20[(unsigned long)&((EffectParent *)0)->field20 == 32 ? 1 : -1];
typedef char check_LargeEffect_tag[(unsigned long)&((LargeEffect *)0)->tag == 0 ? 1 : -1];
typedef char check_LargeEffect_dispatch[(unsigned long)&((LargeEffect *)0)->dispatch == 24 ? 1 : -1];
typedef char check_LargeEffect_size[(unsigned long)&((LargeEffect *)0)->size == 30 ? 1 : -1];
typedef char check_LargeEffect_parent[(unsigned long)&((LargeEffect *)0)->parent == 32 ? 1 : -1];
typedef char check_LargeEffect_block[(unsigned long)&((LargeEffect *)0)->block == 144 ? 1 : -1];
typedef char check_LargeEffect_parent_value[(unsigned long)&((LargeEffect *)0)->parent_value == 208 ? 1 : -1];
typedef char check_LargeEffect_payload[(unsigned long)&((LargeEffect *)0)->payload == 264 ? 1 : -1];
typedef char check_EffectParent_size[sizeof(EffectParent) == 34 ? 1 : -1];
typedef char check_Block64_size[sizeof(Block64) == 64 ? 1 : -1];
typedef char check_Payload92_size[sizeof(Payload92) == 92 ? 1 : -1];
typedef char check_LargeEffect_size[sizeof(LargeEffect) == 356 ? 1 : -1];
#endif
