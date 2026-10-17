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
    char unknown20[0x1a0];
    int f1c0;
    char unknown1c4[0x1c];
    char f1e0;
    char f1e1;
    char unknown1e2[0x1a];
    int f1fc;
    char unknown200[0x18];
    int f218;
    char unknown21c[0x24];
    int f240;
};
extern void call_8c075398(Object *, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
Object *operation_8c240854(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c688;
    call_8c18e044((void *)(((char *)o + 0x244)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
    o->f240 = 0;
    o->tag = (int)(*(int *)0x8c33a950);
    o->size = 0x29c;
    o->f1c0 |= 0x20;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1fc |= 0x22;
    o->f218 = 5;
    return o;
}
