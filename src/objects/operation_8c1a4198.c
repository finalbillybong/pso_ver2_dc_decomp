typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2e727c S_L8c2e727c;
typedef struct S_L8c2e727c_8 S_L8c2e727c_8;
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct S_g8c4dc700 S_g8c4dc700;
typedef struct S_g8c4dc700_0 S_g8c4dc700_0;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x114];
    Arg0_130 *f130;
};
struct S_L8c2e727c {
    char unknown0[0x8];
    S_L8c2e727c_8 *f08;
};
struct S_g8c4dc700 {
    S_g8c4dc700_0 *f00;
};
struct S_g8c2e72d8 {
    short f00;
};
struct Arg0_130 {
    char unknown0[0xa];
    short f0a;
};
extern S_g8c2e72d8 *g_8c2e72d8;
extern S_g8c4dc700 *g_8c4dc700;
extern S_L8c2e727c g_8c2e727c;
extern void call_8c120188(Object *);
extern void call_8c01c908(Object *, void *, void *, short);
Object *operation_8c1a4198(Object *o)
{
    Object **home = &o;
    (void)home;
    call_8c120188(o);
    o->dispatch = (void *)0x8c273aac;
    call_8c01c908(o, (void *)((&g_8c2e727c)->f08), (void *)(g_8c4dc700->f00), g_8c2e72d8->f00);
    o->f130->f0a |= 0x80;
    return o;
}
