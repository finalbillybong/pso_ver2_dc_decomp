typedef struct Effect { char unknown0[24]; void *vtable; char unknown28[4]; void *resource; } Effect;
typedef char check_layout[(unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->resource==32 && sizeof(Effect)==36 ? 1:-1];
extern char effect_vtable[];
extern void *heap;
extern void stop_at(void *),TObject_dtor_8c03311c(Effect *,int),release_at(void *,void *);
Effect *TItemEffFlame_dtor_8c1c5b40(Effect *o,short mode) {
    if(o) {
        o->vtable=effect_vtable;
        stop_at(o->resource);
        TObject_dtor_8c03311c(o,0);
        if(mode>0) release_at(heap,o);
    }
    return o;
}
