extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void initialize_at(void *);
void create_control_owner_8c03d1b8(void) {void *o=heap_alloc_8c122700(heap,132);if(o) initialize_at(o);}
