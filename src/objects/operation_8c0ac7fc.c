typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c304788 S_L8c304788;
typedef struct S_g8c304788 S_g8c304788;
typedef struct S_g8c30478c S_g8c30478c;
typedef struct S_g8c304790 S_g8c304790;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x18];
    Vector3 f34;
    Vector3 f40;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg2 {
    Vector3 f00;
};
struct S_L8c304788 {
    char unknown0[0x4];
    S_g8c30478c *f04;
    S_g8c304790 *f08;
    int f0c;
};
extern S_L8c304788 g_8c304788;
extern void initialize_hierarchy_node(void *, void *);
extern int create_effect_7d38(void *, int, int, int, unsigned short);
extern void bind_id(void *, unsigned short);
Object *operation_8c0ac7fc(Object *o, Arg1 *a1, Arg2 *a2, int a3, int a4)
{
    Object **home = &o;
    int v1;
    int v8;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a4);
    o->dispatch = (void *)0x8c265d88;
    *(Vector3 *)&o->f34 = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->f40 = *(Vector3 *)&a2->f00;
    v1 = (int)0;
    while (4 > v1) {
        v8 = (int)(v1 << 4);
        if (((*(int *)((char *)&g_8c304788.f0c + (v8)) & 1)) != 0) {
            t1 = create_effect_7d38((void *)(&o->f40), (int)(*(S_g8c304790 **)((char *)&g_8c304788.f08 + (v8))), (int)(*(S_g8c304788 **)((char *)&g_8c304788 + (v8))), (int)(*(S_g8c30478c **)((char *)&g_8c304788.f04 + (v8))), (unsigned short)0x10);
            if (t1 == 0) {
                goto L_8c0ac8b4;
            }
            bind_id((void *)t1, (unsigned short)a3);
        } else {
            t2 = create_effect_7d38((void *)(&o->f34), (int)(*(S_g8c304790 **)((char *)&g_8c304788.f08 + (v8))), (int)(*(S_g8c304788 **)((char *)&g_8c304788 + (v8))), (int)(*(S_g8c30478c **)((char *)&g_8c304788.f04 + (v8))), (unsigned short)0x10);
            if (t2 != 0) {
                bind_id((void *)t2, (unsigned short)a3);
            }
        }
L_8c0ac8b4:;
        v1 = (int)(v1 + 1);
    }
    return o;
}
