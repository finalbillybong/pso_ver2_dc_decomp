typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x84];
    short f84;
    char unknown86[0x12];
    short f98;
};
extern void operation_8c1cd89c(void *);
void operation_8c1d0294(Object *o)
{
    short v1;
    v1 = (short)o->f84;
    if (o->f98 != (short)v1) {
        o->f98 = v1;
        operation_8c1cd89c((void *)o);
    }
}
