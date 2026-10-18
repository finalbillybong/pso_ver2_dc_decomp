typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_x16976 S_x16976;
struct S_vv1 {
    unsigned short f00;
    short f02;
};
struct Arg1 {
    Vector3 f00;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
struct S_x16976 {
    Vector3 f00;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
int operation_8c1aa8e8(int a0, Arg1 *a1)
{
    S_vv1 *v1;
    S_c8c053d84 *t1;
    a0 += 0x30;
    v1 = (S_vv1 *)(a0 + 4);
    if (v1->f00 == 0xffff) {
        return 0;
    }
    t1 = lookup_object_by_id((unsigned short)(v1->f00));
    if (t1 == 0) {
        return 0;
    }
    *(Vector3 *)&a1->f00 = *(Vector3 *)&((S_x16976 *)(t1->fdc + 0x1c + v1->f02 * 0x2c))->f00;
    return 1;
}
