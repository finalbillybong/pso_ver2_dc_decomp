typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x4];
    void *f04;
    char unknown8[0x10];
    int dispatch;
    char unknown1c[0x8];
    float f24;
    short f28;
    short f2a;
    int f2c;
    char unknown30[0x30];
    int f60;
    int f64;
};
struct Arg1 {
    char unknown0[0x24];
    int f24;
    int f28;
};
extern void initialize_record_8c0e14f0(void *, void *);
Object *operation_8c0f725c(Object *o, Arg1 *a1)
{
    initialize_record_8c0e14f0((void *)o, (void *)a1);
    o->f04 = (void *)0x8c268a38;
    o->f28 = (int)o->f24;
    o->f60 = (int)(a1->f24);
    o->f64 = (int)(a1->f28);
    o->f2c = (int)(o->dispatch);
    o->f2a = 0;
    return o;
}
