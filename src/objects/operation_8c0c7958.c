typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0xa];
    Vector3 f3c;
    char unknown48[0x394];
    Arg3 *f3dc;
    short f3e0;
    char unknown3e2[0x2];
    int f3e4;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
};
struct Arg3 {
    Vector3 f00;
};
extern int g_8c3066a0;
extern void call_8c05bcc0(Object *);
extern void initialize_object_8c0fbf7c(void *);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c0c7a10(Object *);
Object *operation_8c0c7958(Object *o, int a1, Arg2 *a2, Arg3 *a3, int a4, unsigned short a5, int a6)
{
    Object **home = &o;
    (void)home;
    call_8c05bcc0(o);
    o->dispatch = (void *)0x8c2668cc;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x3f8)));
    o->tag = (int)(g_8c3066a0);
    o->size = 0x42c;
    operation_8c05a0b4((void *)o, (void *)a2);
    o->f3e0 = a2->f20;
    o->f20 = a5;
    o->f30 = a6;
    o->f3dc = a3;
    o->f3e4 = a4;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a3->f00;
    call_8c0c7a10(o);
    return o;
}
