typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_184 S_c8c053d84_184;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Arg2 {
    float f00;
};
struct Arg3 {
    int f00;
};
struct S_c8c053d84 {
    char unknown0[0x184];
    S_c8c053d84_184 *f184;
    char unknown188[0x180];
    short f308;
};
struct S_c8c053d84_184 {
    char unknown0[0x10];
    float f10;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void operation_8c0de288(int a0, int a1, Arg2 *a2, Arg3 *a3)
{
    int v5;
    int v6;
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)a1);
    if (t1 == 0) {
        a2->f00 = 0.0f;
        a3->f00 = 0;
        return;
    }
    if (t1->f184 == 0) {
        a2->f00 = 0.0f;
    } else {
        a2->f00 = t1->f184->f10 * 0.92f;
    }
    v5 = (int)(t1->f308 == 2);
    if (v5 == 0) {
        v6 = (int)(t1->f308 == 1);
        if (v6 == 0) {
            goto L_8c0de2ea;
        }
    }
    if (((char *)t1 + 0x7e4) == 0) {
        a3->f00 = 0;
        return;
    }
    a3->f00 = (int)(((char *)t1 + 0x7e4));
    return;
L_8c0de2ea:;
    a3->f00 = 0;
}
