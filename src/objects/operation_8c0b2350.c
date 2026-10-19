typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285418 S_L8c285418;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_0 Arg0_20_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    char unknown24[0x24];
    int f48;
};
struct S_L8c285418 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_20_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c285418 g_8c285418;
extern void call_8c18de08(void *, int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0b2350(Object *o, int a1)
{
    unsigned int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c265ec0;
        v1 = (unsigned int)0;
        while ((unsigned int)*(int *)((char *)&g_8c285418.f04 + (o->f48 << 3)) > v1) {
            (*(Arg0_20_0 **)((char *)((char *)o->f20 + 0x0) + (v1 << 2)))->f04 |= 1;
            v1 = (unsigned int)(v1 + 1);
        }
        call_8c18de08((void *)(o->f20), v1);
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
