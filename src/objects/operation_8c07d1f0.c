typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x76912_0 S_x76912_0;
extern void set_fields_8c1f2a5c(void *);
extern void operation_8c209a88(void *);
void operation_8c07d1f0(int a0)
{
    int v2;
    int v1;
    int v3;
    v1 = (int)0x1f4;
    v2 = (int)0;
    while (v2 != 2) {
        v3 = (int)(v2 << 2);
        if (*(int *)((char *)((char *)(a0 + v1) + 0x0) + (v3)) != 0) {
            set_fields_8c1f2a5c((void *)(*(S_x76912_0 **)((char *)((char *)(a0 + v1) + 0x0) + (v3))));
            *(int *)((char *)((char *)(a0 + v1) + 0x0) + (v3)) = 0;
        }
        v2 = (int)(v2 + 1);
    }
    operation_8c209a88((void *)a0);
}
