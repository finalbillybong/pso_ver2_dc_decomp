typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
extern void call_8c1f5406(Frame *, void *);
void operation_8c1e2058(int a0, unsigned int a1)
{
    Frame frame;
    unsigned int v1;
    if (a1 != 0xf1 && a1 != 0xf0) {
        v1 = (unsigned int)1;
        while (a1 > v1) {
            call_8c1f5406((Frame *)((&frame)), (void *)(&(&frame)->f45));
            v1 = (unsigned int)(v1 + 1);
        }
    }
}
