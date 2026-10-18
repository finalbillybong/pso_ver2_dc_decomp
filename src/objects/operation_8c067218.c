typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c468904 S_L8c468904;
typedef struct S_L8c468904_4 S_L8c468904_4;
struct S_L8c468904 {
    char unknown0[0x4];
    S_L8c468904_4 *f04;
};
extern S_L8c468904 g_8c468904;
extern void operation_8c05b950(void *, int, void *, int);
void operation_8c067218(int a0)
{
    operation_8c05b950((void *)a0, 0, (void *)((&g_8c468904)->f04), 0);
}
