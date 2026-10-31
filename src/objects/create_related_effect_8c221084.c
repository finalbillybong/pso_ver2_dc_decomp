extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void *construct_at(void *,void *,const char *,unsigned int);
void *create_related_effect_8c221084(void *parent,const char *text,unsigned int context) {void *o=heap_alloc_8c122700(heap,64);if(o) construct_at(o,parent,text,context);return o;}
