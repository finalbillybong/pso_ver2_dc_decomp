typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_22c S_g8c467180_2c_22c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_20 S_vv21_20;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x34];
    char f68;
    char f69;
    char unknown6a[0x2];
    int f6c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x22c];
    S_g8c467180_2c_22c *f22c;
};
struct Arg0_30 {
    int f00;
};
struct S_vv21 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x14];
    S_vv21_20 *f20;
};
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c011ecc(int);
extern void operation_8c199b20(int, int);
extern int call_8c17349c(void);
extern void call_8c0e2278(S_vv21 *, int, int);
extern int call_8c04b8dc(void *);
extern void call_8c21eb78(Object *);
extern void operation_8c21eb14(void *);
Object *operation_8c21e5a8(Object *o)
{
    Object **home = &o;
    char *v25;
    S_vv21 *v21;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c33695c));
    o->dispatch = (void *)0x8c27869c;
    o->tag = (int)(*(int *)0x8c3367f8);
    o->size = 0x70;
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        operation_8c199b20(t1, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f22c));
    }
    o->f6c = (int)(t1);
    o->f68 = 0;
    v25 = (char *)o->f30->f00;
    v21 = (S_vv21 *)v25;
    t2 = call_8c17349c();
    call_8c0e2278(v21, t2, 0);
    t3 = call_8c04b8dc((void *)(v21->f20));
    v21->f08 = 205.0f - (float)(unsigned int)t3 * 0.5f;
    o->f69 = -1;
    call_8c21eb78(o);
    operation_8c21eb14((void *)o);
    return o;
}
