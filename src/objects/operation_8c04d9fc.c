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
    short f30c;
    char unknown30e[0xaa];
    short f3b8;
};
void operation_8c04d9fc(Object *o)
{
    if (o->f30a != 1 && o->f30a != 2) {
        o->ff0 = 1;
        if (o->f3b8 == 2) {
            o->f30a = 1;
        } else {
            o->f30a = 2;
        }
        o->f30c = 0;
        o->f34 &= -0x4040001;
    }
}
