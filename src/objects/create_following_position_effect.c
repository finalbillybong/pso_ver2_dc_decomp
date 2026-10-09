#include "src/include/vector3.h"
extern void *heap;extern void *allocate_at(void *,unsigned int);extern void *construct_at(void *,void *,unsigned short,const Vector3 *);
void *create_following_position_effect(void *parent,unsigned short identifier,const Vector3 *position) {void *o=allocate_at(heap,72);if(o) construct_at(o,parent,identifier,position);return o;}
