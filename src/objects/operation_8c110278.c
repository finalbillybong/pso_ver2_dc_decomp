typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x34];
    short f60;
    char unknown62[0x22];
    int f84;
    int f88;
};
void operation_8c110278(Object *o, int a1)
{
    if (o->f88 != 0 && (a1 == 4 || a1 == 0x11)) {
        return;
    }
    o->f60 = 0;
    if (a1 != o->f28) {
        o->f28 = a1;
        o->f84 |= 4;
    }
}
