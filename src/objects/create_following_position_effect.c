#include "src/include/vector3.h"
extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *TObjDFRecover_ctor_8c21b078(void *,void *,unsigned short,const Vector3 *);
void *TObjDFRecover_create_8c21b030(void *parent,unsigned short identifier,const Vector3 *position) {void *o=heap_alloc_8c122700(heap,72);if(o) TObjDFRecover_ctor_8c21b078(o,parent,identifier,position);return o;}
