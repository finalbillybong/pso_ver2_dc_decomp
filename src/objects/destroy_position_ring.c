#include "src/include/position_ring.h"
#define release_at ((void (*)(void *))0x8c18de08)
#define destroy_base_at ((void (*)(PositionRing *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
PositionRing *destroy_position_ring(PositionRing *ring,short release){if(ring){ring->dispatch=(void *)0x8c266c5c;release_at(ring->entries);ring->entries=0;release_at(ring->buffer);ring->buffer=0;destroy_base_at(ring,0);if(release>0)free_at(*(void **)0x8c4d97e0,ring);}return ring;}
