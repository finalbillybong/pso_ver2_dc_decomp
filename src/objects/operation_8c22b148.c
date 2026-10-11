typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_38 S_g8c46fe20_38;
typedef struct Arg2 Arg2;
typedef struct S_vv2 S_vv2;
typedef struct S_vv5 S_vv5;
struct Arg2 {
    float f00;
    float f04;
};
struct S_vv2 {
    float f00;
    float f04;
};
struct S_vv5 {
    char unknown0[0x3c];
    float f3c;
};
void operation_8c22b148(int a0, int a1, Arg2 *a2)
{
    S_vv5 *v5;
    S_vv2 *v2;
    v2 = (S_vv2 *)a2;
    if (a1 <= 0) {
        a2->f00 = 155.0f;
        a2->f04 = 65.0f;
        return;
        v2 = (S_vv2 *)&a2->f04;
    }
    if (*(int *)0x8c46fe20 == 0) {
        v5 = (S_vv5 *)0;
    } else {
        v5 = (S_vv5 *)*(S_g8c46fe20_38 **)((char *)((char *)*(S_g8c46fe20 **)0x8c46fe20 + 0x38) + ((char)(a1 + -1) << 2));
    }
    if (v5 != 0) {
        v2->f00 = 115.0f;
        v2->f04 = v5->f3c + 27.0f;
    }
}
