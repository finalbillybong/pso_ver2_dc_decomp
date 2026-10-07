#ifndef PSO_OBJECT_VELOCITY_H
#define PSO_OBJECT_VELOCITY_H
#include "src/include/vector3.h"
/* Provisional observed motion-state prefix, not a full object allocation. */
typedef struct ObjectVelocityView {
    char unknown_00[60];
    Vector3 position;
    Vector3 previous_position;
    char unknown_54[708];
    Vector3 velocity;
    Vector3 center;
} ObjectVelocityView;

typedef char check_object_velocity_position[
    (unsigned long)&((ObjectVelocityView *)0)->position == 60 ? 1 : -1];
typedef char check_object_velocity_previous_position[
    (unsigned long)&((ObjectVelocityView *)0)->previous_position == 72 ? 1 : -1];
typedef char check_object_velocity_velocity[
    (unsigned long)&((ObjectVelocityView *)0)->velocity == 792 ? 1 : -1];
typedef char check_object_velocity_center[
    (unsigned long)&((ObjectVelocityView *)0)->center == 804 ? 1 : -1];
typedef char check_object_velocity_prefix[sizeof(ObjectVelocityView) == 816 ? 1 : -1];
#endif
