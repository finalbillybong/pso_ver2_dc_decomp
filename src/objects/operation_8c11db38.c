typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x66];
    unsigned short ff2;
};
extern char g_8c3112d4[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c11db38(Object *o)
{
    o->ff2 = o->f88;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c3112d4 + 0xbb)));
    call_8c38cf80(0x13001e, (void *)((g_8c3112d4 + 0xcb)), o->ff2 & 0xffff);
    call_8c38cf80(0x130020, (void *)((g_8c3112d4 + 0xdd)));
    call_8c38c5b6(-0xf0f10);
}
