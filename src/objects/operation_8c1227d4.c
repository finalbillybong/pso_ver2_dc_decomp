typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    char unknownc[0xc];
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
};
extern char g_8c311d20[];
extern void call_8c05f87c(void *);
extern void operation_8c122b00(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void call_8c013620(void *, int);
extern int operation_8c05bbf8(void);
extern void call_8c0142d8(Frame *);
extern void operation_8c122ba0(void);
extern void call_8c0788a4(void);
extern void call_8c1003d0(void *);
void operation_8c1227d4(void)
{
    Frame frame;
    int t1;
    call_8c05f87c((void *)((void *)g_8c311d20));
    operation_8c122b00();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    call_8c013620((void *)((void *)0x8c311d18), 8);
    t1 = operation_8c05bbf8();
    if (t1 == 0) {
        (&frame)->f00 = -1.45f;
        (&frame)->f04 = 2.8f;
        (&frame)->f08 = -0.4f;
        (&frame)->f18 = 1.0f;
        (&frame)->f1c = 0.96f;
        (&frame)->f20 = 0.3f;
        (&frame)->f34 = 1.0f;
        (&frame)->f38 = 0.1f;
        (&frame)->f3c = 0.24f;
        (&frame)->f40 = 0.4f;
        (&frame)->f24 = 1.0f;
        (&frame)->f28 = 1.0f;
        (&frame)->f2c = 0.51f;
        (&frame)->f30 = 0.4f;
    } else {
        (&frame)->f00 = -1.45f;
        (&frame)->f04 = 2.8f;
        (&frame)->f08 = -0.4f;
        (&frame)->f18 = 1.0f;
        (&frame)->f1c = 0.96f;
        (&frame)->f20 = 0.75f;
        (&frame)->f34 = 1.0f;
        (&frame)->f38 = 0.1f;
        (&frame)->f3c = 0.24f;
        (&frame)->f40 = 0.4f;
        (&frame)->f24 = 1.0f;
        (&frame)->f28 = 0.85f;
        (&frame)->f2c = 1.0f;
        (&frame)->f30 = 1.0f;
    }
    call_8c0142d8((Frame *)((&frame)));
    operation_8c122ba0();
    call_8c0788a4();
    call_8c1003d0((void *)((g_8c311d20 + 0xe)));
}
