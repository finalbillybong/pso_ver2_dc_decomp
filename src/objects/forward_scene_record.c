extern void *lookup_at(int);
void *forward_scene_record(void *unused,int index) { return lookup_at(index); }
