typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0x8];
    float f94;
    Arg0_98 *f98;
};
extern char g_8c328a98[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1c4318(Object *o)
{
    o->f94 = o->f6c;
    if (0.0f > o->f94) {
        o->f94 = 0.0f;
    }
    o->f98 = (Arg0_98 *)o->f88;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c328a98 + 0xd)));
    call_8c38cf80(0x13001e, (void *)((g_8c328a98 + 0x16)), o->f98);
    call_8c38c5b6(-0xf0f10);
}
