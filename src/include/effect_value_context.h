#ifndef PSO_EFFECT_VALUE_CONTEXT_H
#define PSO_EFFECT_VALUE_CONTEXT_H
/* Provisional accessed data prefix; contents remain reference-dependent. */
typedef struct EffectValueContext {char unknown00[120];float multiplier;} EffectValueContext;
typedef char check_EffectValueContext_multiplier[(unsigned long)&((EffectValueContext *)0)->multiplier==120?1:-1];
typedef char check_EffectValueContext_size[sizeof(EffectValueContext)==124?1:-1];
#endif
