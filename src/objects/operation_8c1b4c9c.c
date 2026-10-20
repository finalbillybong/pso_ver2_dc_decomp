typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x10];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0x4];
    int f3b8;
    int f3bc;
    char unknown3c0[0xc];
    int f3cc;
};
struct S_vv1 {
    char unknown0[0x3a4];
    int f3a4;
    int f3a8;
};
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b4c9c(Object *o)
{
    S_vv1 *v1;
    int off;
    int a;
    int b;
    off = 0x3a8;
    v1 = (S_vv1 *)o->f394;
    if ((0xc - (int)o->f3cc) >= (v1->f3a4 - *(int *)((char *)v1 + off))) {
        if (v1 == 0) {
            return;
        }
        b = o->f3b0 & 3;
        a = *(int *)((char *)o + off) & 3;
        operation_8c1ae0d8((void *)v1, (int)(a << 6 | (a << 4 | 5) | b << 8 | b << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
        return;
    }
    if (v1 != 0) {
        b = o->f3b0 & 3;
        a = *(int *)((char *)o + off) & 3;
        operation_8c1ae0d8((void *)v1, (int)(a << 6 | (a << 4 | 6) | b << 8 | b << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
    }
}
