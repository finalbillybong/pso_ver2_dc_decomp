typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
};
extern char g_8c2e2358[];
extern void operation_8c011e98(void);
extern void operation_8c011e80(void);
extern void operation_8c011e7c(int);
extern int call_8c0116c4(int, Arg1 *, int);
extern int call_8c011b94(int, int, Arg1 *);
extern void operation_8c011e84(void *);
int operation_8c011308(int a0, Arg1 *a1, int a2)
{
    int v1;
    int v3;
    int v4;
    int v5;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    operation_8c011e98();
    operation_8c011e80();
    operation_8c011e7c(a0);
    v1 = (int)(void *)0x8c417f80;
    if (a1->f00 == 0) {
        t1 = call_8c0116c4(a0, a1, a2);
        if (t1 == 0) {
            v2 = (int)0;
            goto L_8c011386;
        }
        t2 = call_8c011b94(a0, a2, a1);
        v2 = (int)v1;
        if (t2 != 0) {
            goto L_8c011386;
        }
        v3 = (int)0;
        v5 = (int)v3;
    } else {
        t3 = call_8c011b94(a0, a2, a1);
        v5 = (int)v1;
        if (t3 == 0) {
            t4 = call_8c0116c4(a0, a1, a2);
            if (t4 == 0) {
                v4 = (int)0;
                v5 = (int)v4;
            } else {
                t5 = call_8c011b94(a0, a2, a1);
                v5 = (int)v1;
                if (t5 == 0) {
                    v5 = (int)0;
                }
            }
        }
    }
    v2 = (int)v5;
L_8c011386:;
    operation_8c011e84((void *)((g_8c2e2358 + 0x2c)));
    return (int)(v2);
}
