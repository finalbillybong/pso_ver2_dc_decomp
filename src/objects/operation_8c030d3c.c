typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be44 S_g8c44be44;
struct Frame {
    char unknown0[0x20];
};
extern char g_8c2e8428[];
extern void call_8c03ef04(Frame *, int, void *);
extern int call_8c104d50(Frame *);
extern int current_effect_mode(void);
extern int call_8c011e9c(void *);
extern void call_8c104d00(Frame *, int);
void operation_8c030d3c(int a0)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    *(int *)0x8c44be30 = 0;
    call_8c03ef04((Frame *)((&frame)), a0, (void *)((g_8c2e8428 + 0x42)));
    t1 = call_8c104d50((Frame *)((&frame)));
    *(int *)0x8c44be44 = t1;
    if (t1 > 0) {
        t2 = current_effect_mode();
        if (t2 == 0xf) {
            if (*(int *)0x8c44be44 > 0x800) {
                *(int *)0x8c44be44 = 0;
                return;
            }
            *(int *)0x8c44be44 = 0x800;
        }
        t3 = call_8c011e9c((void *)(*(S_g8c44be44 **)0x8c44be44));
        *(int *)0x8c44be30 = t3;
        if (t3 != 0) {
            call_8c104d00((Frame *)((&frame)), t3);
        }
    }
}
