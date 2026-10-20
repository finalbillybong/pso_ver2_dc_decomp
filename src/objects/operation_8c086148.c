typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    Vector3 f6c;
};
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
extern int g_8c2ffb10;
extern void call_8c01d1ec(Object *);
extern void operation_8c0869d4(void *);
Object *operation_8c086148(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    o->dispatch = (void *)0x8c264ed4;
    o->tag = (int)(g_8c2ffb10);
    o->size = 0xc0;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    o->f60 = a2->f18;
    o->f6c = a2->f24;
    operation_8c0869d4((void *)o);
    return o;
}
