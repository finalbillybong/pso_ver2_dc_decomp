typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_20 Arg0_30_20;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x22];
    unsigned short f22;
    char unknown24[0xc];
    Arg0_30 *f30;
    char unknown34[0x4];
    int f38;
};
struct Arg0_30 {
    char unknown0[0x20];
    Arg0_30_20 *f20;
};
struct S_vv4 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv1 {
    int f00;
};
extern int operation_8c1571f4(void *);
extern int operation_8c21f32c(void *);
extern void call_8c21f3f0(int);
int operation_8c1dd57c(Object *o)
{
    S_vv4 *v4;
    char *v5;
    S_vv1 *v1;
    int t1;
    int t2;
    if (o->f30 == 0) {
        return 0;
    }
    v4 = (S_vv4 *)o->f30->f20;
    if (((v4->f80 & 0xffff & 4)) != 0) {
        o->f22 |= 0x20;
        return 1;
    }
    if (((v4->f80 & 0xffff & 2)) == 0) {
        return 0;
    }
    o->f22 |= 0x10;
    v1 = (S_vv1 *)((int)o->f38 + 4);
    v5 = (char *)o->f30->f20;
    t1 = operation_8c1571f4((void *)v5);
    v1->f00 = (int)(t1);
    if (((o->f22 & 0x80)) != 0) {
        t2 = operation_8c21f32c((void *)v1);
        call_8c21f3f0(t2);
    }
    return 1;
}
