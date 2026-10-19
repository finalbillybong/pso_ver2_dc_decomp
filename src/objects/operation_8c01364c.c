typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0x4];
    int f04;
};
void operation_8c01364c(S_vv2 *a0, unsigned int a1)
{
    int v1;
    char *v8;
    v1 = (int)(a1 >> 2 >> 1);
    a0 = (S_vv2 *)((char *)a0 + (v1 << 3));
    while (v1 > 0) {
        a0--;
        v8 = (char *)a0->f04;
        if (v8 != 0) {
            ((void (*)(void))(v8))();
        }
        v1 = (int)(v1 + -1);
    }
}
