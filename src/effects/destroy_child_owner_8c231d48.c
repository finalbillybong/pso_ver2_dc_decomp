typedef struct Child { void *name; unsigned short flags; } Child;
typedef struct Effect { char unknown0[24]; void *vtable; char unknown28[12]; Child *child; } Effect;
typedef char check_layout[sizeof(Child)==8 && (unsigned long)&((Child *)0)->flags==4 && sizeof(Effect)==44 && (unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->child==40 ? 1:-1];
extern char effect_vtable[];
extern void *heap;
extern void base_destroy_at(Effect *,int),release_at(void *,void *);
Effect *destroy_child_owner_8c231d48(Effect *o,short mode) {
    if(o) {
        o->vtable=effect_vtable;
        if(o->child) { o->child->flags|=1; o->child=0; }
        base_destroy_at(o,0);
        if(mode>0) release_at(heap,o);
    }
    return o;
}
