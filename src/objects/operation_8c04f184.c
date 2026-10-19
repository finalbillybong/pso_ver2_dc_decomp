typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
};
void operation_8c04f184(Object *o)
{
    if (o->f30a != 6) {
        o->f30a = 6;
        o->ff0 = 0;
    }
    o->f34 &= -0x640001;
}
