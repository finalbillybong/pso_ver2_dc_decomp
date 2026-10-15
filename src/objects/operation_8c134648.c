typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0xc];
    float f54;
    float f58;
    float f5c;
    char unknown60[0x4];
    float f64;
    float f68;
    float f6c;
    char unknown70[0x4];
    float f74;
    float f78;
    float f7c;
    int f80;
};
extern char g_8c312a8c[];
extern void call_8c38c5aa(int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c134648(Object *o)
{
    call_8c38c5aa(0xe);
    call_8c38c5b6(-0xf0f10);
    call_8c38cf80(0x40008, (void *)((g_8c312a8c + 0x1a)));
    if (o->f80 != 0) {
        call_8c38c5b6(-0x7f7f80);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x4000a, (void *)((g_8c312a8c + 0x27)), o->f64);
    call_8c38cf80(0x4000b, (void *)((g_8c312a8c + 0x3b)), o->f68);
    call_8c38cf80(0x4000c, (void *)((g_8c312a8c + 0x4f)), o->f6c);
    if (o->f80 != 1) {
        call_8c38c5b6(-0x7f7f80);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x4000f, (void *)((g_8c312a8c + 0x63)), o->f3c);
    call_8c38cf80(0x40010, (void *)((g_8c312a8c + 0x72)), o->f40);
    call_8c38cf80(0x40011, (void *)((g_8c312a8c + 0x81)), o->f44);
    if (o->f80 != 2) {
        call_8c38c5b6(-0x7f7f80);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x40014, (void *)((g_8c312a8c + 0x90)), o->f74);
    call_8c38cf80(0x40015, (void *)((g_8c312a8c + 0xa6)), o->f78);
    call_8c38cf80(0x40016, (void *)((g_8c312a8c + 0xbc)), o->f7c);
    if (o->f80 != 3) {
        call_8c38c5b6(-0x7f7f80);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x40019, (void *)((g_8c312a8c + 0xd2)), o->f54);
    call_8c38cf80(0x4001a, (void *)((g_8c312a8c + 0xe9)), o->f58);
    call_8c38cf80(0x4001b, (void *)((g_8c312a8c + 0x100)), o->f5c);
    call_8c38c5aa(0xc);
    call_8c38c5b6(-0xf0f10);
}
