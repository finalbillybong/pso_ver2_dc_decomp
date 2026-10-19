typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2b8];
    int f2f0;
    char unknown2f4[0x4];
    int f2f8;
};
void operation_8c047438(Object *o, float f0)
{
    o->f2f0 = 0x14;
    o->f2f8 = (int)f0;
    o->f34 |= 0x4000;
}
