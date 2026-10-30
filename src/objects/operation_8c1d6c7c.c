typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
};
struct Arg0_30 {
    char unknown0[0x14];
    int f14;
    Arg0_30_18 *f18;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3f8];
    int f3f8;
};
struct S_vv2 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_70 {
    char unknown0[0x5];
    unsigned char f05;
};
extern S_g8c467180 *g_8c467180;
extern void call_8c1d6cf8(Object *);
extern void operation_8c0e226c(int, int);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c1d6c7c(Object *o)
{
    char *v1;
    S_vv2 *v2;
    call_8c1d6cf8(o);
    v1 = (char *)o->f30->f14;
    v2 = (S_vv2 *)o->f30->f18;
    operation_8c0e226c((int)(v1), (int)(g_8c467180->f2c->f3f8));
    initialize_fields_8c0e24e8((void *)v1);
    v2->f20 = o->f70->f05;
}
