#include "src/include/vector3.h"
extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *TObjDFTenchuFuru_ctor_8c21aef4(void *,void *,const Vector3 *);
void *TObjDFTenchuFuru_create_8c21aeb4(void *parent,const Vector3 * position) { void *o=heap_alloc_8c122700(heap,52);if(o) TObjDFTenchuFuru_ctor_8c21aef4(o,parent,position);return o; }
