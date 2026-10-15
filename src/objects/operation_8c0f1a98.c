typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c0f1a98(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = current_effect_mode();
    if (t1 != 4) {
        if (t1 == 7) {
            goto L_8c0f1af6;
        }
        t2 = call_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 5, (void *)((void *)0x8c3095b4), 0, 0, 0);
        }
        *(int *)0x8c470540 = (int)(t2);
        return;
    }
    t3 = call_8c011ecc(0x440);
    if (t3 != 0) {
        call_8c03d610(t3, 5, (void *)((void *)0x8c3095d0), 0, 0, 0);
    }
    *(int *)0x8c470540 = (int)(t3);
    return;
L_8c0f1af6:;
    t4 = call_8c011ecc(0x440);
    if (t4 != 0) {
        call_8c03d610(t4, 5, (void *)((void *)0x8c3095ec), 0, 0, 0);
    }
    *(int *)0x8c470540 = (int)(t4);
}
