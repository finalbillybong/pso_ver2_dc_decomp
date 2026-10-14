typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c135470(int a0)
{
    int t1;
    int t2;
    if (*(int *)0x8c2e2ad8 == 1) {
        t1 = current_effect_mode();
        if (t1 != 0x10) {
            t2 = current_effect_mode();
            if (t2 != 0x11) {
                goto L_8c1354a4;
            }
        }
        call_8c05fbf8(0x40004, (int)(a0 + 0x3c), 0, 0);
        return;
    }
L_8c1354a4:;
    call_8c05fbf8(0x4000c, (int)(a0 + 0x3c), 0, 0);
}
