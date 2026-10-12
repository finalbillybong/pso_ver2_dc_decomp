typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x50e];
    short f576;
};
extern void call_8c1e9240(Object *, void *, void *);
extern void call_8c1e8e60(Object *, short, int);
void operation_8c1efd70(Object *o)
{
    if (((o->f34 & 0x10000)) == 0) {
        if (o->f576 == 0) {
            call_8c1e9240(o, ((char *)o + 0x3c), o->f64);
            return;
        }
        call_8c1e8e60(o, o->f576, 5);
        o->f576 = 0;
    }
}
