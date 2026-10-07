#ifndef PSO_OBJECT_DISTANCE_H
#define PSO_OBJECT_DISTANCE_H
#include "src/include/vector3.h"
/* Provisional observed prefix; the full object allocation remains unknown. */
typedef struct ObjectDistanceView {
    char unknown_00[52];
    unsigned int flags;
    char unknown_38[4];
    Vector3 position;
    char unknown_48[820];
    int context;
} ObjectDistanceView;

typedef char check_object_distance_flags[
    (unsigned long)&((ObjectDistanceView *)0)->flags == 52 ? 1 : -1];
typedef char check_object_distance_position[
    (unsigned long)&((ObjectDistanceView *)0)->position == 60 ? 1 : -1];
typedef char check_object_distance_context[
    (unsigned long)&((ObjectDistanceView *)0)->context == 892 ? 1 : -1];
typedef char check_object_distance_prefix[sizeof(ObjectDistanceView) == 896 ? 1 : -1];
#endif
