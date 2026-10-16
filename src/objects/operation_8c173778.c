typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block132 {
    int words[33];
} Block132;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_24 S_c8c122700_24;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct S_vv6 S_vv6;
typedef struct Block_c8c122700_20 {
    char unknown0[0x4];
    S_c8c122700_24 *f04;
    char unknown8[0x18];
    int f20;
    char unknown24[0x60];
} Block_c8c122700_20;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    Block_c8c122700_20 f20;
    int fa4;
};
struct S_vv6 {
    char unknown0[0x28];
    Block132 f28;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
S_c8c122700 *operation_8c173778(void)
{
    S_c8c122700 *t1;
    int v3;
    int v1;
    S_vv6 *v6;
    int v2;
    int v4;
    char *v5;
    v1 = (int)-1;
    v2 = (int)*(int *)0x8c44be04;
    v3 = (int)*(int *)((char *)0x8c4db600 + (v2 << 2));
    if (v3 != v1 && *(int *)0x8c4db520 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
        if (t1 == 0) {
            for (;;) {
            }
        }
        if (t1 != 0) {
            v4 = (int)(v2 << 2);
            v5 = (char *)*(int *)((char *)((char *)v4 + 0x0) + ((int)((void *)0x8c4db600)));
            v6 = (S_vv6 *)*(S_g8c4db520 **)0x8c4db520;
            initialize_hierarchy_node((void *)t1, (void *)v6);
            t1->f18 = (void *)0x8c270258;
            t1->f00 = (int)(*(int *)0x8c318de0);
            t1->f1e = 0xa8;
            *(Block132 *)&t1->f20 = *(Block132 *)&v6->f28;
            t1->f20.f20 = (int)(*(int *)((char *)((char *)t1->f20.f04 + 0x0) + ((int)(v5) << 2)));
            t1->fa4 = 0;
            if (t1->f20.f20 == -1) {
                for (;;) {
                }
            }
        }
        return t1;
    }
    return 0;
}
