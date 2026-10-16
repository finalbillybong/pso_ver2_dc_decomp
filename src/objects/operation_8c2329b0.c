typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03669c S_c8c03669c;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_70 S_g8c467180_70;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_20 S_vv13_20;
typedef struct S_vv13_c S_vv13_c;
typedef struct S_vv14 S_vv14;
typedef struct S_vv14_10 S_vv14_10;
typedef struct S_vv14_20 S_vv14_20;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_20 S_vv17_20;
typedef struct S_vv17_c S_vv17_c;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_10 S_vv18_10;
typedef struct S_vv18_20 S_vv18_20;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
struct S_c8c03669c {
    char f00;
};
struct S_g8c467180 {
    char unknown0[0x70];
    S_g8c467180_70 *f70;
};
struct S_g8c467180_70 {
    char unknown0[0xc];
    int f0c;
    int f10;
};
struct S_vv13 {
    char unknown0[0xc];
    S_vv13_c *f0c;
    char unknown10[0x10];
    S_vv13_20 *f20;
};
struct S_vv14 {
    char unknown0[0x10];
    S_vv14_10 *f10;
    char unknown14[0xc];
    S_vv14_20 *f20;
};
struct S_vv17 {
    char unknown0[0xc];
    S_vv17_c *f0c;
    char unknown10[0x10];
    S_vv17_20 *f20;
};
struct S_vv18 {
    char unknown0[0x10];
    S_vv18_10 *f10;
    char unknown14[0xc];
    S_vv18_20 *f20;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c12b880(void *, int, int);
extern void select_mode13_8c1cc5d0(void);
extern S_c8c03669c *operation_8c03669c(int, int);
extern void call_8c12b048(void *, int, ...);
extern int operation_8c0366dc(int);
extern int call_8c036708(int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c198294(void *, int);
extern void call_8c199688(int, Object *, int);
extern void call_8c232fa0(Object *);
Object *operation_8c2329b0(Object *o)
{
    Object **home = &o;
    char *v25;
    char *v1;
    char *v26;
    char *v2;
    char *v27;
    char *v6;
    char *v28;
    char *v7;
    char *v29;
    char *v11;
    char *v30;
    char *v12;
    S_vv13 *v13;
    S_vv14 *v14;
    S_vv17 *v17;
    S_vv18 *v18;
    S_c8c03669c *t1;
    S_c8c03669c *t2;
    S_c8c03669c *t3;
    S_c8c03669c *t4;
    S_c8c03669c *t5;
    S_c8c03669c *t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be88 **)0x8c44be88));
    o->dispatch = (void *)0x8c278fec;
    o->f28 = 0;
    o->f2c = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f30 = 0;
    o->f34 = 0;
    call_8c12b880((void *)((void *)0x8c510920), 0, 0xbb);
    call_8c12b880((void *)((void *)0x8c5109db), 0, 0xbb);
    call_8c12b880((void *)((void *)0x8c510a96), 0, 0x42);
    call_8c12b880((void *)((void *)0x8c510ad8), 0, 0x42);
    if (*(int *)0x8c461c00 != 0) {
        select_mode13_8c1cc5d0();
        return o;
    }
    t1 = operation_8c03669c(0, 0);
    if (t1->f00 != 0) {
        v25 = (char *)(*(S_g8c467180 **)0x8c467180)->f70->f0c;
        v1 = (char *)v25;
        t2 = operation_8c03669c(0, 0);
        call_8c12b048((void *)((void *)0x8c510920), (int)(v1), t2);
    } else {
        v26 = (char *)(*(S_g8c467180 **)0x8c467180)->f70->f0c;
        v2 = (char *)v26;
        t3 = operation_8c03669c(0, 1);
        call_8c12b048((void *)((void *)0x8c510920), (int)(v2), t3);
    }
    t4 = operation_8c03669c(1, 0);
    if (t4->f00 != 0) {
        v27 = (char *)(*(S_g8c467180 **)0x8c467180)->f70->f0c;
        v6 = (char *)v27;
        t5 = operation_8c03669c(1, 0);
        call_8c12b048((void *)((void *)0x8c5109db), (int)(v6), t5);
    } else {
        v28 = (char *)(*(S_g8c467180 **)0x8c467180)->f70->f0c;
        v7 = (char *)v28;
        t6 = operation_8c03669c(1, 1);
        call_8c12b048((void *)((void *)0x8c5109db), (int)(v7), t6);
    }
    v29 = (char *)(*(S_g8c467180 **)0x8c467180)->f70->f10;
    v11 = (char *)v29;
    t7 = operation_8c0366dc(0);
    call_8c12b048((void *)((void *)0x8c510a96), (int)(v11), (S_c8c03669c *)t7);
    v30 = (char *)(*(S_g8c467180 **)0x8c467180)->f70->f10;
    v12 = (char *)v30;
    t8 = operation_8c0366dc(1);
    call_8c12b048((void *)((void *)0x8c510ad8), (int)(v12), (S_c8c03669c *)t8);
    t9 = call_8c036708(0);
    if (t9 == 0) {
        call_8c12b880((void *)((void *)0x8c510920), 0, 0xbb);
        call_8c12b880((void *)((void *)0x8c510a96), 0, 0x42);
        v13 = (S_vv13 *)(*(S_g8c467180 **)0x8c467180)->f70;
        call_8c12b048((void *)((void *)0x8c510920), (int)(v13->f0c), (S_c8c03669c *)(v13->f20));
        v14 = (S_vv14 *)(*(S_g8c467180 **)0x8c467180)->f70;
        call_8c12b048((void *)((void *)0x8c510a96), (int)(v14->f10), (S_c8c03669c *)(v14->f20));
    }
    t10 = call_8c036708(1);
    if (t10 == 0) {
        call_8c12b880((void *)((void *)0x8c5109db), 0, 0xbb);
        call_8c12b880((void *)((void *)0x8c510ad8), 0, 0x42);
        v17 = (S_vv17 *)(*(S_g8c467180 **)0x8c467180)->f70;
        call_8c12b048((void *)((void *)0x8c5109db), (int)(v17->f0c), (S_c8c03669c *)(v17->f20));
        v18 = (S_vv18 *)(*(S_g8c467180 **)0x8c467180)->f70;
        call_8c12b048((void *)((void *)0x8c510ad8), (int)(v18->f10), (S_c8c03669c *)(v18->f20));
    }
    t11 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t11 != 0) {
        operation_8c198294((void *)t11, (int)o);
    }
    t12 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xac);
    if (t12 != 0) {
        call_8c199688(t12, o, 1);
    }
    call_8c232fa0(o);
    return o;
}
