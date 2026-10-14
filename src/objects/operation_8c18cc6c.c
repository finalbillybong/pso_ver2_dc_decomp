typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x4];
    Arg0_6c *f6c;
};
extern void accumulate_8c199f14(void *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
void operation_8c18cc6c(Object *o)
{
    if (!(7.5f > (float)o->f64)) {
        accumulate_8c199f14((void *)(o->f6c));
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
}
