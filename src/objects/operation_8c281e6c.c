typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c417f80 S_L8c417f80;
struct S_L8c417f80 {
    int f00;
    void *f04;
};
extern S_L8c417f80 g_8c417f80;
void operation_8c281e6c(void)
{
    (&g_8c417f80)->f00 = 0;
    (&g_8c417f80)->f04 = (void *)0x8c417780;
}
