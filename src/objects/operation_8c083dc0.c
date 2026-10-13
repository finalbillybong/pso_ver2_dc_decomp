typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c80 S_g8c469c80;
typedef struct S_g8c469c84 S_g8c469c84;
extern S_g8c469c80 *g_8c469c80;
extern S_g8c469c84 *g_8c469c84;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c083dc0(void)
{
    call_8c37d534(g_8c469c84);
    call_8c011ec0(g_8c469c84);
    call_8c03dc40(g_8c469c80, 1);
    g_8c469c84 = (S_g8c469c84 *)0;
    g_8c469c80 = (S_g8c469c80 *)0;
}
