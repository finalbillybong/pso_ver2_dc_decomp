extern void *heap;extern void *allocate_at(void *,unsigned int);
extern void *construct_at(void *,void *,int);
void *create_related_object_8c0986f4(void *parent,int category) { void *o=allocate_at(heap,76);if(o) construct_at(o,parent,category);return o; }
