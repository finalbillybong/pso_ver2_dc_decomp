typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_20 S_c8c122700_20;
typedef struct S_c8c122700_28 S_c8c122700_28;
typedef struct S_c8c122700_28_13c S_c8c122700_28_13c;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    short f04;
    char unknown6[0x12];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    S_c8c122700_20 *f20;
    int f24;
    S_c8c122700_28 *f28;
};
struct S_c8c122700_28 {
    char unknown0[0x13c];
    S_c8c122700_28_13c *f13c;
};
struct Frame {
    int f08;
    char unknownc[0x8];
    int f14;
    char unknown18[0x8];
};
extern int hierarchy_is_active(void *);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c075894(void *, void *, int, int);
extern int create_effect_769c(void *, int);
void operation_8c1c577c(int a0, int a1, int a2, int a3)
{
    Frame frame;
    int t1;
    S_c8c122700 *t2;
    int t3;
    S_c8c122700 *t4;
    int t5;
    if (a0 != 0 && a1 != 0) {
        t1 = hierarchy_is_active((void *)a1);
        if (t1 != 0) {
            t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
            if (t2 != 0) {
                S_c8c122700 *self = (S_c8c122700 *)t2;
                S_c8c122700 **home = &self;
                (void)home;
                initialize_hierarchy_node((void *)t2, (void *)a0);
                self->f18 = (void *)0x8c27664c;
                self->f00 = (int)(*(int *)0x8c328c50);
                self->f1e = 0x2c;
                self->f28 = (S_c8c122700_28 *)a1;
                self->f20 = (S_c8c122700_20 *)a2;
                operation_8c075894((void *)(self->f28), (void *)(self->f28->f13c), (int)(self->f20), (int)(&(&frame)->f14));
                t3 = create_effect_769c((void *)(&(&frame)->f14), 0x1bd);
                self->f24 = (int)(t3);
                self->f04 |= 0x10;
            }
            t4 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
            if (t4 != 0) {
                S_c8c122700 *self = (S_c8c122700 *)t4;
                S_c8c122700 **home = &self;
                (void)home;
                initialize_hierarchy_node((void *)t4, (void *)a0);
                self->f18 = (void *)0x8c27664c;
                self->f00 = (int)(*(int *)0x8c328c50);
                self->f1e = 0x2c;
                self->f28 = (S_c8c122700_28 *)a1;
                self->f20 = (S_c8c122700_20 *)a3;
                operation_8c075894((void *)(self->f28), (void *)(self->f28->f13c), (int)(self->f20), (int)(&(&frame)->f08));
                t5 = create_effect_769c((void *)(&(&frame)->f08), 0x1bd);
                self->f24 = (int)(t5);
                self->f04 |= 0x10;
            }
        }
    }
}
