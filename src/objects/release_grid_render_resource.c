extern void *resource;extern void release_at(void *),game_free_8c011ec0(void *);void release_grid_render_resource(void) {release_at(resource);game_free_8c011ec0(resource);resource=0;}
