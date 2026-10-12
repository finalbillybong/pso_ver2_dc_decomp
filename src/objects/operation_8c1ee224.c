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
    char unknown68[0x80];
    int fe8;
};
extern void call_8c1e9240(Object *, void *, void *);
void operation_8c1ee224(Object *o)
{
    if (((o->fe8 & 0x10)) != 0) {
        call_8c1e9240(o, ((char *)o + 0x3c), o->f64);
    }
}
