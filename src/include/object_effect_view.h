#ifndef PSO_OBJECT_EFFECT_VIEW_H
#define PSO_OBJECT_EFFECT_VIEW_H
#include "src/include/vector3.h"
/* Provisional observed prefix used by effect-emission wrappers. */
typedef struct ObjectEffectView {
    char unknown_00[60];
    Vector3 position;
    char unknown_48[836];
    unsigned int context_38c;
} ObjectEffectView;
typedef char check_effect_view_position[(unsigned long)&((ObjectEffectView *)0)->position == 60 ? 1 : -1];
typedef char check_effect_view_context[(unsigned long)&((ObjectEffectView *)0)->context_38c == 908 ? 1 : -1];
typedef char check_effect_view_prefix[sizeof(ObjectEffectView) == 912 ? 1 : -1];
#endif
