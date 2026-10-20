typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c305368 S_g8c305368;
typedef struct S_g8c30536c S_g8c30536c;
typedef struct S_g8c305370 S_g8c305370;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg1 Arg1;
typedef struct Block_frame_4 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_frame_4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Arg0_2c *f2c;
    int f30;
};
struct Frame {
    Block_frame_4 f04;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg0_2c {
    char unknown0[0x20];
    short f20;
};
extern void initialize_hierarchy_node(void *, void *);
extern int create_effect_7d38(void *, int, int, int, unsigned short);
extern void bind_id(void *, unsigned short);
extern char g_8c305368[];
Object *operation_8c0b94d8(Object *o, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int v2;
    int t1;
    int t2;
    int idx;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c2661c0;
    o->f30 = 0;
    v1 = (int)0;
    while (3 > v1) {
        *(int *)((char *)((char *)o + 0x20) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    o->f2c = (Arg0_2c *)a2;
    while (3 > v2) {
        idx = v2 << 4;
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&a1->f00;
        if (((*(int *)((char *)(int *)(g_8c305368 + 0xc) + idx) & 1)) != 0) {
            (&frame)->f04.f04 -= 5.0f;
        }
        if (v2 == 2) {
            *(int *)((char *)((char *)o + 0x20) + (v2 << 2)) = create_effect_7d38((void *)(&(&frame)->f04.f00), *(int *)((char *)(int *)(g_8c305368 + 8) + idx), *(int *)(g_8c305368 + idx), *(int *)((char *)(int *)(g_8c305368 + 4) + idx), (unsigned short)0x30);
        } else {
            *(int *)((char *)((char *)o + 0x20) + (v2 << 2)) = create_effect_7d38((void *)(&(&frame)->f04.f00), *(int *)((char *)(int *)(g_8c305368 + 8) + idx), *(int *)(g_8c305368 + idx), *(int *)((char *)(int *)(g_8c305368 + 4) + idx), (unsigned short)0x10);
        }
        if (*(int *)((char *)((char *)o + 0x20) + (v2 << 2)) != 0) {
            bind_id((void *)(*(Arg0_20 **)((char *)((char *)o + 0x20) + (v2 << 2))), (unsigned short)(o->f2c->f20));
        }
        v2 = (int)(v2 + 1);
    }
    return o;
}
