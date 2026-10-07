#ifndef PSO_OBJECT_RANDOM_H
#define PSO_OBJECT_RANDOM_H
#include "src/include/random_state.h"
/* Provisional observed prefix; not the full object allocation. */
typedef struct ObjectRandomView {
    char unknown_00[468];
    RandomState random;
} ObjectRandomView;
typedef char check_object_random_offset[(unsigned long)&((ObjectRandomView *)0)->random == 468 ? 1 : -1];
typedef char check_object_random_prefix[sizeof(ObjectRandomView) == 700 ? 1 : -1];
#endif
