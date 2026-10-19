typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x37a];
    int f3ac;
    char unknown3b0[0x4];
    int f3b4;
    int f3b8;
};
extern int g_8c319288;
extern void operation_8c059bc0(void *);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c174d68(Object *);
Object *operation_8c174cd8(Object *o, int a1, int a2, int a3, int a4, int a5, int a6)
{
    Object **home = &o;
    (void)home;
    operation_8c059bc0((void *)o);
    o->dispatch = (void *)0x8c2702dc;
    o->tag = (int)(g_8c319288);
    o->size = 0x3d8;
    operation_8c05a0b4((void *)o, (void *)a1);
    o->f20 = a2;
    o->f30 = a3;
    o->f3ac = a4;
    o->f3b4 = a5;
    o->f3b8 = a6;
    call_8c174d68(o);
    return o;
}
