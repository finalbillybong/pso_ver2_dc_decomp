typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv5 S_vv5;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x34];
    float f68;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct S_vv5 {
    char unknown0[0x8];
    float f08;
};
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c04b8dc(int);
extern float call_8c19a09c(float);
extern void call_8c0e2278(S_vv5 *, int, int);
extern void operation_8c0dc610(void *, float);
Object *operation_8c1cb998(Object *o, int a1)
{
    Object **home = &o;
    float v1;
    float v4;
    S_vv5 *v5;
    int t1;
    float t2;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c329120));
    o->dispatch = (void *)0x8c276854;
    o->tag = (int)(*(int *)0x8c3290f8);
    o->size = 0x6c;
    t1 = call_8c04b8dc(a1);
    v4 = (float)(float)t1;
    if (0.0f > (float)t1) {
        v1 = (float)((float)t1 + 4294967296.0f);
        v4 = (float)v1;
    }
    t2 = call_8c19a09c(v4);
    o->f68 = t2;
    v5 = (S_vv5 *)o->f30->f00;
    call_8c0e2278(v5, a1, 0x60);
    v5->f08 = (o->f68 + 160.0f) * 0.5f - v4 * 0.5f;
    operation_8c0dc610((void *)o, -13000.0f);
    return o;
}
