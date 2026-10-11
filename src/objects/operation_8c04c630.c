typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_4 S_g8c467180_4;
typedef struct S_g8c467180_8 S_g8c467180_8;
struct S_g8c467180 {
    char unknown0[0x4];
    S_g8c467180_4 *f04;
    S_g8c467180_8 *f08;
};
int operation_8c04c630(int a0)
{
    int v1;
    int v2;
    int v5;
    v1 = (int)a0;
    if (!(a0 >= 0)) {
        v1 = (int)0;
    }
    v2 = (int)v1;
    if (v1 >= 0x33) {
        v2 = (int)0;
    }
    v5 = (int)v2;
    if (*(int *)0x8c4703c0 >= 3) {
        return *(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f08 + 0x0) + (v2 << 2));
    }
    return *(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f04 + 0x0) + (v5 << 2));
}
