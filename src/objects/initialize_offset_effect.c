#include "src/include/offset_effect.h"
#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjBoss1MokoHill_Solo_ctor_8c0cd2ac ((void (*)(void *,void *,int))0x8c0cd2ac)
void TObjBoss1MokoHill_Solo_create_8c0ccdc0(OffsetEffect *effect){void *child;effect->active=0;effect->first_offset=effect->second_offset=-30.0f;child=heap_alloc_8c122700(*(void **)0x8c4d97e0,84);if(child)TObjBoss1MokoHill_Solo_ctor_8c0cd2ac(child,effect->owner,30);effect->immediate=0;}
