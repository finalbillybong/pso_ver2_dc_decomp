typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c1aeae4(void)
{
    int t1;
    int t2;
    if (*(int *)0x8c2e2ad8 == 1) {
        if (*(int *)0x8c4703c0 != 3 && *(int *)0x8c44be20 != 1) {
            goto L_8c1aeb26;
        }
        t1 = call_8c011ecc(0x440);
        if (t1 != 0) {
            call_8c03d610(t1, 1, (void *)((void *)0x8c325d80), 0, 0, 0);
        }
        *(int *)0x8c4e22e0 = (int)(t1);
        return;
    }
L_8c1aeb26:;
    t2 = call_8c011ecc(0x440);
    if (t2 != 0) {
        call_8c03d610(t2, 1, (void *)((void *)0x8c325d64), 0, 0, 0);
    }
    *(int *)0x8c4e22e0 = (int)(t2);
}
