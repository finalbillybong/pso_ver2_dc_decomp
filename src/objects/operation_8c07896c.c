typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a60 S_g8c469a60;
typedef struct S_g8c469a64 S_g8c469a64;
extern S_g8c469a60 *g_8c469a60;
extern S_g8c469a64 *g_8c469a64;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c07896c(void)
{
    call_8c37d534(g_8c469a64);
    call_8c011ec0(g_8c469a64);
    g_8c469a64 = 0;
    call_8c03dc40(g_8c469a60, 1);
    g_8c469a60 = 0;
}
