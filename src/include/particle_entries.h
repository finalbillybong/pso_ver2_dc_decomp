#ifndef PSO_PARTICLE_ENTRIES_H
#define PSO_PARTICLE_ENTRIES_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes and observed 40-byte particle entries. */
typedef struct ParticleEntry {Vector3 position,velocity;int angle_x,angle_y,unknown32,step;} ParticleEntry;
typedef struct ParticleUpdateView {char unknown00[4];unsigned short flags;char unknown06[26];int count;char unknown36[8];float duration;int unknown48;float scale;ParticleEntry *entries;int unknown60;float decrement;int unknown68;float scale_factor,gravity;} ParticleUpdateView;
typedef struct ParticleDestroyView {char unknown00[24];void *dispatch;char unknown28[28];void *entries;} ParticleDestroyView;
typedef char check_ParticleEntry_position[(unsigned long)&((ParticleEntry *)0)->position==0?1:-1];
typedef char check_ParticleEntry_velocity[(unsigned long)&((ParticleEntry *)0)->velocity==12?1:-1];
typedef char check_ParticleEntry_angle_x[(unsigned long)&((ParticleEntry *)0)->angle_x==24?1:-1];
typedef char check_ParticleEntry_angle_y[(unsigned long)&((ParticleEntry *)0)->angle_y==28?1:-1];
typedef char check_ParticleEntry_step[(unsigned long)&((ParticleEntry *)0)->step==36?1:-1];
typedef char check_ParticleEntry_size[sizeof(ParticleEntry)==40?1:-1];
typedef char check_ParticleUpdateView_flags[(unsigned long)&((ParticleUpdateView *)0)->flags==4?1:-1];
typedef char check_ParticleUpdateView_count[(unsigned long)&((ParticleUpdateView *)0)->count==32?1:-1];
typedef char check_ParticleUpdateView_duration[(unsigned long)&((ParticleUpdateView *)0)->duration==44?1:-1];
typedef char check_ParticleUpdateView_scale[(unsigned long)&((ParticleUpdateView *)0)->scale==52?1:-1];
typedef char check_ParticleUpdateView_entries[(unsigned long)&((ParticleUpdateView *)0)->entries==56?1:-1];
typedef char check_ParticleUpdateView_decrement[(unsigned long)&((ParticleUpdateView *)0)->decrement==64?1:-1];
typedef char check_ParticleUpdateView_scale_factor[(unsigned long)&((ParticleUpdateView *)0)->scale_factor==72?1:-1];
typedef char check_ParticleUpdateView_gravity[(unsigned long)&((ParticleUpdateView *)0)->gravity==76?1:-1];
typedef char check_ParticleUpdateView_size[sizeof(ParticleUpdateView)==80?1:-1];
typedef char check_ParticleDestroyView_dispatch[(unsigned long)&((ParticleDestroyView *)0)->dispatch==24?1:-1];
typedef char check_ParticleDestroyView_entries[(unsigned long)&((ParticleDestroyView *)0)->entries==56?1:-1];
typedef char check_ParticleDestroyView_size[sizeof(ParticleDestroyView)==60?1:-1];
#endif
