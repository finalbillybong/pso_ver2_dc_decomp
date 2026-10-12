typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xcc];
    int fec;
    char unknownf0[0x46];
    unsigned char f136;
    char unknown137[0x9];
    char f140;
    char f141;
    char unknown142[0x2];
    int f144;
};
struct S_c8c1c7658 {
    char unknown0[0x4];
    short f04;
};
struct Arg2 {
    char unknown0[0x4];
    char f04;
};
extern void call_8c073288(int);
extern S_c8c1c7658 *call_8c1c7658(int);
extern int operation_8c1c74dc(void *);
Object *operation_8c0e71c8(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    S_c8c1c7658 *t1;
    int t2;
    (void)home;
    call_8c073288((int)o);
    o->dispatch = (void *)0x8c267d80;
    o->tag = *(int *)0x8c307fe0;
    o->size = 0x148;
    o->fec |= 0x10;
    t1 = call_8c1c7658((int)a2);
    if (t1 != 0) {
        o->f140 = t1->f04;
    }
    if (o->f136 == 2) {
        o->f141 = a2->f04;
    } else {
        o->f141 = 0;
    }
    t2 = operation_8c1c74dc((void *)a2);
    o->f144 = (int)(&o->f144) ^ t2;
    return o;
}
