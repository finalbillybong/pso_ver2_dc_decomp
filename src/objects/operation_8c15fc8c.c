typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2a6];
    Arg0_398 *f398;
    char unknown39c[0x1c];
    Arg0_3b8 *f3b8;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
struct S_vv1 {
    Vector3 f00;
};
struct Arg0_3b8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
void operation_8c15fc8c(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)o + 0x3c);
    o->f398->f18 = (unsigned int)o->f398->f18 >> 1 << 1;
    *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f3b8->f3c;
    o->f64 = (int)(o->f3b8->f64);
    o->fe8 |= 1;
    o->ff0 = 8;
}
