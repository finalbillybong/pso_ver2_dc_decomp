typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ca0 S_g8c469ca0;
typedef struct S_g8c469ca4 S_g8c469ca4;
extern S_g8c469ca0 *g_8c469ca0;
extern S_g8c469ca4 *g_8c469ca4;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c085e84(void)
{
    call_8c03dc40(g_8c469ca0, 1);
    g_8c469ca0 = (S_g8c469ca0 *)0;
    call_8c37d534(g_8c469ca4);
    call_8c011ec0(g_8c469ca4);
    g_8c469ca4 = (S_g8c469ca4 *)0;
}
