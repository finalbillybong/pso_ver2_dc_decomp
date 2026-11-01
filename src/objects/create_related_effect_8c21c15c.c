extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *TObjDFYutai_ctor_8c21c1a4(void *,void *,int,unsigned short);
void *TObjDFYutai_create_8c21c15c(void *parent,int mode,unsigned short identifier) {void *o=heap_alloc_8c122700(heap,48);if(o) TObjDFYutai_ctor_8c21c1a4(o,parent,mode,identifier);return o;}
