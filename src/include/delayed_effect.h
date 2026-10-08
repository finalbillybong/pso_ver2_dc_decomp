#ifndef PSO_DELAYED_EFFECT_H
#define PSO_DELAYED_EFFECT_H
#include "src/include/vector3.h"
/* Provisional 52-byte timed effect view; unknown fields retain their offsets. */
typedef struct DelayedEffect {char unknown00[24];void *dispatch;int unknown1c;short id;short unknown22;int ticks;Vector3 position;} DelayedEffect;
typedef char check_DelayedEffect_dispatch[(unsigned long)&((DelayedEffect *)0)->dispatch == 24 ? 1 : -1];
typedef char check_DelayedEffect_id[(unsigned long)&((DelayedEffect *)0)->id == 32 ? 1 : -1];
typedef char check_DelayedEffect_ticks[(unsigned long)&((DelayedEffect *)0)->ticks == 36 ? 1 : -1];
typedef char check_DelayedEffect_position[(unsigned long)&((DelayedEffect *)0)->position == 40 ? 1 : -1];
typedef char check_DelayedEffect_size[sizeof(DelayedEffect)==52?1:-1];
#endif
