typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
typedef struct Block_p0_78 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_78;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x30];
    Block_p0_78 f78;
    char unknown84[0xc];
    Arg0_90 *f90;
};
extern char g_8c2ff034[];
extern void show_key_8c112fbc(void *);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c081cc4(Object *o)
{
    show_key_8c112fbc((void *)o);
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f3c;
    o->f78.f04 += 8.0f;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x130020, (void *)((g_8c2ff034 + 0x85)), (void *)(o->f90));
    call_8c38c5b6(-0xf0f10);
    if (!((int)(o->f90) >= 0)) {
        o->f90 = (Arg0_90 *)0;
    }
    if ((int)(o->f90) > 9) {
        o->f90 = (Arg0_90 *)9;
    }
}
