typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c20 S_g8c469c20;
typedef struct S_g8c469c40 S_g8c469c40;
extern S_g8c469c20 *g_8c469c20;
extern S_g8c469c40 *g_8c469c40;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c0820f4(void)
{
    call_8c37d534(g_8c469c20);
    call_8c011ec0(g_8c469c20);
    g_8c469c20 = (S_g8c469c20 *)0;
    call_8c03dc40(g_8c469c40, 1);
    g_8c469c40 = (S_g8c469c40 *)0;
}
