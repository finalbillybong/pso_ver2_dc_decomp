extern void *heap,*parent;
extern void *allocate_at(void *,unsigned int);
extern void *construct_at(void *,void *,unsigned short);
void *create_timed_actor_child(unsigned short identifier) {
 void *o=allocate_at(heap,40);
 if(o) o=construct_at(o,parent,identifier);
 return o;
}
