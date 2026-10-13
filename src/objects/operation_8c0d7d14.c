typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void operation_8c0d7da8(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c0d7d14(Object *o)
{
    operation_8c0d7da8((void *)o);
    if (o->f30a != 0xd) {
        operation_8c059ea4((void *)o, 0xd);
    }
}
