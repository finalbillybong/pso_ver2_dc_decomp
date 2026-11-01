extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *TObjAfsLoad_ctor_8c140890(void *,void *,unsigned int,unsigned int);
void *TObjAfsLoad_create_8c140848(void *parent,unsigned int first,unsigned int second) {void *o=heap_alloc_8c122700(heap,60);if(o) TObjAfsLoad_ctor_8c140890(o,parent,first,second);return o;}
