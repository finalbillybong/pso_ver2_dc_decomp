extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);extern void initialize_at(void *);
void create_scene_control_owner(void) {void *o=heap_alloc_8c122700(heap,2112);if(o) initialize_at(o);}
