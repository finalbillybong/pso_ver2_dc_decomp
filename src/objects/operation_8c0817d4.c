typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_g8c469be4 S_g8c469be4;
typedef struct S_g8c469be4_42c S_g8c469be4_42c;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0x18];
    Block24 f60;
};
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    Block24 f18;
};
struct S_g8c469be4 {
    char unknown0[0x42c];
    S_g8c469be4_42c *f42c;
};
struct S_g8c469be4_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c2fef1c;
extern S_g8c469be4 *g_8c469be4;
extern void call_8c01d1ec(Object *);
Object *operation_8c0817d4(Object *o, int a1, Arg2 *a2)
{
    call_8c01d1ec(o);
    o->dispatch = (void *)0x8c2644c4;
    o->tag = (int)(g_8c2fef1c);
    o->size = 0x94;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    *(Vector3 *)&o->f60 = *(Vector3 *)&a2->f18;
    *(Vector3 *)((char *)o + 0x6c) = *(Vector3 *)((char *)a2 + 0x24);
    o->f38 = (int)(g_8c469be4->f42c->f08);
    o->f28 = (int)(g_8c469be4->f42c->f0c);
    return o;
}
