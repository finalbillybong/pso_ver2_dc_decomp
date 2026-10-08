#ifndef PSO_EFFECT_MOTION_GATE_H
#define PSO_EFFECT_MOTION_GATE_H
/* Provisional accessed prefixes, not complete resource/object allocation sizes. */
#include "src/include/vector3.h"
typedef struct MotionResource {unsigned char unknown00[136]; unsigned char flags;} MotionResource;
typedef struct MotionGate {unsigned int tag;unsigned short flags;unsigned char unknown06[30];MotionResource *resource;unsigned char unknown28[12];Vector3 position;unsigned char unknown40[12];float phase;unsigned char unknown50[20];Vector3 target;} MotionGate;
typedef char check_MotionResource_flags[(unsigned long)&((MotionResource *)0)->flags==136?1:-1];
typedef char check_MotionResource_size[sizeof(MotionResource)==137?1:-1];
typedef char check_MotionGate_flags[(unsigned long)&((MotionGate *)0)->flags==4?1:-1];
typedef char check_MotionGate_resource[(unsigned long)&((MotionGate *)0)->resource==36?1:-1];
typedef char check_MotionGate_position[(unsigned long)&((MotionGate *)0)->position==52?1:-1];
typedef char check_MotionGate_phase[(unsigned long)&((MotionGate *)0)->phase==76?1:-1];
typedef char check_MotionGate_target[(unsigned long)&((MotionGate *)0)->target==100?1:-1];
typedef char check_MotionGate_size[sizeof(MotionGate)==112?1:-1];
#endif
