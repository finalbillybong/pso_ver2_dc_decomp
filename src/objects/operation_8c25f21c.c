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
extern void operation_8c25f24c(void *);
extern void call_8c25f290(void);
void operation_8c25f21c(Object *o)
{
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        operation_8c25f24c((void *)o);
        return;
    }
    call_8c25f290();
}
