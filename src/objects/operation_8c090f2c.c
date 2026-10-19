typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
    char unknown3e8[0x40];
    int f428;
};
extern void operation_8c059ea4(void *, int);
int operation_8c090f2c(Object *o)
{
    int v1;
    v1 = (int)o->f3e4;
    if (((v1 & 0x20)) != 0) {
        o->f3e4 = v1 & -0x21;
        operation_8c059ea4((void *)o, 0xa);
        o->f428 = 0;
        return 1;
    }
    if (((v1 & 0x40)) != 0) {
        o->f3e4 = v1 & -0x41;
        operation_8c059ea4((void *)o, 0xb);
        return 1;
    }
    return 0;
}
