typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c88 S_g8c469c88;
typedef struct S_g8c469c8c S_g8c469c8c;
extern S_g8c469c88 *g_8c469c88;
extern S_g8c469c8c *g_8c469c8c;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c083e68(void)
{
    call_8c37d534(g_8c469c8c);
    call_8c011ec0(g_8c469c8c);
    call_8c03dc40(g_8c469c88, 1);
    g_8c469c8c = (S_g8c469c8c *)0;
    g_8c469c88 = (S_g8c469c88 *)0;
}
