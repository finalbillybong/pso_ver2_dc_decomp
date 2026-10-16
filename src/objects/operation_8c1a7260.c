typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x4880 S_x4880;
struct S_x4880 {
    char unknown0[0x8];
    int f08;
};
extern int operation_8c02c30c(int);
int operation_8c1a7260(int a0, int a1)
{
    int v1;
    int t1;
    v1 = (int)a1;
    if (!(v1 >= 0)) {
        v1 = (int)0;
    } else {
        if (a1 > 0xc7) {
            v1 = (int)0xc7;
        }
    }
    t1 = operation_8c02c30c(a0);
    return (int)(((S_x4880 *)(*(int *)((char *)0x8c323ba4 + ((char)t1 << 2)) + v1 * 0xc))->f08);
}
