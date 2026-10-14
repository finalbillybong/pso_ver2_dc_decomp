typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467220 S_g8c467220;
typedef struct S_g8c467228 S_g8c467228;
extern S_g8c467220 *g_8c467220;
extern S_g8c467228 *g_8c467228;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c050080(void)
{
    call_8c37d534(g_8c467228);
    call_8c011ec0(g_8c467228);
    g_8c467228 = (S_g8c467228 *)0;
    call_8c03dc40(g_8c467220, 1);
}
