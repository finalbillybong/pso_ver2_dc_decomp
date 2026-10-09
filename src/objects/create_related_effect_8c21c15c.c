extern void *heap;extern void *allocate_at(void *,unsigned int);extern void *construct_at(void *,void *,int,unsigned short);
void *create_related_effect_8c21c15c(void *parent,int mode,unsigned short identifier) {void *o=allocate_at(heap,48);if(o) construct_at(o,parent,mode,identifier);return o;}
