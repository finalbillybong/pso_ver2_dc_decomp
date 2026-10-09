extern char path[];extern void *resource;extern void *load_at(void *);void load_grid_render_resource(void) {resource=load_at(path);}
