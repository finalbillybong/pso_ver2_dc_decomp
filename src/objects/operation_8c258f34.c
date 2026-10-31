typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct Frame Frame;
typedef struct S_frame_58 S_frame_58;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    short f22;
    Arg0_24 *f24;
    Vector3 f28;
};
struct Arg1 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    Block72 f10;
    Block72 f58;
};
struct S_vv2 {
    char unknown0[0x44];
    float f44;
    float f48;
};
extern int g_8c340104;
extern Block72 g_8c340108;
extern Block72 g_8c340150;
extern void initialize_hierarchy_node(void *, void *);
extern int create_effect_78d0(void *, void *, int, int);
Object *operation_8c258f34(Object *o, Arg1 *a1, int a2, int a3, register unsigned int a4, float f0)
{
    Frame frame;
    Object **home = &o;
    int v1;
    S_vv2 *v2;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281a7c;
    o->tag = (int)(g_8c340104);
    o->size = 0x34;
    o->f04 |= 0x10;
    o->f20 = a2;
    o->f22 = a3;
    o->f24 = (Arg0_24 *)0;
    *(Vector3 *)&o->f28 = *(Vector3 *)&a1->f3c;
    *(Block72 *)&(&frame)->f58 = *(Block72 *)&g_8c340108;
    *(Block72 *)&(&frame)->f10 = *(Block72 *)&g_8c340150;
    if ((unsigned int)0x12 > a4) {
        (&frame)->f08 = 0;
        (&frame)->f04 = 0;
        v1 = (int)(a4 << 2);
        (&frame)->f0c = *(int *)((char *)&(&frame)->f10 + (v1));
        t1 = create_effect_78d0((void *)(&o->f28), (void *)(&(&frame)->f04), (int)(*(S_frame_58 **)((char *)&(&frame)->f58 + (v1))), 0x40);
        o->f24 = (Arg0_24 *)t1;
        v2 = (S_vv2 *)o->f24;
        if (v2 != 0) {
            v2->f44 = f0;
            v2->f48 = f0;
        }
    }
    return o;
}
