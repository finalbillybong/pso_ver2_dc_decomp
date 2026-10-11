typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d8];
    int f310;
};
int operation_8c0220a4(Object *o)
{
    if (*(int *)0x8c41bd10 != 0) {
        return 0;
    }
    if (((o->f310 & 0x10000)) == 0) {
        return 0;
    }
    o->f34 &= -0x10001;
    return 1;
}
