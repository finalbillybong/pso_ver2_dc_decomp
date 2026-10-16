typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c300f04 S_L8c300f04;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    int f24;
    Arg0_28 *f28;
    int f2c;
    int f30;
    int f34;
    char unknown38[0x8];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    int f54;
};
struct Arg0_20 {
    char unknown0[0xc];
    char f0c;
    char unknownd[0xf];
    char f1c;
    char unknown1d[0x13];
    char f30;
    char unknown31[0x1];
    char f32;
    char unknown33[0x1];
    int f34;
};
struct S_L8c300f04 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c460900;
extern int g_8c469e50;
extern S_L8c300f04 g_8c300f04;
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c12b154(Arg0_20 *, void *, int);
extern void operation_8c09a478(void);
extern void operation_8c09a738(void);
Object *operation_8c097058(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2657bc;
    o->f20 = (Arg0_20 *)g_8c460900;
    call_8c12b154((Arg0_20 *)(o->f20), (void *)((void *)0x8c461ac8), 0xc);
    o->f20->f0c = 0;
    o->f20->f1c = 0;
    o->f20->f32 &= -0xb;
    if (o->f20->f30 == -1) {
        if (((o->f20->f32 & 0xa)) != 0) {
            o->f24 = 2;
            goto L_8c0970fe;
        }
        if (((o->f20->f34 & 0x10)) == 0) {
            o->f24 = 0;
            goto L_8c0970fe;
        }
        o->f24 = 1;
    } else {
        if (((o->f20->f32 & 0xa)) != 0) {
            o->f24 = 5;
        } else {
            if (((o->f20->f34 & 0x10)) == 0) {
                o->f24 = 3;
            } else {
                o->f24 = 4;
            }
        }
    }
L_8c0970fe:;
    o->f2c = (int)(*(int *)((char *)&g_8c300f04 + (o->f24 << 3)));
    o->f28 = (Arg0_28 *)*(int *)((char *)&g_8c300f04.f04 + (o->f24 << 3));
    o->f30 = 0;
    o->f34 = 0;
    g_8c469e50 = (int)(*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)));
    operation_8c09a478();
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f48 = 0.0f;
    o->f4c = 0.0f;
    o->f50 = 0.0f;
    o->f54 = 0;
    operation_8c09a738();
    return o;
}
