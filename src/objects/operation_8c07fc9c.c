typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_x26288_0 S_x26288_0;
struct S_x26288_0 {
    char unknown0[0x68];
    int f68;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c1ab01c(void *, int, int, int);
void operation_8c07fc9c(int a0)
{
    int v2;
    int v1;
    int v3;
    char *v4;
    int t1;
    v2 = (int)0;
    v1 = (int)0x1f4;
    while (v2 != 2) {
        v3 = (int)(v2 << 2);
        if (*(int *)((char *)((char *)(a0 + v1) + 0x0) + (v3)) != 0) {
            (*(S_x26288_0 **)((char *)((char *)(a0 + v1) + 0x0) + (v3)))->f68 |= 2;
            v4 = (char *)*(int *)((char *)((char *)(a0 + v1) + 0x0) + (v3));
            if (v4 != 0) {
                t1 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
                if (t1 != 0) {
                    operation_8c1ab01c((void *)t1, (int)(v4), (int)((void *)0x8c1f28f0), 0x1e);
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
}
