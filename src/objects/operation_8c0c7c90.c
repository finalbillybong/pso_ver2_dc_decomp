typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x114];
    int f420;
};
extern void operation_8c059ea4(void *, int);
void operation_8c0c7c90(Object *o)
{
    if (o->f30a != 6) {
        if (o->f30a == 2) {
            operation_8c059ea4((void *)o, 6);
            o->f420 = 3;
            return;
        }
        operation_8c059ea4((void *)o, 6);
    }
}
