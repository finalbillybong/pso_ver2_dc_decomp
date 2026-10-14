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
    char unknownec[0x220];
    short f30c;
    char unknown30e[0x11a];
    float f428;
};
extern void call_8c1e9240(Object *, void *, void *);
extern int check_range_8c01cf68(void *, float);
extern void call_8c1edad8(Object *);
void operation_8c1ed1c0(Object *o)
{
    int t1;
    if (((o->fe8 & 0x10)) != 0) {
        call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
        return;
    }
    if (o->f30c == 2) {
        t1 = check_range_8c01cf68((void *)o, o->f428);
        if (t1 != 0) {
            o->f30c = 3;
            o->fe8 |= 0x40;
            call_8c1edad8(o);
        }
    }
}
