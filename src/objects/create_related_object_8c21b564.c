#include "src/include/vector3.h"
extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *TObjDFBeamCursor_ctor_8c21b5a4(void *,void *,const Vector3 *);
void *create_related_object_8c21b564(void *parent,const Vector3 * position) { void *o=heap_alloc_8c122700(heap,48);if(o) TObjDFBeamCursor_ctor_8c21b5a4(o,parent,position);return o; }
