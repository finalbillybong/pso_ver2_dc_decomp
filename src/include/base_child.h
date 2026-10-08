#ifndef PSO_BASE_CHILD_H
#define PSO_BASE_CHILD_H
#include "src/include/vector3.h"
/* Provisional observed prefixes; no complete engine identity is asserted. */
typedef struct BaseChildLink { char unknown00[4]; unsigned short flags; } BaseChildLink;
typedef struct BaseChildParent { char unknown00[40]; void *matrix; char unknown2c[424]; void *mesh; } BaseChildParent;
typedef struct BaseChild {
    unsigned int tag; unsigned short flags; char unknown06[18]; void *dispatch;
    char unknown1c[2]; unsigned short size; Vector3 position;
    int angle_x, angle_y, angle_z; float remaining;
    Vector3 velocity, initial; BaseChildLink *linked;
    void *parent, *mesh, *matrix;
} BaseChild;
typedef char check_BaseChildLink_flags[(unsigned long)&((BaseChildLink *)0)->flags == 4 ? 1 : -1];
typedef char check_BaseChildLink_prefix[sizeof(BaseChildLink) == 6 ? 1 : -1];
typedef char check_BaseChildParent_matrix[(unsigned long)&((BaseChildParent *)0)->matrix == 40 ? 1 : -1];
typedef char check_BaseChildParent_mesh[(unsigned long)&((BaseChildParent *)0)->mesh == 468 ? 1 : -1];
typedef char check_BaseChildParent_prefix[sizeof(BaseChildParent) == 472 ? 1 : -1];
typedef char check_BaseChild_tag[(unsigned long)&((BaseChild *)0)->tag == 0 ? 1 : -1];
typedef char check_BaseChild_flags[(unsigned long)&((BaseChild *)0)->flags == 4 ? 1 : -1];
typedef char check_BaseChild_dispatch[(unsigned long)&((BaseChild *)0)->dispatch == 24 ? 1 : -1];
typedef char check_BaseChild_size[(unsigned long)&((BaseChild *)0)->size == 30 ? 1 : -1];
typedef char check_BaseChild_position[(unsigned long)&((BaseChild *)0)->position == 32 ? 1 : -1];
typedef char check_BaseChild_angle_x[(unsigned long)&((BaseChild *)0)->angle_x == 44 ? 1 : -1];
typedef char check_BaseChild_angle_y[(unsigned long)&((BaseChild *)0)->angle_y == 48 ? 1 : -1];
typedef char check_BaseChild_angle_z[(unsigned long)&((BaseChild *)0)->angle_z == 52 ? 1 : -1];
typedef char check_BaseChild_remaining[(unsigned long)&((BaseChild *)0)->remaining == 56 ? 1 : -1];
typedef char check_BaseChild_velocity[(unsigned long)&((BaseChild *)0)->velocity == 60 ? 1 : -1];
typedef char check_BaseChild_initial[(unsigned long)&((BaseChild *)0)->initial == 72 ? 1 : -1];
typedef char check_BaseChild_linked[(unsigned long)&((BaseChild *)0)->linked == 84 ? 1 : -1];
typedef char check_BaseChild_parent[(unsigned long)&((BaseChild *)0)->parent == 88 ? 1 : -1];
typedef char check_BaseChild_mesh[(unsigned long)&((BaseChild *)0)->mesh == 92 ? 1 : -1];
typedef char check_BaseChild_matrix[(unsigned long)&((BaseChild *)0)->matrix == 96 ? 1 : -1];
typedef char check_BaseChild_prefix[sizeof(BaseChild) == 100 ? 1 : -1];
#endif
