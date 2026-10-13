typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x488];
    int f488;
};
extern void operation_8c059ea4(void *, int);
void operation_8c0954a8(Object *o)
{
    if (o->f488 != 0 && o->f488 != 1) {
        if (o->f488 != 2) {
            return;
        }
    } else {
        o->f488 += 1;
        operation_8c059ea4((void *)o, 6);
        return;
    }
    o->f488 = 0;
    operation_8c059ea4((void *)o, 7);
}
