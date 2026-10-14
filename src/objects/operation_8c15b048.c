typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void operation_8c15b190(void *);
extern void operation_8c15b130(void *);
void operation_8c15b048(Object *o)
{
    if (o->f24 != 0) {
        if (o->f24 != 1) {
            if (o->f24 != 2) {
                return;
            }
        } else {
            operation_8c15b190((void *)o);
            return;
        }
        operation_8c15b130((void *)o);
    }
}
