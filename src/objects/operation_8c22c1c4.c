typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct CBlock12 {
    char bytes[12];
} CBlock12;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_2c Arg0_2c;
struct Frame {
    char f00;
    char unknown1[0xb];
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    int f28;
    Arg0_2c *f2c;
};
extern int operation_8c03ed10(int);
extern void call_8c0787cc(void *, int);
extern void call_8c3877a8(int, void *);
extern void operation_8c03ed70(int);
extern void apply_resource_37d534(void *);
extern void call_8c34d4e8(void *);
void operation_8c22c1c4(Object *o)
{
    Frame frame;
    int t1;
    *(CBlock12 *)&(&frame)->f00 = *(CBlock12 *)&*(char *)0x8c338314;
    t1 = operation_8c03ed10((int)(&frame));
    if (t1 != 0) {
        call_8c0787cc((void *)(o->f20), t1);
        call_8c3877a8(t1, (void *)(((char *)o + 0x30)));
        operation_8c03ed70((int)(&frame));
        o->f24 = 2;
        return;
    }
    if (o->f24 == 2) {
        apply_resource_37d534((void *)(((char *)o + 0x30)));
    }
    if (o->f24 == 1) {
        call_8c34d4e8((void *)(o->f2c));
    }
    o->f24 = 0;
    o->f28 = -1;
}
