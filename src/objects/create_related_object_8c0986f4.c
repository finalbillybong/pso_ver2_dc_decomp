extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *construct_at(void *,void *,int);
void *create_related_object_8c0986f4(void *parent,int category) { void *o=heap_alloc_8c122700(heap,76);if(o) construct_at(o,parent,category);return o; }
