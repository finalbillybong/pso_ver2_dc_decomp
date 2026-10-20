typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c304744 S_L8c304744;
typedef struct Frame Frame;
typedef struct S_g8c304744 S_g8c304744;
typedef struct S_g8c304748 S_g8c304748;
typedef struct S_g8c30474c S_g8c30474c;
typedef struct Object Object;
typedef struct Arg0_s30 Arg0_s30;
typedef struct Arg1 Arg1;
typedef struct Block_p0_30 {
    Block8 f00;
    char unknown8[0x4];
} Block_p0_30;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
} Block_frame_4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    int f2c;
    Block_p0_30 f30;
};
struct Arg1 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Frame {
    Block_frame_4 f04;
    int f0c;
};
struct Arg0_s30 {
    char unknown0[0x8];
    int f08;
};
struct S_L8c304744 {
    char unknown0[0x4];
    S_g8c304748 *f04;
    S_g8c30474c *f08;
};
extern S_L8c304744 g_8c304744;
extern void initialize_hierarchy_node(void *, void *);
extern int create_effect_7cc0(void *, int, int, int);
Object *operation_8c0ac120(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c265d48;
    o->f2c = 0;
    *(Vector3 *)&o->f30 = *(Vector3 *)&a1->f324;
    v1 = (int)0;
    while (3 > v1) {
        if (v1 == 0) {
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f30;
            v2 = (int)(v1 << 4);
            (&frame)->f04.f04 += 20.0f;
            t1 = create_effect_7cc0((void *)(&(&frame)->f04), (int)(*(S_g8c30474c **)((char *)&g_8c304744.f08 + (v2))), (int)(*(S_g8c304744 **)((char *)&g_8c304744 + (v2))), (int)(*(S_g8c304748 **)((char *)&g_8c304744.f04 + (v2))));
            *(int *)((char *)((char *)o + 0x20) + (v1 << 2)) = (int)(t1);
        } else {
            v3 = (int)(v1 << 4);
            t2 = create_effect_7cc0((void *)(&o->f30), (int)(*(S_g8c30474c **)((char *)&g_8c304744.f08 + (v3))), (int)(*(S_g8c304744 **)((char *)&g_8c304744 + (v3))), (int)(*(S_g8c304748 **)((char *)&g_8c304744.f04 + (v3))));
            *(int *)((char *)((char *)o + 0x20) + (v1 << 2)) = (int)(t2);
        }
        v1 = (int)(v1 + 1);
    }
    return o;
}
