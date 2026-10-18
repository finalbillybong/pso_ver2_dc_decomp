typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2c20 S_g8c4e2c20;
extern S_g8c4e2c20 *g_8c4e2c20;
extern int g_8c4e2c2c;
extern void call_8c03dc40(void *, int);
void operation_8c1bfb14(void)
{
    int v1;
    g_8c4e2c2c = 0;
    v1 = (int)0;
    while (2 > v1) {
        *(int *)((char *)0x8c4e2c24 + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    if (g_8c4e2c20 != 0) {
        call_8c03dc40(g_8c4e2c20, 1);
    }
}
