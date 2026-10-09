extern void *heap;extern void *allocate_at(void *,unsigned int);extern void *construct_at(void *,void *,unsigned int,unsigned int);
void *create_related_effect_8c140848(void *parent,unsigned int first,unsigned int second) {void *o=allocate_at(heap,60);if(o) construct_at(o,parent,first,second);return o;}
