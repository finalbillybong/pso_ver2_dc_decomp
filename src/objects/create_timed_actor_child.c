extern void *heap,*parent;
extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *construct_at(void *,void *,unsigned short);
void *create_timed_actor_child(unsigned short identifier) {
 void *o=heap_alloc_8c122700(heap,40);
 if(o) o=construct_at(o,parent,identifier);
 return o;
}
