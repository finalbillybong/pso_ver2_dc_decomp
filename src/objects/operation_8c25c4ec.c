typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern void operation_8c25c51c(void *);
extern void operation_8c25c540(void *);
void operation_8c25c4ec(Object *o)
{
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        operation_8c25c51c((void *)o);
        return;
    }
    operation_8c25c540((void *)o);
}
