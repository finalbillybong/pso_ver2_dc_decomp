extern void *heap;extern void *allocate_at(void *,unsigned int);extern void *construct_at(void *,void *,const char *,unsigned int);
void *create_related_effect_8c221084(void *parent,const char *text,unsigned int context) {void *o=allocate_at(heap,64);if(o) construct_at(o,parent,text,context);return o;}
