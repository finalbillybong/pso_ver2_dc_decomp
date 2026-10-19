typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011308 S_c8c011308;
typedef struct S_c8c011308_4 S_c8c011308_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_x52784 S_x52784;
typedef struct S_x95360 S_x95360;
struct S_vv1 {
    int f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_x52784 {
    float f00;
};
struct S_x95360 {
    float f00;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
struct S_c8c011308 {
    char unknown0[0x4];
    S_c8c011308_4 *f04;
};
struct S_c8c011308_4 {
    float f00;
    float f04;
    float f08;
};
extern S_c8c011308 *operation_8c011308(int, void *, int);
void operation_8c025814(Object *o)
{
    Frame frame;
    int v3;
    S_vv1 *v1;
    S_c8c011308 *t1;
    v1 = (S_vv1 *)((char *)o + 0x62c);
    if (!(--v1->f00 >= 0)) {
        v1->f00 = 0xf;
    }
    v3 = (int)v1->f00;
    (&frame)->f00 = ((S_x52784 *)((char *)(int *)((char *)o + 0x630) + (v3 << 3)))->f00;
    (&frame)->f08 = ((S_x95360 *)((char *)(int *)((char *)o + 0x634) + (v3 << 3)))->f00;
    (&frame)->f04 = o->f40;
    t1 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x41);
    if (t1 != 0) {
        o->f3c = t1->f04->f00;
        o->f40 = t1->f04->f04;
        o->f44 = t1->f04->f08;
    }
}
