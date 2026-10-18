typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct Arg0_c Arg0_c;
struct Object {
    char unknown0[0xc];
    Arg0_c *f0c;
    char unknown10[0x4];
    Arg0_14 *f14;
    char unknown18[0x8];
    void *f20;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c0305d8(Object *o, int a1)
{
    if (o != 0) {
        o->f20 = (void *)0x8c2614ac;
        call_8c37d534((void *)(o->f0c));
        call_8c011ec0((void *)(o->f14));
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
