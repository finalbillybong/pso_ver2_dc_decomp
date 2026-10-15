typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1d4 Arg0_1d4;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x1d4];
    Arg0_1d4 *f1d4;
    char unknown1d8[0xa8];
    int f280;
};
struct Arg0_1d4 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv1 {
    int f00;
    char unknown4[0x1c];
    float f20;
    float f24;
    float f28;
};
extern void call_8c3aa716(Arg0_1d4 *);
void operation_8c23c9ec(Object *o)
{
    char *v86;
    S_vv1 *v1;
    if (*(int *)0x8c4689f0 == 1 && o->f1d4 != 0 && o->f280 == 1) {
        v86 = (char *)o->f1d4->f2c;
        if (v86 != 0) {
            v1 = (S_vv1 *)v86;
            v1->f20 = 0.1f;
            v1->f24 = 0.1f;
            v1->f28 = 0.1f;
            v1->f00 &= -5;
            call_8c3aa716((Arg0_1d4 *)(o->f1d4));
            v1->f00 |= 4;
            v1->f20 = 1.0f;
            v1->f24 = 1.0f;
            v1->f28 = 1.0f;
        }
    }
}
