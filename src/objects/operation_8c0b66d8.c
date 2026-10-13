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
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0220a4(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0b66d8(Object *o, int a1)
{
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2660dc;
        t1 = lookup_object_by_id((unsigned short)(o->f28));
        if (t1 != 0) {
            operation_8c0220a4((void *)t1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
