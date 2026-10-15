typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4d];
    char f81;
    char unknown82[0x4];
    short f86;
    char unknown88[0xc];
    Arg0_94 *f94;
};
struct Arg0_94 {
    int f00;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
struct S_vv1 {
    char unknown0[0x34];
    int f34;
};
extern void normalize_rectangle_fields(void *, float, float);
extern void call_8c2254ec(Object *);
void operation_8c224ad4(Object *o, int a1)
{
    S_vv1 *v1;
    o->f94 = (Arg0_94 *)a1;
    o->f94->f00 = 0;
    v1 = (S_vv1 *)o->f30->f04;
    normalize_rectangle_fields((void *)v1, 161.0f, 214.0f);
    v1->f34 = 0;
    o->f86 = 0x44;
    call_8c2254ec(o);
    o->f81 = 0;
}
