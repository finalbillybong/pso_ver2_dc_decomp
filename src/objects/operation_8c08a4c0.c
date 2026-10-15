typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x18];
    Arg0_88 *f88;
};
extern char g_8c30019c[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c08a4c0(Object *o)
{
    if (0.0f > o->f6c) {
        o->f6c = 0.0f;
    }
    if (!((int)(o->f88) >= 0)) {
        o->f88 = (Arg0_88 *)0;
    }
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c30019c + 0xe)), (int)((int)o->f6c));
    call_8c38cf80(0x13001e, (void *)((g_8c30019c + 0x21)), (int)(o->f88));
    call_8c38c5b6(-0xf0f10);
}
