typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e727c S_g8c2e727c;
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct S_g8c4d8500 S_g8c4d8500;
typedef struct S_g8c4d8500_0 S_g8c4d8500_0;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x114];
    Arg0_130 *f130;
};
struct S_g8c4d8500 {
    S_g8c4d8500_0 *f00;
};
struct S_g8c2e72d8 {
    short f00;
};
struct Arg0_130 {
    char unknown0[0xa];
    short f0a;
};
extern void call_8c120188(Object *);
extern void call_8c01c908(Object *, void *, void *, short);
Object *operation_8c11f658(Object *o)
{
    Object **home = &o;
    (void)home;
    call_8c120188(o);
    o->dispatch = (void *)0x8c26a684;
    call_8c01c908(o, (void *)(*(S_g8c2e727c **)0x8c2e727c), (void *)((*(S_g8c4d8500 **)0x8c4d8500)->f00), (*(S_g8c2e72d8 **)0x8c2e72d8)->f00);
    o->f130->f0a |= 0x80;
    return o;
}
