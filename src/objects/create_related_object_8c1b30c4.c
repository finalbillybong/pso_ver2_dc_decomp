extern void *heap;extern void *allocate_at(void *,unsigned int);
extern void *construct_at(void *,void *,const void *);
void *create_related_object_8c1b30c4(void *parent,const void * record) { void *o=allocate_at(heap,80);if(o) construct_at(o,parent,record);return o; }
