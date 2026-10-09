extern void *heap;extern void *allocate_at(void *,unsigned int);extern void initialize_at(void *);
void create_control_owner_8c03d250(void) {void *o=allocate_at(heap,148);if(o) initialize_at(o);}
