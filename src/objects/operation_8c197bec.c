typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_3c Arg0_30_3c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Frame {
    float f00;
    float f04;
};
struct S_vv2 {
    char unknown0[0x8];
    float f08;
    float f0c;
    char unknown10[0x8];
    float f18;
};
struct Arg0_30 {
    char unknown0[0x3c];
    Arg0_30_3c *f3c;
};
struct S_vv1 {
    char unknown0[0x18];
    float f18;
};
extern void operation_8c103c0c(void *, void *);
void operation_8c197bec(Object *o, int a1)
{
    Frame frame;
    S_vv2 *v2;
    S_vv1 *v1;
    v2 = (S_vv2 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (a1 << 2));
    v1 = (S_vv1 *)o->f30->f3c;
    (&frame)->f00 = v2->f08 + 128.0f - 26.0f;
    (&frame)->f04 = v2->f0c + 351.0f - 290.0f;
    operation_8c103c0c((void *)v1, (void *)(&frame));
    v1->f18 = v2->f18;
}
