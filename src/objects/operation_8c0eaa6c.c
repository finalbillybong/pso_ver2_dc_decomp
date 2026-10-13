typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c37e4a8(float, float);
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern void call_8c01c250(int);
extern void call_8c01c244(int);
extern void call_8c013620(void *, int);
extern int call_8c03651c(void);
extern void select_state2_8c01c1b4(void);
extern void call_8c380516(void);
void operation_8c0eaa6c(void)
{
    int t1;
    call_8c37e4a8(1.0f, 1.0f);
    call_8c3806f6(0, 0, 0xff);
    call_8c01d9dc();
    call_8c01c250(2);
    call_8c01c244(0x10);
    call_8c013620((void *)((void *)0x8c3088d4), 0x28);
    t1 = call_8c03651c();
    if (t1 != 0) {
        select_state2_8c01c1b4();
        return;
    }
    call_8c380516();
}
