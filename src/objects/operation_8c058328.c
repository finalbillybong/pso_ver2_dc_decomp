typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x374];
    float f374;
    float f378;
    char unknown37c[0x2c];
    int f3a8;
    int f3ac;
    int f3b0;
};
void operation_8c058328(Object *o)
{
    int v9;
    o->f3a8 = 2;
    o->f3ac = (int)o->f374;
    if (!(o->f3ac >= 0)) {
        o->f3ac = 0;
    } else {
        if (o->f3ac > 6) {
            o->f3ac = 6;
        }
    }
    o->f3b0 = (int)o->f378;
    v9 = (int)o->f3b0;
    if (!(v9 >= 0)) {
        o->f3b0 = 0;
        return;
    }
    if (v9 > 0x1e) {
        o->f3b0 = 0x1e;
    }
}
