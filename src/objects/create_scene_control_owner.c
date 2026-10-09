extern void *heap;extern void *allocate_at(void *,unsigned int);extern void initialize_at(void *);
void create_scene_control_owner(void) {void *o=allocate_at(heap,2112);if(o) initialize_at(o);}
