typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Vector3 f20;
    Vector3 f2c;
    char unknown38[0x24];
    float f5c;
    Arg0_60 *f60;
    int f64;
};
extern void call_8c3bdf60(void *, void *);
extern int call_8c011214(void *, void *, int);
extern void call_8c0a7608(void *, void *);
extern int lookup_low_id(int);
extern void call_8c0f01d8(Object *, int);
void operation_8c0f0114(Object *o)
{
    int v41;
    int t1;
    int t2;
    call_8c3bdf60((void *)(&o->f20), (void *)(((char *)o + 0x38)));
    o->f64 += 1;
    if (((o->f64 & 3)) == 0) {
        t1 = call_8c011214((void *)(&o->f2c), (void *)(&o->f20), -1);
        if (t1 != 0) {
            o->f04 |= 1;
            return;
        }
        o->f2c = o->f20;
    }
    if (o->f60 != 0) {
        call_8c0a7608((void *)(o->f60), (void *)(&o->f20));
    }
    o->f5c += 7.0f;
    if (!(150.0f > o->f5c)) {
        o->f04 |= 1;
        return;
    }
    v41 = (int)0;
    while (0xc > v41) {
        t2 = lookup_low_id(v41);
        call_8c0f01d8(o, t2);
        v41 = (int)(v41 + 1);
    }
}
