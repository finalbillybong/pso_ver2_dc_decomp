typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e0];
    int f3e0;
    int f3e4;
    char unknown3e8[0xa0];
    int f488;
};
extern void operation_8c059ea4(void *, int);
void operation_8c090de8(Object *o)
{
    if (((o->f3e4 & 0x100)) != 0) {
        operation_8c059ea4((void *)o, 7);
        return;
    }
    if (o->f3e0 == 0) {
        if (2 > o->f488) {
            operation_8c059ea4((void *)o, 6);
            o->f488 += 1;
            return;
        }
        operation_8c059ea4((void *)o, 7);
        o->f488 = 0;
        return;
    }
    operation_8c059ea4((void *)o, 6);
}
