typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s38 Arg0_s38;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_x59792_0 S_x59792_0;
typedef struct S_x99664_0 S_x99664_0;
typedef struct Block_p0_38 {
    Block8 f00;
    char unknown8[0x4];
} Block_p0_38;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
} Block_frame_4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Vector3 f2c;
    Block_p0_38 f38;
};
struct Arg1 {
    Vector3 f00;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    Block8 f00;
};
struct Arg0_s38 {
    char unknown0[0x8];
    int f08;
};
struct S_vv1 {
    char unknown0[0x8];
    int f08;
};
struct Frame {
    Block_frame_4 f04;
    int f0c;
};
extern char g_8c285528[];
extern void initialize_hierarchy_node(void *, void *);
extern S_c8c011290 *operation_8c011290(int, int);
extern int create_effect_7708(void *, int, int);
Object *operation_8c0b4584(Object *o, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    S_vv1 *v1;
    int v9;
    int v10;
    int v7;
    int v6;
    S_c8c011290 *t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c266008;
    *(Vector3 *)&o->f2c = *(Vector3 *)&a1->f00;
    t1 = operation_8c011290((int)(&o->f2c), 0x100);
    *(Vector3 *)&o->f38 = *(Vector3 *)&o->f2c;
    if (t1 != 0) {
        *(Vector3 *)&o->f38 = *(Vector3 *)t1->f04;
    }
    v6 = (int)(a2 * 0xc);
    v7 = (int)0;
    while (3 > v7) {
        switch (v7) {
        case 2:
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f38;
            v9 = (int)(v7 << 2);
            (&frame)->f04.f04 += 1.8f;
            t2 = create_effect_7708((void *)(&(&frame)->f04), (int)(*(S_x99664_0 **)((char *)((char *)(v6 + g_8c285528) + 0x0) + (v9))), 0x40);
            *(int *)((char *)((char *)o + 0x20) + (v9)) = (int)(t2);
            break;
        default:
            v10 = (int)(v7 << 2);
            t3 = create_effect_7708((void *)(&o->f38), (int)(*(S_x59792_0 **)((char *)((char *)(v6 + g_8c285528) + 0x0) + (v10))), 0x40);
            *(int *)((char *)((char *)o + 0x20) + (v10)) = (int)(t3);
            break;
        }
        v7 = (int)(v7 + 1);
    }
    return o;
}
