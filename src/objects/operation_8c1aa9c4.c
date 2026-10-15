typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    int f0c;
    char unknown10[0xc];
    int f1c;
};
int operation_8c1aa9c4(Object *o)
{
    if (!(--o->f1c >= 0)) {
        o->f0c |= 1;
        return 1;
    }
    return 0;
}
