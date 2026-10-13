typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c00 S_g8c469c00;
typedef struct S_g8c469c10 S_g8c469c10;
extern S_g8c469c00 *g_8c469c00;
extern S_g8c469c10 *g_8c469c10;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c081a34(void)
{
    call_8c03dc40(g_8c469c00, 1);
    g_8c469c00 = (S_g8c469c00 *)0;
    call_8c37d534(g_8c469c10);
    call_8c011ec0(g_8c469c10);
    g_8c469c10 = (S_g8c469c10 *)0;
}
