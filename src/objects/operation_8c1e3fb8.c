typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e30c0 S_g8c4e30c0;
typedef struct S_g8c4e30c4 S_g8c4e30c4;
typedef struct S_g8c4e30c4_0 S_g8c4e30c4_0;
extern S_g8c4e30c0 *g_8c4e30c0;
extern S_g8c4e30c4 *g_8c4e30c4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(void *);
void operation_8c1e3fb8(void)
{
    int v2;
    int v1;
    v1 = (int)0;
    while (3 > v1) {
        v2 = (int)(v1 << 2);
        call_8c37d534((void *)(*(S_g8c4e30c4_0 **)((char *)((char *)g_8c4e30c4 + 0x0) + (v2))));
        call_8c011ec0((void *)(*(S_g8c4e30c4_0 **)((char *)((char *)g_8c4e30c4 + 0x0) + (v2))));
        v1 = (int)(v1 + 1);
    }
    if (g_8c4e30c0 != 0) {
        call_8c03dc40(g_8c4e30c0, 1);
    }
    if (g_8c4e30c4 != 0) {
        call_8c18de08(g_8c4e30c4);
    }
}
