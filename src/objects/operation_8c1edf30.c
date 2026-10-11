typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
int operation_8c1edf30(Object *o)
{
    if (((o->f34 & 0x100)) != 0) {
        if (((o->f34 & 0x4000000)) == 0) {
            return 1;
        }
    }
    return 0;
}
