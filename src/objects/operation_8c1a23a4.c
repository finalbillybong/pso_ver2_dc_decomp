typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc6a0 S_g8c4dc6a0;
typedef struct S_g8c4dc6a0_430 S_g8c4dc6a0_430;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc8];
    int fe8;
    char unknownec[0x8];
    float ff4;
    float ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
};
struct S_g8c4dc6a0 {
    char unknown0[0x430];
    S_g8c4dc6a0_430 *f430;
};
struct S_g8c4dc6a0_430 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c31da1c;
extern S_g8c4dc6a0 *g_8c4dc6a0;
extern void call_8c088f14(Object *, int, int);
Object *operation_8c1a23a4(Object *o, int a1, int a2)
{
    call_8c088f14(o, a1, a2);
    o->dispatch = (void *)0x8c2736f8;
    o->tag = (int)(g_8c31da1c);
    o->size = 0x10c;
    o->ff8 = 0.0f;
    o->ff4 = 0.0f;
    o->fe8 = 0;
    o->ffc = 0;
    o->f100 = 0;
    o->f104 = (int)(g_8c4dc6a0->f430->f04);
    o->f108 = 0;
    return o;
}
