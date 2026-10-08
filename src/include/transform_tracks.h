#ifndef PSO_TRANSFORM_TRACKS_H
#define PSO_TRANSFORM_TRACKS_H
#include "src/include/transform_state.h"
/* Provisional detailed view of the existing 64-byte transform state. */
typedef struct TrackState {
 char *cursor;
 int stride,step;
 void **first;
 unsigned int *second;
 float frame;
 int unknown18,index;
 unsigned int flags;
 void (*vector)(void *,unsigned int,void *,float);
 void (*angle)(void *,unsigned int,void *,float);
 void *third;
 void *node_vector,*node_angle,*node_scale,*node_quaternion;
} TrackState;
typedef struct TrackInput {char *keys;int count;unsigned short flags,layout;} TrackInput;
typedef char check_TrackState_cursor[(unsigned long)&((TrackState *)0)->cursor == 0 ? 1 : -1];
typedef char check_TrackState_stride[(unsigned long)&((TrackState *)0)->stride == 4 ? 1 : -1];
typedef char check_TrackState_step[(unsigned long)&((TrackState *)0)->step == 8 ? 1 : -1];
typedef char check_TrackState_first[(unsigned long)&((TrackState *)0)->first == 12 ? 1 : -1];
typedef char check_TrackState_second[(unsigned long)&((TrackState *)0)->second == 16 ? 1 : -1];
typedef char check_TrackState_frame[(unsigned long)&((TrackState *)0)->frame == 20 ? 1 : -1];
typedef char check_TrackState_unknown18[(unsigned long)&((TrackState *)0)->unknown18 == 24 ? 1 : -1];
typedef char check_TrackState_index[(unsigned long)&((TrackState *)0)->index == 28 ? 1 : -1];
typedef char check_TrackState_flags[(unsigned long)&((TrackState *)0)->flags == 32 ? 1 : -1];
typedef char check_TrackState_vector[(unsigned long)&((TrackState *)0)->vector == 36 ? 1 : -1];
typedef char check_TrackState_angle[(unsigned long)&((TrackState *)0)->angle == 40 ? 1 : -1];
typedef char check_TrackState_third[(unsigned long)&((TrackState *)0)->third == 44 ? 1 : -1];
typedef char check_TrackState_node_vector[(unsigned long)&((TrackState *)0)->node_vector == 48 ? 1 : -1];
typedef char check_TrackState_node_angle[(unsigned long)&((TrackState *)0)->node_angle == 52 ? 1 : -1];
typedef char check_TrackState_node_scale[(unsigned long)&((TrackState *)0)->node_scale == 56 ? 1 : -1];
typedef char check_TrackState_node_quaternion[(unsigned long)&((TrackState *)0)->node_quaternion == 60 ? 1 : -1];
typedef char check_TrackInput_keys[(unsigned long)&((TrackInput *)0)->keys == 0 ? 1 : -1];
typedef char check_TrackInput_count[(unsigned long)&((TrackInput *)0)->count == 4 ? 1 : -1];
typedef char check_TrackInput_flags[(unsigned long)&((TrackInput *)0)->flags == 8 ? 1 : -1];
typedef char check_TrackInput_layout[(unsigned long)&((TrackInput *)0)->layout == 10 ? 1 : -1];
typedef char check_TrackState_size[sizeof(TrackState)==64?1:-1];
typedef char check_TrackState_compatible_size[sizeof(TrackState)==sizeof(TransformState)?1:-1];
typedef char check_TrackInput_size[sizeof(TrackInput)==12?1:-1];
#endif
