typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x74];
    float f74;
    char unknown78[0x14];
    int f8c;
    Arg0_90 *f90;
};
extern char g_8c312e90[];
extern void call_8c38cf80(int, void *, ...);
void operation_8c136d50(Object *o)
{
    int v21;
    call_8c38cf80(0x13001a, (void *)((g_8c312e90 + 0x58)));
    call_8c38cf80(0x13001e, (void *)((g_8c312e90 + 0x5c)));
    if (o->f8c == 0) {
        call_8c38cf80(0x13001f, (void *)((g_8c312e90 + 0x65)));
    } else {
        call_8c38cf80(0x13001f, (void *)((g_8c312e90 + 0x6f)));
    }
    v21 = (int)(1.0f <= o->f74);
    if (v21 != 0) {
        call_8c38cf80(0x13001c, (void *)((g_8c312e90 + 0x7a)));
    } else {
        call_8c38cf80(0x13001c, (void *)((g_8c312e90 + 0x8c)));
    }
    call_8c38cf80(0x130020, (void *)((g_8c312e90 + 0x9f)), o->f90);
}
