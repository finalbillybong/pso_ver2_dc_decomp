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
    char unknown68[0x80];
    int fe8;
    char unknownec[0x6f4];
    int f7e0;
};
extern void call_8c1e8e60(Object *, int, int);
extern void call_8c1e9240(Object *, void *, void *);
void operation_8c1edd34(Object *o)
{
    if (((o->fe8 & 0x10)) != 0) {
        if (((o->f34 & 0x800)) != 0) {
            o->f7e0 = (unsigned int)o->f7e0 >> 1 << 1;
            call_8c1e8e60(o, 0xf, 5);
            return;
        }
        call_8c1e9240(o, ((char *)o + 0x3c), o->f64);
    }
}
