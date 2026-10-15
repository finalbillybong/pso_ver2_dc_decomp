typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
int operation_8c01bb7c(int a0)
{
    int v2;
    S_vv3 *v3;
    int v1;
    operation_8c1acbc0((void *)(a0 + 0x3e0));
    operation_8c1acbc0((void *)(a0 + 0x404));
    v2 = (int)0;
    v1 = (int)-1;
    while (0x1e > v2) {
        v3 = (S_vv3 *)((char *)(a0 + 0x20 + v2 * 0x1c) + 4);
        v3->f00 = 0;
        v3->f01 = v1;
        v3->f04 = 0;
        v3->f03 = 0;
        v3->f02 = 0;
        operation_1c7dd4((void *)((int)v3 + 8));
        v2 = (int)(v2 + 1);
    }
    return (int)(a0);
}
