extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *TBoss4Zanzo_ctor_8c1b3104(void *,void *,const void *);
void *TBoss4Zanzo_create_8c1b30c4(void *parent,const void * record) { void *o=heap_alloc_8c122700(heap,80);if(o) TBoss4Zanzo_ctor_8c1b3104(o,parent,record);return o; }
