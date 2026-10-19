typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_x74416 S_x74416;
struct S_x74416 {
    char unknown0[0x8];
    int f08;
};
struct S_vv1 {
    char unknown0[0xc];
    int f0c;
    int f10;
};
extern int g_8c417664;
int operation_8c010170(int a0, int a1, int a2, int a3)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)(g_8c417664 + a0 * 0x4c);
    ((S_x74416 *)(g_8c417664 + a0 * 0x4c))->f08 = a2;
    v1->f0c = a3;
    v1->f10 = a1;
    return 0;
}
