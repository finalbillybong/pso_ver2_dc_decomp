typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_s14 Arg1_s14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_s4 S_vv1_s4;
typedef struct S_vv1_s8 S_vv1_s8;
typedef struct S_vv1_sc S_vv1_sc;
struct S_vv1 {
    char f00;
    char f01;
    char unknown2[0x2];
    char f04;
    char unknown5[0x3];
    char f08;
    char unknown9[0x3];
    char f0c;
};
struct Arg1 {
    char unknown0[0x14];
    char f14;
};
struct Arg1_s14 {
    char unknown0[0x1];
    char f01;
};
struct S_vv1_s4 {
    char unknown0[0x1];
    char f01;
};
struct S_vv1_s8 {
    char unknown0[0x1];
    char f01;
};
struct S_vv1_sc {
    char unknown0[0x1];
    char f01;
};
void operation_8c027c80(int a0, Arg1 *a1)
{
    S_vv1 *v1;
    char *t1;
    v1 = (S_vv1 *)(0x4 + (char *)a1);
    v1->f00 = 1;
    t1 = 0x14 + (char *)a1;
    v1->f01 = 0;
    *t1 = 1;
    ((Arg1_s14 *)t1)->f01 = 0;
    v1->f04 = 2;
    ((S_vv1_s4 *)((char *)v1 + 0x4))->f01 = 0;
    v1->f08 = 2;
    ((S_vv1_s8 *)((char *)v1 + 0x8))->f01 = 1;
    if ((0x60 & a0) != 0) {
        v1->f0c = 4;
        ((S_vv1_sc *)((char *)v1 + 0xc))->f01 = 0;
    } else {
        v1->f0c = 3;
        ((S_vv1_sc *)((char *)v1 + 0xc))->f01 = 0;
    }
}
