typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_f0 Arg0_f0;
typedef struct Arg0_f4 Arg0_f4;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x5c];
    Arg0_f0 *ff0;
    Arg0_f4 *ff4;
};
extern char g_8c2fffb0[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern int call_8c18e8a0(void *, int);
void operation_8c089b90(Object *o)
{
    int t1;
    o->ff0 = (Arg0_f0 *)o->f88;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001e, (void *)((g_8c2fffb0 + 0x14f)), (void *)(o->ff0));
    call_8c38c5b6(-0xf0f10);
    if (0.0f > o->f6c) {
        o->f6c = 0.0f;
    }
    o->ff4 = (Arg0_f4 *)(int)o->f6c;
    if (!((int)(o->f90) >= 0)) {
        o->f90 = (Arg0_90 *)0;
    }
    t1 = call_8c18e8a0((void *)(o->f90), 2);
    o->f90 = (Arg0_90 *)t1;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c2fffb0 + 0x1a4)), (void *)(o->ff4));
    if (o->f90 == 0) {
        call_8c38c5b6(-0xff0001);
        call_8c38cf80(0x130020, (void *)((g_8c2fffb0 + 0x173)));
    } else {
        call_8c38c5b6(-0x10000);
        call_8c38cf80(0x130020, (void *)((g_8c2fffb0 + 0x183)));
    }
    call_8c38c5b6(-0xf0f10);
}
