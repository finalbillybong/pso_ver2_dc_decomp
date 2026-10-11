typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x24];
    short f24;
};
int operation_8c0de35c(void)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c46fe20 **)0x8c46fe20;
    if (*(int *)0x8c46fe20 == 0) {
        return 0;
        v1 = (S_vv1 *)0;
    }
    return 0 >= v1->f24;
}
