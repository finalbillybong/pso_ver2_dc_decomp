#include "src/include/vector3.h"
extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *construct_at(void *,void *,const Vector3 *);
void *create_related_object_8c21aeb4(void *parent,const Vector3 * position) { void *o=heap_alloc_8c122700(heap,52);if(o) construct_at(o,parent,position);return o; }
