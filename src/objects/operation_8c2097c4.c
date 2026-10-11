typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x10];
    int f10;
};
int operation_8c2097c4(void)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (*(int *)0x8c4db9e4 == 0) {
        return 1;
        v1 = (S_vv1 *)1;
    }
    return (unsigned int)(v1->f10 & 0x300) >> 8;
}
