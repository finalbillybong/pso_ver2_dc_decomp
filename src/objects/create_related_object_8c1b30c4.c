extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *construct_at(void *,void *,const void *);
void *create_related_object_8c1b30c4(void *parent,const void * record) { void *o=heap_alloc_8c122700(heap,80);if(o) construct_at(o,parent,record);return o; }
