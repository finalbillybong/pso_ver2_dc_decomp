typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg4 Arg4;
typedef struct Block_p0_3c {
    int f00;
    int f04;
    int f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    float f28;
    float f2c;
    Vector3 f30;
    Block_p0_3c f3c;
    float f48;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg4 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c18833c(Object *o, Arg1 *a1, int a2, int a3, register Arg4 *a4, float f0, float f1)
{
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44bea0 **)0x8c44bea0));
    o->dispatch = (void *)0x8c272178;
    *(Vector3 *)&o->f30 = *(Vector3 *)&a1->f00;
    o->f20 = a2;
    o->f24 = a3;
    o->f28 = f0;
    if (a4 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&a4->f00;
    } else {
        o->f3c.f00 = 0;
        o->f3c.f04 = 0;
        o->f3c.f08 = 0;
    }
    o->f2c = 0.0f;
    o->f48 = f1;
    return o;
}
