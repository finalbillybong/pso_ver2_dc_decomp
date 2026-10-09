extern void *resource;extern void release_at(void *),free_at(void *);void release_grid_render_resource(void) {release_at(resource);free_at(resource);resource=0;}
