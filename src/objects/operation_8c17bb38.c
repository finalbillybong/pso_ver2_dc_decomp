typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x4];
    void *f04;
    float f08;
    Block16 f0c;
    int f1c;
};
struct Arg1 {
    char unknown0[0x4];
    Block16 f04;
    float f14;
    int f18;
};
extern void initialize_fields_8c0e14ac(void *);
typedef struct Pair8 {
    int w[2];
} Pair8;
Object *operation_8c17bb38(Object *o, Arg1 *a1)
{
    initialize_fields_8c0e14ac((void *)o);
    o->f04 = (void *)0x8c271de4;
    *(Pair8 *)&o->f0c = *(Pair8 *)&a1->f04;
    *(Pair8 *)((char *)o + 0x14) = *(Pair8 *)((char *)a1 + 0xc);
    o->f08 = a1->f14;
    o->f1c = (int)(a1->f18);
    return o;
}
