typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    int f64;
    char unknown68[0xb4];
    int f11c;
    int f120;
    int f124;
};
struct S_vv5 {
    char unknown0[0x64];
    int f64;
    char unknown68[0xb8];
    int f120;
};
void operation_8c15d634(Object *o)
{
    int v3;
    S_vv5 *v5;
    o->f11c += 0x28f;
    *(int *)((char *)o + 0x124) -= 1;
    v3 = (int)o->f124;
    v5 = (S_vv5 *)o;
    if (!(o->f124 >= 0)) {
        o->f124 = 0;
        o->f120 = 0;
        o->f64 += 0xccc;
        o->f40 += 1.0f;
        return;
    }
    if (30.0f > (float)v3) {
        v5->f120 = 1;
        v5->f64 += 0x147;
        return;
    }
    if (60.0f > (float)v3) {
        v5->f120 = 2;
        v5->f64 += 0x147;
        return;
    }
    if (90.0f > (float)v3) {
        v5->f120 = 3;
        v5->f64 += 0x147;
    }
}
