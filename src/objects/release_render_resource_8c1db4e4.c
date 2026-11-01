extern void *resource;extern void release_at(void *),game_free_8c011ec0(void *);void release_render_resource_8c1db4e4(void) {release_at(resource);game_free_8c011ec0(resource);resource=0;}
