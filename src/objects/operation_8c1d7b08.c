typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x10];
    Arg0_78 *f78;
};
extern void call_8c0db30c(Object *);
extern void operation_8c1d7ef0(void *);
extern void operation_8c1d7fa0(void *);
extern void call_8c199b74(void *);
void operation_8c1d7b08(Object *o)
{
    call_8c0db30c(o);
    operation_8c1d7ef0((void *)o);
    operation_8c1d7fa0((void *)o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f78));
    }
}
