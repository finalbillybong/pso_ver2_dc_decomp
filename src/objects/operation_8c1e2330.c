typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x84];
    int f84;
    char unknown88[0x14];
    int f9c;
};
int operation_8c1e2330(Object *o)
{
    if (o->f84 != 0) {
        return 1;
    }
    return o->f9c != 0;
}
