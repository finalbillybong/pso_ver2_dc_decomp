#include "src/include/vector3.h"
extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *TObjDFRecBall_ctor_8c21b2ac(void *,void *,const Vector3 *,const Vector3 *);
void *TObjDFRecBall_create_8c21b264(void *parent,const Vector3 *position,const Vector3 *direction) {void *o=heap_alloc_8c122700(heap,80);if(o) TObjDFRecBall_ctor_8c21b2ac(o,parent,position,direction);return o;}
