typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern void operation_8c059ef8(void *, int);
extern void operation_8c059ea4(void *, int);
void operation_8c0f5484(int a0, int a1)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)(a0 + 0x474);
    switch (a1) {
    case 5:
        break;
    case 4:
        operation_8c059ef8((void *)a0, 0);
        v1->f00 = 0;
        return;
    case 3:
        operation_8c059ea4((void *)a0, 1);
        return;
    case 0:
        v1->f00 += 1;
    }
}
