typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern void call_8c236df0(void);
extern void call_8c01364c(void *, int);
void operation_8c122b50(void)
{
    int t1;
    int t2;
    int t3;
    t1 = current_effect_mode();
    if (t1 == 0xf) {
        call_8c236df0();
    }
    t2 = current_effect_mode();
    if (t2 != 0) {
        t3 = current_effect_mode();
        if (t3 != 0xf) {
            call_8c01364c((void *)0x8c311e00, 0x20);
        }
    }
    call_8c01364c((void *)0x8c311da0, 0x60);
}
