typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block76 {
    int words[19];
} Block76;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Object Object;
struct Frame {
    Block76 f00;
};
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
};
extern Block76 g_8c304da0;
extern char g_8c304fbc[];
extern void call_8c38cf80(int, void *, ...);
void operation_8c0ae8a0(Object *o)
{
    Frame frame;
    *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c304da0;
    if (o->f24 != 0) {
        call_8c38cf80(0x1e0008, (void *)(*(S_frame_0 **)((char *)&(&frame)->f00 + (o->f28 << 2))));
        call_8c38cf80(0x1e000a, (void *)((g_8c304fbc + 0x165)));
        call_8c38cf80(0x1e000b, (void *)((g_8c304fbc + 0x16f)));
        call_8c38cf80(0x1e000c, (void *)((g_8c304fbc + 0x179)));
        call_8c38cf80(0x1e000d, (void *)((g_8c304fbc + 0x183)));
        call_8c38cf80(0x1e000e, (void *)((g_8c304fbc + 0x18d)));
    }
}
