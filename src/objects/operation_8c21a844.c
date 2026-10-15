typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2f40 S_g8c4e2f40;
typedef struct S_g8c4e2f40_42c S_g8c4e2f40_42c;
typedef struct Object Object;
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
    char unknown48[0x4c];
    int f94;
    float f98;
};
struct S_g8c4e2f40 {
    char unknown0[0x42c];
    S_g8c4e2f40_42c *f42c;
};
struct S_g8c4e2f40_42c {
    char unknown0[0x58];
    int f58;
    int f5c;
};
extern void call_8c01d1ec(Object *);
Object *operation_8c21a844(Object *o)
{
    call_8c01d1ec(o);
    o->dispatch = (void *)0x8c278590;
    o->tag = (int)(*(int *)0x8c3363f0);
    o->size = 0x9c;
    o->f38 = (int)((*(S_g8c4e2f40 **)0x8c4e2f40)->f42c->f58);
    o->f28 = (int)((*(S_g8c4e2f40 **)0x8c4e2f40)->f42c->f5c);
    *(Vector3 *)&o->f3c = *(Vector3 *)&*(Vector3 *)0x8c3363f4;
    o->f98 = 0.0f;
    o->f94 = 0;
    return o;
}
