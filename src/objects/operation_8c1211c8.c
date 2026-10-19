typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3c4 Arg0_3c4;
typedef struct Arg0_3c8 Arg0_3c8;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x30c];
    float f374;
    float f378;
    float f37c;
    float f380;
    char unknown384[0x1c];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x10];
    int f3bc;
    int f3c0;
    Arg0_3c4 *f3c4;
    Arg0_3c8 *f3c8;
};
extern char g_8c311c38[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1211c8(Object *o)
{
    o->f3a0 = (int)(o->f64);
    o->f3a8 = 0;
    if (!(1000.0f > o->f374)) {
        o->f3a8 = 1;
        o->f3bc = (int)(o->f374 - 1000.0f);
    } else {
        o->f3bc = (int)o->f374;
    }
    if (!(1000.0f > o->f378)) {
        o->f3a8 = 1;
        o->f3c0 = (int)(o->f378 - 1000.0f);
    } else {
        o->f3c0 = (int)o->f378;
    }
    o->f3c4 = (Arg0_3c4 *)(int)o->f380;
    o->f3c8 = (Arg0_3c8 *)(int)o->f37c;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x1a001b, (void *)((g_8c311c38 + 0x11)), o->f374);
    call_8c38cf80(0x1a001c, (void *)((g_8c311c38 + 0x2c)), o->f378);
    call_8c38cf80(0x1a001d, (void *)((g_8c311c38 + 0x47)), o->f3c8);
    call_8c38cf80(0x1a001e, (void *)((g_8c311c38 + 0x5e)), o->f3c4);
    call_8c38c5b6(-0xf0f10);
}
