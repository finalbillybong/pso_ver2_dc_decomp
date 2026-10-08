#include "src/include/position_ring.h"
void append_position_ring(PositionRing *ring,Vector3 *position,int kind,float value){int offset=ring->index*20;*(float *)((char *)&ring->entries->value+offset)=value;*(int *)((char *)&ring->entries->kind+offset)=kind;*(Vector3 *)((char *)&ring->entries->position+offset)=*position;ring->index++;if(ring->index>=ring->count)ring->index=0;}
