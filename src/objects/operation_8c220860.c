typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505a00 S_g8c505a00;
extern int g_8c4703c0;
extern S_g8c505a00 *g_8c505a00;
extern char g_8c505a04;
extern int g_8c505a08;
extern int call_8c2209c8(void *);
extern void call_8c2209f4(int, int);
void operation_8c220860(int a0)
{
    int t1;
    if (g_8c4703c0 != 3) {
        g_8c505a04 = a0;
        t1 = call_8c2209c8(g_8c505a00);
        g_8c505a08 = t1;
        call_8c2209f4(t1, a0);
    }
}
