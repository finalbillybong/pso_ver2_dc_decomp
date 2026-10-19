typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2280 S_g8c4e2280;
typedef struct S_vv2_0 S_vv2_0;
extern S_g8c4e2280 *g_8c4e2280;
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c1ad348(void)
{
    int v2;
    int v1;
    v1 = (int)0;
    while (4 > v1) {
        v2 = (int)(v1 << 2);
        if (*(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4e1ae0))) != 0) {
            call_8c011ec0((void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4e1ae0)))));
            *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4e1ae0))) = 0;
        }
        v1 = (int)(v1 + 1);
    }
    call_8c03dc40(g_8c4e2280, 1);
    g_8c4e2280 = (S_g8c4e2280 *)0;
}
