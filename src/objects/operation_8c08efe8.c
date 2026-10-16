typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    int f00;
};
struct Object {
    char unknown0[0xa0];
    int fa0;
    char unknowna4[0x56];
    short ffa;
};
extern char g_8c300638[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c03cd68(Object *, Frame *, void *, int, int, int);
void operation_8c08efe8(Object *o)
{
    Frame frame;
    (&frame)->f00 = o->ffa;
    if (o->fa0 == 0xb) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x10020, (void *)((g_8c300638 + 0x229)), o->ffa);
    if (o->fa0 == 0xb) {
        call_8c03cd68(o, (Frame *)((&frame)), (void *)(((char *)o + 0xb0)), 0x11, 0x20, 7);
    }
    o->ffa = (&frame)->f00;
}
