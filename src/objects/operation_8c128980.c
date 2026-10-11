typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x36c];
    int f3a4;
};
int operation_8c128980(Object *o)
{
    if (((o->f34 & 0xa00)) != 0) {
        return 0;
    }
    return ((o->f3a4 & 0x10000000)) == 0;
}
