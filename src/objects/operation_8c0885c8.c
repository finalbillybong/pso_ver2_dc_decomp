typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469d60 S_g8c469d60;
typedef struct S_g8c469d64 S_g8c469d64;
extern S_g8c469d60 *g_8c469d60;
extern S_g8c469d64 *g_8c469d64;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c0885c8(void)
{
    call_8c03dc40(g_8c469d60, 1);
    g_8c469d60 = (S_g8c469d60 *)0;
    call_8c37d534(g_8c469d64);
    call_8c011ec0(g_8c469d64);
    g_8c469d64 = (S_g8c469d64 *)0;
}
