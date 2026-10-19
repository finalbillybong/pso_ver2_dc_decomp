typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x46];
    int f350;
};
extern void operation_8c03be3c(void *);
void operation_8c02b214(Object *o)
{
    int v1;
    operation_8c03be3c((void *)(((char *)o + 0x5b8)));
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        o->f350 &= -0x4000001;
    }
}
