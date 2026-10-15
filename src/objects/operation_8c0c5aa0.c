typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    int f00;
    int f04;
    char unknown8[0x8];
};
extern void call_8c01daf0(void);
extern int call_8c01e180(void);
extern void operation_8c01c1a4(int);
extern void operation_0c638c(void);
extern void call_8c36d3ca(void *);
extern void call_8c36d4c0(void *, Frame *);
extern void select_state2_8c01c1b4(void);
extern void call_8c05f9e4(void);
extern void operation_0c62e0(void);
extern void call_8c380516(void);
void operation_8c0c5aa0(void)
{
    Frame frame;
    int t1;
    call_8c01daf0();
    t1 = call_8c01e180();
    if ((char)t1 != 0) {
        operation_8c01c1a4(0);
    }
    operation_0c638c();
    call_8c36d3ca((void *)(&(&frame)->f04));
    call_8c36d4c0((void *)(&(&frame)->f04), (Frame *)((&frame)));
    if ((int)((&frame)->f00) != *(int *)0x8c46f6c4 && (int)((&frame)->f00) == *(int *)0x8c46f6c8) {
        select_state2_8c01c1b4();
    }
    *(int *)0x8c46f6c4 = (int)((&frame)->f00);
    call_8c05f9e4();
    operation_0c62e0();
    call_8c380516();
}
