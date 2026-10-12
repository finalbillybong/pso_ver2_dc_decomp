typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    char unknown28[0x64];
    int f8c;
    int f90;
    int f94;
};
struct Arg0_24 {
    char unknown0[0x10];
    int f10;
};
extern void call_8c08b3cc(Object *, void *);
void operation_8c08b3a0(Object *o)
{
    o->f8c = 0;
    o->f90 = o->f24->f10;
    o->f94 = (int)(((char *)o + 0x28));
    call_8c08b3cc(o, (void *)(o->f20));
}
