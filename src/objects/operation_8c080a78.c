typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469bc0 S_g8c469bc0;
typedef struct S_g8c469bc4 S_g8c469bc4;
extern S_g8c469bc0 *g_8c469bc0;
extern S_g8c469bc4 *g_8c469bc4;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c080a78(void)
{
    call_8c03dc40(g_8c469bc4, 1);
    g_8c469bc4 = (S_g8c469bc4 *)0;
    call_8c37d534(g_8c469bc0);
    call_8c011ec0(g_8c469bc0);
    g_8c469bc0 = (S_g8c469bc0 *)0;
}
