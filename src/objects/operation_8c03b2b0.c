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
    int tag;
    Block8 f04;
    char unknownc[0x41c];
    int f428;
};
struct Arg1 {
    char unknown0[0x388];
    int f388;
    char unknown38c[0x8e8];
    Block8 fc74;
};
extern void call_8c028264(Arg1 *, void *);
void operation_8c03b2b0(Object *o, Arg1 *a1)
{
    o->f428 |= 1;
    o->tag = (int)(a1->f388);
    *(Block8 *)&o->f04 = *(Block8 *)&a1->fc74;
    call_8c028264(a1, (void *)(((char *)o + 0xc)));
}
