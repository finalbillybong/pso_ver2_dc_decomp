typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x30c];
    float f374;
    float f378;
    float f37c;
    float f380;
    int f384;
    char unknown388[0x18];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x8];
    float f3b4;
    char unknown3b8[0x4];
    int f3bc;
    int f3c0;
    int f3c4;
    int f3c8;
};
void operation_8c120f08(Object *o, int a1, int a2)
{
    if (a1 >= o->f384) {
        o->f384 = a1;
    } else {
        if (o->f384 >= a2) {
            o->f384 = a2;
        }
    }
    if (!(1000.0f > o->f374)) {
        o->f3a8 = 1;
        o->f3bc = (int)(o->f374 - 1000.0f);
    } else {
        o->f3bc = (int)o->f374;
    }
    if (!(1000.0f > o->f378)) {
        o->f3a8 = 1;
        o->f3c0 = (int)(o->f378 - 1000.0f);
    } else {
        o->f3c0 = (int)o->f378;
    }
    o->f3c4 = (int)o->f380;
    o->f3c8 = (int)o->f37c;
    o->f3a0 = (int)(o->f64);
    if (o->f3c8 > 0) {
        o->f3b4 = 400.0f;
        return;
    }
    o->f3b4 = 250.0f;
}
