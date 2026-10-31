#include "src/include/vector3.h"
extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *construct_at(void *,void *,const Vector3 *,const Vector3 *);
void *create_related_effect_8c21b264(void *parent,const Vector3 *position,const Vector3 *direction) {void *o=heap_alloc_8c122700(heap,80);if(o) construct_at(o,parent,position,direction);return o;}
