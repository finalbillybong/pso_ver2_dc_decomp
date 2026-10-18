typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x64];
    Arg0_f0 *ff0;
};
extern char g_8c2fffb0[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c089348(Object *o)
{
    o->ff0 = (Arg0_f0 *)o->f88;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001e, (void *)((g_8c2fffb0 + 0x14f)), (void *)(o->ff0));
    call_8c38c5b6(-0xf0f10);
}
