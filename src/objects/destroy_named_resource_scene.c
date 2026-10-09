typedef struct Scene { char unknown0[24]; void *vtable; char unknown28[8]; int first,second; } Scene;
typedef struct ResourceName { void *name; unsigned int first,second; } ResourceName;
typedef char check_layout[sizeof(Scene)==44 && sizeof(ResourceName)==12 && (unsigned long)&((Scene *)0)->vtable==24 && (unsigned long)&((Scene *)0)->first==36 && (unsigned long)&((Scene *)0)->second==40 ? 1:-1];
extern char scene_vtable[],names[],resource_list[];
extern ResourceName records[];
extern void *parent,*heap;
extern void base_at(Scene *,void *),set_name_at(ResourceName *,char *,int,int),load_at(void *),start_at(char *),release_resources_at(void *),stop_at(void),base_destroy_at(Scene *,int),free_at(void *,void *);
Scene *destroy_named_resource_scene(Scene *o,short mode) {
    if(o) {
        o->vtable=scene_vtable;
        release_resources_at(resource_list);
        stop_at();
        base_destroy_at(o,0);
        if(mode>0) free_at(heap,o);
    }
    return o;
}
