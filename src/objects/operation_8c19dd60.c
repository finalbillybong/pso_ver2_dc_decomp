typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0x6c];
    float f6c;
    float f70;
    char unknown74[0x14];
    int f88;
    char unknown8c[0x58];
    float fe4;
    Arg0_e8 *fe8;
    char unknownec[0x8];
    float ff4;
};
extern char g_8c31ccf8[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c19dd60(Object *o)
{
    o->fe4 = o->f6c;
    o->fe8 = (Arg0_e8 *)o->f88;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c31ccf8 + 0x11)));
    call_8c38cf80(0x13001e, (void *)((g_8c31ccf8 + 0x1f)), o->fe8);
    call_8c38c5b6(-0xf0f10);
    o->ff4 = o->f70;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001b, (void *)((g_8c31ccf8 + 0x7f)));
    call_8c38c5b6(-0xf0f10);
}
