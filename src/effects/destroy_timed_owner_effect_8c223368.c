typedef struct Effect { char unknown0[24]; void *vtable; char unknown28[8]; void *resource; } Effect;
typedef char check_layout[(unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->resource==36 && sizeof(Effect)==40 ? 1:-1];
extern char effect_vtable[];
extern void *heap;
extern void stop_at(void *),TObject_dtor_8c03311c(Effect *,int),release_at(void *,void *);
Effect *destroy_timed_owner_effect_8c223368(Effect *o,short mode) {
    if(o) {
        o->vtable=effect_vtable;
        stop_at(o->resource);
        TObject_dtor_8c03311c(o,0);
        if(mode>0) release_at(heap,o);
    }
    return o;
}
