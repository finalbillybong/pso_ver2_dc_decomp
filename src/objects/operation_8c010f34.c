typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_g8c2e2130 S_g8c2e2130;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct Block_p1_0 {
    short f00;
    char unknown2[0x6];
    short f08;
    char unknowna[0xa];
    int f14;
} Block_p1_0;
struct Arg1 {
    Block_p1_0 f00;
};
struct S_vv1 {
    char unknown0[0x2b];
    char f2b;
    short f2c;
    short f2e;
    char unknown30[0xa30];
    int fa60;
    Block24 fa64;
};
int operation_8c010f34(int a0, Arg1 *a1)
{
    S_vv1 *v1;
    char *v11;
    v1 = (S_vv1 *)*(S_g8c2e2130 **)((char *)0x8c2e2130 + (a1->f00.f00 + -0x80 << 2));
    if (v1 == 0) {
        return 1;
    }
    if ((short)a0 == 0) {
        a1->f00.f14 = (int)v1 + 0x74;
        *(Block24 *)&v1->fa64 = *(Block24 *)&a1->f00;
        a1->f00.f08 = 0x800;
    } else {
        v1->f2b = 0;
        v1->f2c = a1->f00.f08;
        v1->f2e = 0;
        v11 = (char *)v1->fa60;
        if (v11 != 0) {
            ((void (*)(S_vv1 *))(v11))(v1);
        }
    }
    return 0;
}
