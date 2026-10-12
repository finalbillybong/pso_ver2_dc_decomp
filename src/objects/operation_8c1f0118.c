typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d4];
    short f30c;
    char unknown30e[0x22];
    short f330;
};
extern void call_8c02a5a8(short, short, short);
void operation_8c1f0118(Object *o)
{
    if (o->f30c == 0 && ((o->f34 & 0x200)) != 0) {
        call_8c02a5a8(o->f20, o->f20, o->f330);
        o->f34 &= -0x201;
    }
}
