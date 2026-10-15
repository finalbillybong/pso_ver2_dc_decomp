typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_8c S_g8c467180_8c;
typedef struct S_g8c467180_8c_4 S_g8c467180_8c_4;
struct Frame {
    char unknown0[0x64];
};
struct S_g8c467180 {
    char unknown0[0x8c];
    S_g8c467180_8c *f8c;
};
struct S_g8c467180_8c {
    char unknown0[0x4];
    S_g8c467180_8c_4 *f04;
};
extern char g_8c3088fc[];
extern void call_8c12b048(Frame *, void *, ...);
extern void operation_8c04b230(int, int, float, float);
void operation_8c0eb5c0(void)
{
    Frame frame;
    switch (*(int *)0x8c467188) {
    case 0:
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c3088fc + 0x32)), (void *)((g_8c3088fc + 0x1b)));
        break;
    case 2:
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c3088fc + 0x43)), (void *)((g_8c3088fc + 0x1b)));
        break;
    case 3:
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c3088fc + 0x4f)), (void *)((g_8c3088fc + 0x1b)));
        break;
    case 4:
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c3088fc + 0x61)), (void *)((g_8c3088fc + 0x1b)));
        break;
    default:
        call_8c12b048((Frame *)((&frame)), (void *)((*(S_g8c467180 **)0x8c467180)->f8c->f04), (void *)((g_8c3088fc + 0x1b)));
        break;
    }
    operation_8c04b230((int)(&frame), -0x1000000, 23.0f, 356.0f);
}
