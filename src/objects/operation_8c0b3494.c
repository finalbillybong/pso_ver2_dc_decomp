typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2854f8 S_L8c2854f8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_0 Arg0_20_0;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Arg0_24 *f24;
    int f28;
};
struct S_L8c2854f8 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_20_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c2854f8 g_8c2854f8;
extern void clear_emit_slot(int);
extern void call_8c18de08(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0b3494(Object *o, int a1)
{
    unsigned int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c265f44;
        v1 = (unsigned int)0;
        while ((unsigned int)*(int *)((char *)&g_8c2854f8.f04 + (o->f28 << 3)) > v1) {
            (*(Arg0_20_0 **)((char *)((char *)o->f20 + 0x0) + (v1 << 2)))->f04 |= 1;
            v1 = (unsigned int)(v1 + 1);
        }
        clear_emit_slot((int)(o->f24));
        call_8c18de08((void *)(o->f20));
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
