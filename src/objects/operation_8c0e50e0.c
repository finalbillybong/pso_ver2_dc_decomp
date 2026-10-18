typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc8];
    float f100;
    char unknown104[0x2ac];
    float f3b0;
    float f3b4;
    float f3b8;
    float f3bc;
    float f3c0;
};
void operation_8c0e50e0(Object *o)
{
    if (((o->f34 & 0x100000)) != 0) {
        o->f3b0 = o->f3b8;
        o->f100 = o->f3c0;
        return;
    }
    o->f3b0 = o->f3b4;
    o->f100 = o->f3bc;
}
