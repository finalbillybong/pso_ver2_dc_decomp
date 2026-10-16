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
    char unknowna4[0x1a];
    short fbe;
};
extern char g_8c300638[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c03cd68(Object *, Frame *, void *, int, int, int);
void operation_8c08f130(Object *o)
{
    Frame frame;
    (&frame)->f00 = o->fbe;
    if (o->fa0 == 0xd) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x10022, (void *)((g_8c300638 + 0x245)), o->fbe);
    if (o->fa0 == 0xd) {
        call_8c03cd68(o, (Frame *)((&frame)), (void *)(((char *)o + 0xb8)), 0x11, 0x22, 7);
    }
    o->fbe = (&frame)->f00;
}
