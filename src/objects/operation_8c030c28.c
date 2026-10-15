typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c284708 S_g8c284708;
struct Frame {
    char unknown0[0x20];
};
extern char g_8c2e8428[];
extern int current_effect_mode(void);
extern int call_8c011e9c(void *);
extern void call_8c03ef04(Frame *, int, void *);
extern int call_8c104d50(Frame *);
extern int call_8c105380(Frame *, int);
extern void call_8c030e2c(int);
extern void call_8c011ec0(int);
void operation_8c030c28(int a0)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)0;
    v2 = (int)0;
    t1 = current_effect_mode();
    t2 = call_8c011e9c((void *)(*(S_g8c284708 **)((char *)0x8c284708 + (t1 << 2))));
    *(int *)0x8c44be24 = (int)(t2);
    if (t2 != 0) {
        call_8c03ef04((Frame *)((&frame)), a0, (void *)((g_8c2e8428 + 0x36)));
        t3 = call_8c104d50((Frame *)((&frame)));
        if (t3 > 0) {
            t4 = call_8c011e9c((void *)t3);
            if (t4 != 0) {
                t5 = call_8c105380((Frame *)((&frame)), t4);
                v1 = (int)t5;
            }
            v2 = (int)t4;
        }
        if (v1 != 0) {
            call_8c030e2c(v1);
        }
        if (v2 != 0) {
            call_8c011ec0(v2);
        }
    }
}
