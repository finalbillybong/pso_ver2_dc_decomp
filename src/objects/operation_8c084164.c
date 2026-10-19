typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x18];
    int f88;
    int f8c;
    int f90;
    char unknown94[0x2e8];
    int f37c;
};
struct Frame {
    char unknown0[0x30];
    int f30;
    int f34;
    int f38;
};
extern char g_8c2ff8a0[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void operation_8c073e58(Frame *);
void operation_8c084164(Object *o)
{
    Frame frame;
    if (o->f6c > 0.0f) {
        o->f37c = 1;
    } else {
        o->f37c = 0;
    }
    if (o->f37c != 0) {
        call_8c38c5b6(-0xff0001);
        call_8c38cf80(0x13001a, (void *)((g_8c2ff8a0 + 0x10e)));
    } else {
        call_8c38c5b6(-0xff0100);
        call_8c38cf80(0x13001a, (void *)((g_8c2ff8a0 + 0x11d)));
        call_8c38cf80(0x13001e, (void *)((g_8c2ff8a0 + 0x12b)));
        frame.f30 = o->f88;
        frame.f34 = o->f8c;
        frame.f38 = o->f90;
        operation_8c073e58((Frame *)((&frame)));
    }
    call_8c38c5b6(-0xf0f10);
}
