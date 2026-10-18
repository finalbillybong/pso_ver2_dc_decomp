typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2be0 S_g8c4e2be0;
extern S_g8c4e2be0 *g_8c4e2be0;
extern int g_8c4e2bf4;
extern void call_8c03dc40(void *, int);
void operation_8c1bf308(void)
{
    int v1;
    g_8c4e2bf4 = 0;
    v1 = (int)0;
    while (4 > v1) {
        *(int *)((char *)0x8c4e2be4 + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    if (g_8c4e2be0 != 0) {
        call_8c03dc40(g_8c4e2be0, 1);
    }
}
