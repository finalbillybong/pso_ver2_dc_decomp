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
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Vector3 f20;
    Vector3 f2c;
    int f38;
    int f3c;
    Block16 f40;
    Vector3 f50;
};
struct Arg1 {
    char unknown0[0x38];
    int f38;
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    Vector3 f6c;
};
struct Arg3 {
    Block16 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c137e08(Object *o, Arg1 *a1, int a2, Arg3 *a3)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26d084;
    o->tag = (int)(*(int *)0x8c312f54);
    o->size = 0x5c;
    o->f20 = a1->f60;
    o->f2c = a1->f3c;
    o->f3c = a2;
    o->f40 = a3->f00;
    o->f38 = (int)(a1->f38);
    o->f50 = a1->f6c;
    return o;
}
