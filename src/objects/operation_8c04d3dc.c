typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0xba];
    int f3c8;
};
void operation_8c04d3dc(Object *o)
{
    int v3;
    if (o->f30a != 0) {
        v3 = (int)0x30a;
    } else {
        if (o->f30c == 0) {
            return;
        }
        if (o->f30c == 1) {
            return;
        }
        if (o->f30c != 2) {
            o->f30c = 2;
        }
        if (o->f3c8 == 0) {
            return;
        }
        o->f30c = 0;
        return;
    }
    *(short *)((char *)((char *)o + 0x0) + (v3)) = 0;
    if (o->f3c8 != 0) {
        o->f30c = 0;
    } else {
        o->f30c = 2;
    }
    o->ff0 = 1;
}
