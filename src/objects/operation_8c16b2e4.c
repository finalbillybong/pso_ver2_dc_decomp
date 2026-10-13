typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
extern int call_8c02b2a4(void);
int operation_8c16b2e4(void)
{
    int v1;
    int t1;
    int t2;
    t1 = call_8c01c25c();
    if (t1 != 0xf) {
        t2 = call_8c02b2a4();
        if (t2 == 0) {
            if (*(int *)0x8c4dc800 != 1) {
                goto L_8c16b316;
            }
            v1 = (int)(*(int *)0x8c510ba0 != 0);
            if (v1 == 0) {
                goto L_8c16b316;
            }
        }
    }
    return 0;
L_8c16b316:;
    return (int)(*(int *)0x8c4dbb1c);
}
