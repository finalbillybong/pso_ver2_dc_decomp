typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x4];
    void *f04;
    Block8 f08;
    int f10;
    int f14;
    int dispatch;
    int f1c;
    int f20;
};
struct Arg1 {
    char unknown0[0x4];
    Block8 f04;
};
extern void initialize_fields_8c0e14ac(void *);
Object *operation_8c1e5cbc(Object *o, Arg1 *a1)
{
    initialize_fields_8c0e14ac((void *)o);
    o->f04 = (void *)0x8c277edc;
    *(Block8 *)&o->f08 = *(Block8 *)&a1->f04;
    o->f10 = -1;
    o->f14 = 0;
    o->dispatch = 0;
    o->f1c = 0;
    o->f20 = 0;
    return o;
}
