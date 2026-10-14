typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc];
    Arg0_28 *f28;
};
extern void clear_emit_slot(int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0b68a0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2660a4;
        if ((int)(o->f28) >= 0) {
            clear_emit_slot((int)(o->f28));
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
