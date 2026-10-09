extern void *heap;extern void *allocate_at(void *,unsigned int);extern void *construct_at(void *,void *,const void *,const void *);
void *create_related_effect_8c0bc17c(void *parent,const void *records24,const void *records20) {void *o=allocate_at(heap,76);if(o) construct_at(o,parent,records24,records20);return o;}
