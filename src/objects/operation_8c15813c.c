typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_10 S_g8c4daaa4_10;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
struct S_g8c4daaa4 {
    char unknown0[0x10];
    S_g8c4daaa4_10 *f10;
};
struct S_vv1 {
    char unknown0[0x7c];
    int f7c;
};
int operation_8c15813c(int a0, int a1)
{
    S_vv1 *v1;
    char *e;
    v1 = (S_vv1 *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f10;
    if (0xf > a0) {
        e = (char *)v1;
        e += a0 << 3;
        if (*(int *)e > a1) {
            return (int)(*(char **)(e + 0x4) + (a1 << 4));
        }
    }
    return (int)(v1->f7c);
}
