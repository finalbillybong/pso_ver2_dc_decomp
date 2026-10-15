typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d87a0 S_g8c4d87a0;
typedef struct S_g8c4d87a8 S_g8c4d87a8;
extern int g_8c4d85e0;
extern S_g8c4d87a0 *g_8c4d87a0;
extern float g_8c4d87a4;
extern S_g8c4d87a8 *g_8c4d87a8;
extern void call_8c37e7ac(void *);
extern int call_8c38426c(float);
extern void call_8c37e7c8(int);
extern void call_8c37e7d4(void *);
void operation_8c12261c(void)
{
    int t1;
    if (((g_8c4d85e0 & 1)) != 0) {
        g_8c4d85e0 = (unsigned int)g_8c4d85e0 >> 1 << 1;
        call_8c37e7ac(g_8c4d87a0);
        t1 = call_8c38426c(-g_8c4d87a4);
        call_8c37e7c8(t1);
        call_8c37e7d4(g_8c4d87a8);
    }
}
