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
    char unknown20[0x1dc];
    int f1fc;
    char unknown200[0x28];
    void *f228;
    void *f22c;
    void *f230;
};
extern void call_8c075398(Object *, int, int);
extern void operation_1abd98();
extern void operation_8c1c635c();
extern void operation_8c1c6580();
Object *operation_8c175b54(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c2706a4;
    o->tag = (int)(*(int *)0x8c3192c8);
    o->size = 0x234;
    o->f1fc |= 2;
    o->f230 = operation_8c1c635c;
    o->f228 = operation_8c1c6580;
    o->f22c = operation_1abd98;
    return o;
}
