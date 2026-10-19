typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void operation_8c05b744(void *);
extern void operation_8c05b77c(void *);
void operation_8c175188(Object *o)
{
    if (((o->fdc->f18 & 6)) != 0) {
        operation_8c05b744((void *)o);
        return;
    }
    operation_8c05b77c((void *)o);
}
