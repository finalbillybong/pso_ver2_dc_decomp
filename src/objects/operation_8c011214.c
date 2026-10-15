typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c011e80(void);
extern void operation_8c011e78(int, int);
extern int call_8c011434(int, int, int);
extern int call_8c011960(int, int, int, void *);
extern void operation_8c011e84(void *);
int operation_8c011214(int a0, int a1, int a2)
{
    int v2;
    int v1;
    int v3;
    int t1;
    int t2;
    operation_8c011e80();
    v1 = (int)(void *)0x8c417f80;
    operation_8c011e78(a0, a1);
    t1 = call_8c011434(a0, a1, a2);
    if (t1 == 0) {
        v2 = (int)0;
        v3 = (int)v2;
    } else {
        t2 = call_8c011960(a0, a1, a2, (void *)((void *)0x8c417b80));
        v3 = (int)v1;
        if (t2 == 0) {
            v3 = (int)0;
        }
    }
    operation_8c011e84((void *)((void *)0x8c2e2358));
    return (int)(v3);
}
