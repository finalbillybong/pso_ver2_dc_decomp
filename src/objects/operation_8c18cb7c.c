typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_58 Arg0_58;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x52];
    short f52;
    short f54;
    char unknown56[0x2];
    Arg0_58 *f58[8];
    int f78;
};
struct S_vv1 {
    short f00;
    short f02;
    int f04;
};
struct Arg0_58 {
    char unknown0[0x6a];
    short f6a;
};
void operation_8c18cb7c(Object *o)
{
    S_vv1 *v1;
    short v2;
    Arg0_58 *e;
    v2 = o->f54;
    e = *(Arg0_58 **)((char *)((char *)o + 0x58) + (v2 << 2));
    v1 = (S_vv1 *)((char *)o + (o->f52 << 3) + 0x7c);
    v1->f00 = v2;
    v1->f02 = e->f6a;
    v1->f04 = o->f78;
}
