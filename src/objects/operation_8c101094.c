typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct S_g8c4d53a0 S_g8c4d53a0;
typedef struct S_g8c4d53a0_4 S_g8c4d53a0_4;
typedef struct S_g8c4d59e0 S_g8c4d59e0;
typedef struct S_g8c4d59e4 S_g8c4d59e4;
struct S_g8c4d53a0 {
    char unknown0[0x4];
    S_g8c4d53a0_4 *f04;
};
extern S_g8c44be04 *g_8c44be04;
extern S_g8c4d53a0 *g_8c4d53a0;
extern S_g8c4d59e0 *g_8c4d59e0;
extern S_g8c4d59e4 *g_8c4d59e4;
extern void call_8c1032a0(void *, S_g8c4d53a0 *);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void operation_8c105320(int);
void operation_8c101094(void)
{
    if (g_8c4d53a0 != 0) {
        call_8c1032a0(g_8c44be04, g_8c4d53a0);
    }
    if (g_8c4d59e4 != 0) {
        call_8c37d534(g_8c4d59e4);
        call_8c011ec0(g_8c4d59e4);
        g_8c4d59e4 = (S_g8c4d59e4 *)0;
    }
    if (g_8c4d59e0 != 0) {
        call_8c03dc40(g_8c4d59e0, 1);
        g_8c4d59e0 = (S_g8c4d59e0 *)0;
    }
    if (g_8c4d53a0 != 0 && g_8c4d53a0->f04 != 0) {
        call_8c37d534((void *)(g_8c4d53a0->f04));
    }
    if (g_8c4d53a0 != 0) {
        operation_8c105320((int)g_8c4d53a0);
        g_8c4d53a0 = (S_g8c4d53a0 *)0;
    }
}
