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
extern void call_8c185064(Object *);
void operation_8c184a38(Object *o, float f0)
{
    if (100.0f > o->f40) {
        o->f40 += f0;
        if (!(100.0f > o->f40)) {
            o->f40 = 100.0f;
            call_8c185064(o);
            ((EF_48_int *)((char *)o + (o->f3c << 2)))->f |= -0x80000000;
        }
    }
}
