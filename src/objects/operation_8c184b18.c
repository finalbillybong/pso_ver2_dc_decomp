typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct EF_48_int {
    char pad[0x48];
    int f;
} EF_48_int;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    unsigned short f3c;
    char unknown3e[0x2];
    float f40;
};
extern void call_8c185134(Object *);
int operation_8c184b18(Object *o, float f0)
{
    float v1;
    v1 = (float)o->f40;
    if (100.0f > v1) {
        o->f40 = v1 - f0;
        if (!(0.0f > o->f40)) {
            goto L_8c184b8c;
        }
        o->f40 = 0.0f;
        return 0;
    }
    o->f40 = v1 - f0;
    if (100.0f > o->f40) {
        call_8c185134(o);
        ((EF_48_int *)((char *)o + (o->f3c << 2)))->f |= -0x80000000;
    } else {
        if (400.0f > o->f40) {
            ((EF_48_int *)((char *)o + (o->f3c << 2)))->f &= -3;
        }
    }
L_8c184b8c:;
    return 1;
}
