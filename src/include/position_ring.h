#ifndef PSO_POSITION_RING_H
#define PSO_POSITION_RING_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; no complete allocation size inferred. */
typedef struct PositionRingEntry {float value;int kind;Vector3 position;} PositionRingEntry;
typedef struct PositionRing {char unknown00[24];void *dispatch;int unknown1c;int count,index;int unknown28;void *buffer;PositionRingEntry *entries;} PositionRing;
typedef char check_PositionRingEntry_value[(unsigned long)&((PositionRingEntry *)0)->value==0?1:-1];
typedef char check_PositionRingEntry_kind[(unsigned long)&((PositionRingEntry *)0)->kind==4?1:-1];
typedef char check_PositionRingEntry_position[(unsigned long)&((PositionRingEntry *)0)->position==8?1:-1];
typedef char check_PositionRingEntry_size[sizeof(PositionRingEntry)==20?1:-1];
typedef char check_PositionRing_dispatch[(unsigned long)&((PositionRing *)0)->dispatch==24?1:-1];
typedef char check_PositionRing_count[(unsigned long)&((PositionRing *)0)->count==32?1:-1];
typedef char check_PositionRing_index[(unsigned long)&((PositionRing *)0)->index==36?1:-1];
typedef char check_PositionRing_buffer[(unsigned long)&((PositionRing *)0)->buffer==44?1:-1];
typedef char check_PositionRing_entries[(unsigned long)&((PositionRing *)0)->entries==48?1:-1];
typedef char check_PositionRing_size[sizeof(PositionRing)==52?1:-1];
#endif
