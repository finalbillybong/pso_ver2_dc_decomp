typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc8];
    short fe8;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c309ec8;
extern void call_8c0f3458(Object *, int, Arg2 *, void *, int);
extern void initialize_object_8c0fbf7c(void *);
extern void call_8c0f3a50(Object *);
Object *operation_8c0f39dc(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    call_8c0f3458(o, a1, a2, (void *)((void *)0x8c309e70), 2);
    o->dispatch = (void *)0x8c268820;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x130)));
    o->tag = (int)(g_8c309ec8);
    o->size = 0x154;
    o->fe8 = a2->f20;
    call_8c0f3a50(o);
    return o;
}
