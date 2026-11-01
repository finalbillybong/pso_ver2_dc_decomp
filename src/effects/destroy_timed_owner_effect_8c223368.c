typedef struct Effect { char unknown0[24]; void *vtable; char unknown28[8]; void *resource; } Effect;
typedef char check_layout[(unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->resource==36 && sizeof(Effect)==40 ? 1:-1];
extern char effect_vtable[];
extern void *heap;
extern void operator_delete_8c18de08(void *),TObject_dtor_8c03311c(Effect *,int),release_at(void *,void *);
Effect *TItemLockCountCtrl_dtor_8c223368(Effect *o,short mode) {
    if(o) {
        o->vtable=effect_vtable;
        operator_delete_8c18de08(o->resource);
        TObject_dtor_8c03311c(o,0);
        if(mode>0) release_at(heap,o);
    }
    return o;
}
