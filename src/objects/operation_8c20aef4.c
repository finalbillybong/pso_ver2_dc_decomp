typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
extern int g_8c418248;
extern void operation_8c210b1c(void *);
extern void call_8c210894(void);
extern void operation_8c2107fc(int, short);
void operation_8c20aef4(Object *o)
{
    Object *self = o;
    if (self->f02 != g_8c418248) {
        operation_8c210b1c((void *)(((char *)self + 0x4)));
    }
    call_8c210894();
    operation_8c2107fc((int)(((char *)self + 0x4)), self->f02);
}
