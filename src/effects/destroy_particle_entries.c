#include "src/include/particle_entries.h"
#define release_at ((void (*)(void *))0x8c18de08)
#define base_at ((void (*)(ParticleDestroyView *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
ParticleDestroyView *destroy_particle_entries(ParticleDestroyView *effect,short release){if(effect){effect->dispatch=(void *)0x8c2668a4;release_at(effect->entries);effect->entries=0;base_at(effect,0);if(release>0)free_at(*(void **)0x8c4d97e0,effect);}return effect;}
