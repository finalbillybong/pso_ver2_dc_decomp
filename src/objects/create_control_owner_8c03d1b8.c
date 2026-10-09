extern void *heap;extern void *allocate_at(void *,unsigned int);extern void initialize_at(void *);
void create_control_owner_8c03d1b8(void) {void *o=allocate_at(heap,132);if(o) initialize_at(o);}
