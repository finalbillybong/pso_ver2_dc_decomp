typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3d4 Arg0_3d4;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    float f3a8;
    char unknown3ac[0x18];
    int f3c4;
    char unknown3c8[0xc];
    Arg0_3d4 *f3d4;
};
struct S_vv1 {
    char unknown0[0x24];
    int f24;
    int f28;
};
extern void call_8c01c5f0(Object *);
void operation_8c13cb88(Object *o)
{
    S_vv1 *v1;
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                return;
            }
            return;
        }
        o->f34 |= 0x40000;
        o->ff0 = 0;
        call_8c01c5f0(o);
        o->f3a8 = -40.0f;
        v1 = (S_vv1 *)o->f3d4;
        v1->f24 = 1;
        v1->f28 = 0;
        o->f3c4 = 0;
        o->f3a4 &= -0x80001;
        o->f398 = 1;
        return;
    }
    o->f34 &= -0x40001;
}
