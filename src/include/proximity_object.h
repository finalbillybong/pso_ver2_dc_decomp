#ifndef PSO_PROXIMITY_OBJECT_H
#define PSO_PROXIMITY_OBJECT_H
/* Provisional 0x9c-byte view from initializer, update and matching allocation. */
#include "src/include/vector3.h"
typedef struct ProximityObject {
 void *name; unsigned short flags; unsigned char unknown_06[18];
 void *dispatch; unsigned short field_1c,extent;
 unsigned char unknown_20[28]; Vector3 position;
 unsigned char unknown_48[24]; int angles[3];
 float field_6c; unsigned char unknown_70[36];
 float radius; void *effect;
} ProximityObject;
typedef char check_proximity_name[((unsigned long)&((ProximityObject *)0)->name)==0?1:-1];
typedef char check_proximity_flags[((unsigned long)&((ProximityObject *)0)->flags)==4?1:-1];
typedef char check_proximity_dispatch[((unsigned long)&((ProximityObject *)0)->dispatch)==24?1:-1];
typedef char check_proximity_extent[((unsigned long)&((ProximityObject *)0)->extent)==30?1:-1];
typedef char check_proximity_position[((unsigned long)&((ProximityObject *)0)->position)==60?1:-1];
typedef char check_proximity_angles[((unsigned long)&((ProximityObject *)0)->angles)==96?1:-1];
typedef char check_proximity_field_6c[((unsigned long)&((ProximityObject *)0)->field_6c)==108?1:-1];
typedef char check_proximity_radius[((unsigned long)&((ProximityObject *)0)->radius)==148?1:-1];
typedef char check_proximity_effect[((unsigned long)&((ProximityObject *)0)->effect)==152?1:-1];
typedef char check_proximity_size[sizeof(ProximityObject)==156?1:-1];
#endif
