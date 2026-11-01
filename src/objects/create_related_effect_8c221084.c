extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *TItemDownLoad_ctor_8c2210cc(void *,void *,const char *,unsigned int);
void *TItemDownLoad_create_8c221084(void *parent,const char *text,unsigned int context) {void *o=heap_alloc_8c122700(heap,64);if(o) TItemDownLoad_ctor_8c2210cc(o,parent,text,context);return o;}
