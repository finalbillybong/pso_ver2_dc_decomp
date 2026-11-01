extern void *global_owner;extern char descriptor[];extern void *game_malloc_8c011ecc(unsigned int);extern void initialize_at(void *,int,void *,int,int,int);
void create_grid_resource_8c11a6d0(void) {void *o;global_owner=0;o=game_malloc_8c011ecc(1088);if(o) initialize_at(o,1,descriptor,0,0,0);global_owner=o;}
