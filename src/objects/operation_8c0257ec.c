typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x8];
    short ff4;
};
int operation_8c0257ec(Object *o, int a1)
{
    if (((o->fe8 & 4)) != 0) {
        if ((short)a1 == o->ff4) {
            return 1;
        }
    }
    return 0;
}
