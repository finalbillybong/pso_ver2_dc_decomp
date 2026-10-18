typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x22];
    char f22;
    char unknown23[0x1];
    float f24;
    float f28;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct S_vv4 {
    char unknown0[0x5c];
    float f5c;
};
void operation_8c22b1a4(Object *o, Arg1 *a1)
{
    int v1;
    S_vv4 *v4;
    char v5;
    v5 = o->f22;
    if (*(int *)0x8c46fe20 == 0) {
        v4 = (S_vv4 *)0;
    } else {
        v1 = (int)*(int *)((char *)((char *)*(S_g8c46fe20 **)0x8c46fe20 + 0x38) + (v5 << 2));
        v4 = (S_vv4 *)v1;
    }
    if (v4 != 0) {
        a1->f00 = o->f24;
        a1->f04 = o->f28;
        a1->f08 = -1.0f / (v4->f5c + 0.2691f);
    }
}
