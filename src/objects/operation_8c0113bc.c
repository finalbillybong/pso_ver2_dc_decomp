typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2e2358[];
extern void operation_8c011e80(void);
extern void operation_8c011e78(int, int);
extern int call_8c01154c(int, int);
extern int call_8c011744(int, int, int, void *);
extern void operation_8c011e84(void *);
int operation_8c0113bc(int a0, int a1)
{
    int v2;
    int v1;
    int v3;
    int t1;
    int t2;
    operation_8c011e80();
    v1 = (int)(void *)0x8c417f80;
    operation_8c011e78(a0, a1);
    t1 = call_8c01154c(a0, a1);
    if (t1 == 0) {
        v2 = (int)0;
        v3 = (int)v2;
    } else {
        t2 = call_8c011744(a0, a1, 0x40000000, (void *)((void *)0x8c417b80));
        v3 = (int)v1;
        if (t2 == 0) {
            v3 = (int)0;
        }
    }
    operation_8c011e84((void *)((g_8c2e2358 + 0x47)));
    return (int)(v3);
}
