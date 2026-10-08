#ifndef PSO_EFFECT_CHILD_PREFIX_H
#define PSO_EFFECT_CHILD_PREFIX_H
#include "src/include/controller_flags.h"
/* Provisional observed prefix; complete allocation extent is not established. */
typedef struct EffectChildPrefix {
    char unknown00[24];
    void *dispatch;
    char unknown1c[276];
    ControllerFlags *child;
} EffectChildPrefix;
typedef char check_effect_child_dispatch[(unsigned long)&((EffectChildPrefix *)0)->dispatch == 24 ? 1 : -1];
typedef char check_effect_child_pointer[(unsigned long)&((EffectChildPrefix *)0)->child == 304 ? 1 : -1];
typedef char check_effect_child_prefix[sizeof(EffectChildPrefix) == 308 ? 1 : -1];
#endif
