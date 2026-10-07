#ifndef PSO_CALLS_H
#define PSO_CALLS_H
#include "src/include/object.h"
#define object_ready_at ((int (*)(void *))0x8c02a980)
#define object_blocked_at ((int (*)(void *))0x8c02b008)
/* C remainder lowers to __l_mods, bound to 0x8c18e8a0 in the manifest. */
#define effect_create_at ((void *(*)(float *, int, int))0x8c0a77e8)
#define effect_bind_at ((void (*)(void *, short))0x8c0a7628)
/* Direct externals are bound by name in the project manifest. */
extern void effect_emit_at(int, float *, int, int);
#define adjust_330_at ((void (*)(Object *, short))0x8c04a770)
/* Stores the low signed 16 bits at 0x330, then clamps against 0x198. */
#define set_330_at ((void (*)(Object *, int))0x8c04a7d8)
#define allocate_block_at ((void *(*)(void *, int))0x8c122700)
extern void effect_extra_at(void *, void *, void *, int, Object *, int, float);
#define operation_455ac_at ((int (*)(void *))0x8c0455ac)
#define operation_456a4_at ((int (*)(void *))0x8c0456a4)
#define operation_45844_at ((int (*)(void *))0x8c045844)
#define operation_45910_at ((int (*)(void *))0x8c045910)
#define operation_459d8_at ((int (*)(void *))0x8c0459d8)
#define operation_45a8c_at ((int (*)(void *))0x8c045a8c)
#define operation_45b8c_at ((int (*)(void *))0x8c045b8c)
#define operation_45d6c_at ((int (*)(void *))0x8c045d6c)
#endif
