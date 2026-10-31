extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *construct_at(void *,void *,int);
void *create_related_object_8c21b658(void *parent,int angle) { void *o=heap_alloc_8c122700(heap,48);if(o) construct_at(o,parent,angle);return o; }
