typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg1 Arg1;
typedef struct Arg3 Arg3;
typedef struct S_x15824 S_x15824;
typedef struct Block_c8c122700_20 {
    char unknown0[0xe];
    short f0e;
    short f10;
    char unknown12[0x6];
} Block_c8c122700_20;
typedef struct Block_p3_0 {
    char unknown0[0xc];
    unsigned short f0c;
    unsigned short f0e;
    char unknown10[0x8];
} Block_p3_0;
struct Arg3 {
    Block_p3_0 f00;
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    Block_c8c122700_20 f20;
    int f38;
    Vector3 f3c;
    Vector3 f48;
};
struct Arg1 {
    Vector3 f00;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
struct S_x15824 {
    Vector3 f00;
};
extern int g_8c328d20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void operation_8c1ab01c(void *, int, int, int);
void operation_8c1c682c(int a0, Arg1 *a1, int a2, Arg3 *a3)
{
    int v1;
    S_c8c122700 *t1;
    S_c8c053d84 *t2;
    S_c8c122700 *t3;
    if (a0 != 0 && a3 != 0 && a1 != 0) {
        v1 = (int)0xffff;
        if (a3->f00.f0c != (unsigned short)v1 && a3->f00.f0e != v1) {
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x54);
            if (t1 != 0) {
                S_c8c122700 *self = (S_c8c122700 *)t1;
                S_c8c122700 **home = &self;
                (void)home;
                initialize_hierarchy_node((void *)t1, (void *)a0);
                self->f18 = (void *)0x8c27673c;
                self->f00 = (int)(g_8c328d20);
                self->f1e = 0x54;
                *(Block24 *)&self->f20 = *(Block24 *)&a3->f00;
                self->f38 = 0;
                *(Vector3 *)&self->f48 = *(Vector3 *)&a1->f00;
                t2 = lookup_object_by_id((unsigned short)(self->f20.f0e));
                if (t2 != 0) {
                    *(Vector3 *)&self->f3c = *(Vector3 *)&((S_x15824 *)(t2->fdc + 0x1c + self->f20.f10 * 0x2c))->f00;
                } else {
                    self->f38 = 1;
                }
            }
            if (t1 != 0) {
                t3 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
                if (t3 != 0) {
                    operation_8c1ab01c((void *)t3, (int)t1, (int)((void *)0x8c1c6950), a2);
                }
            }
        }
    }
}
