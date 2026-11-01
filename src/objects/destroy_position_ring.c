#include "src/include/position_ring.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define TObject_dtor_8c03311c ((void (*)(PositionRing *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
PositionRing *destroy_position_ring(PositionRing *ring,short release){if(ring){ring->dispatch=(void *)0x8c266c5c;operator_delete_8c18de08(ring->entries);ring->entries=0;operator_delete_8c18de08(ring->buffer);ring->buffer=0;TObject_dtor_8c03311c(ring,0);if(release>0)free_at(*(void **)0x8c4d97e0,ring);}return ring;}
