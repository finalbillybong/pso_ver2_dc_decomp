typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern void call_8c1e9240(Object *, void *, void *);
void operation_8c1e92e4(Object *o)
{
    call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
}
