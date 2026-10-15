typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c44bec8 S_L8c44bec8;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
};
struct S_L8c44bec8 {
    char unknown0[0x1c];
    unsigned short f1c;
    unsigned short f1e;
};
extern int g_8c417ff8;
extern S_L8c44bec8 g_8c44bec8;
extern char g_8c2e2adc[];
extern void call_8c36cca6(void *, Frame *);
extern void call_8c38cf80(int, void *, ...);
void operation_8c011f00(void)
{
    Frame frame;
    if (g_8c417ff8 != 0) {
        call_8c36cca6((void *)(&(&frame)->f04), (Frame *)((&frame)));
        call_8c38cf80(0x140004, (void *)((void *)g_8c2e2adc), (void *)((&frame)->f04));
        call_8c38cf80(0x140005, (void *)((g_8c2e2adc + 0x16)), (void *)((&frame)->f00));
        call_8c38cf80(0x140006, (void *)((g_8c2e2adc + 0x2b)), (void *)((&g_8c44bec8)->f1c));
        call_8c38cf80(0x140007, (void *)((g_8c2e2adc + 0x3c)), (void *)((&g_8c44bec8)->f1e));
    }
}
