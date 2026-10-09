extern void finish_at(void *),release_at(void *);void release_scene_control_resource(void *o) {if(o) {finish_at(o);release_at(o);}}
