#ifndef PSO_RESOURCE_CHILD_H
#define PSO_RESOURCE_CHILD_H
#include "src/include/vector3.h"
/* Provisional observed 100-byte child prefix. */
typedef struct ResourceChild {
    unsigned int tag; char unknown04[20]; void *dispatch;
    char unknown1c[2]; unsigned short size;
    Vector3 position; int angle_z, angle_y; char unknown34[40];
    void *mesh, *matrix;
} ResourceChild;
typedef char check_ResourceChild_tag[(unsigned long)&((ResourceChild *)0)->tag == 0 ? 1 : -1];
typedef char check_ResourceChild_dispatch[(unsigned long)&((ResourceChild *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ResourceChild_size[(unsigned long)&((ResourceChild *)0)->size == 30 ? 1 : -1];
typedef char check_ResourceChild_position[(unsigned long)&((ResourceChild *)0)->position == 32 ? 1 : -1];
typedef char check_ResourceChild_angle_z[(unsigned long)&((ResourceChild *)0)->angle_z == 44 ? 1 : -1];
typedef char check_ResourceChild_angle_y[(unsigned long)&((ResourceChild *)0)->angle_y == 48 ? 1 : -1];
typedef char check_ResourceChild_mesh[(unsigned long)&((ResourceChild *)0)->mesh == 92 ? 1 : -1];
typedef char check_ResourceChild_matrix[(unsigned long)&((ResourceChild *)0)->matrix == 96 ? 1 : -1];
typedef char check_ResourceChild_prefix[sizeof(ResourceChild) == 100 ? 1 : -1];
#endif
