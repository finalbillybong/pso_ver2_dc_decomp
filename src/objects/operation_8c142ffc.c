typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da280 S_g8c4da280;
typedef struct S_g8c4da284 S_g8c4da284;
extern S_g8c4da280 *g_8c4da280;
extern S_g8c4da284 *g_8c4da284;
extern void call_8c37d534(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c142ffc(void)
{
    int v1;
    v1 = (int)0;
    while (7 > v1) {
        *(int *)((char *)0x8c4da288 + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    call_8c37d534(g_8c4da284, v1);
    call_8c03dc40(g_8c4da280, 1);
    g_8c4da280 = (S_g8c4da280 *)0;
}
