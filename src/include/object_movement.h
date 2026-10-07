#ifndef PSO_OBJECT_MOVEMENT_H
#define PSO_OBJECT_MOVEMENT_H
#include "src/include/vector3.h"
/* Provisional observed prefix, not a complete object allocation. */
typedef struct ObjectMovementView {
    char unknown_00[60];
    Vector3 position;
    char unknown_48[28];
    int angle;
    char unknown_68[240];
    Vector3 captured_position;
    Vector3 target;
} ObjectMovementView;

typedef char check_object_movement_position[
    (unsigned long)&((ObjectMovementView *)0)->position == 60 ? 1 : -1];
typedef char check_object_movement_angle[
    (unsigned long)&((ObjectMovementView *)0)->angle == 100 ? 1 : -1];
typedef char check_object_movement_captured_position[
    (unsigned long)&((ObjectMovementView *)0)->captured_position == 344 ? 1 : -1];
typedef char check_object_movement_target[
    (unsigned long)&((ObjectMovementView *)0)->target == 356 ? 1 : -1];
typedef char check_object_movement_prefix[sizeof(ObjectMovementView) == 368 ? 1 : -1];
#endif
