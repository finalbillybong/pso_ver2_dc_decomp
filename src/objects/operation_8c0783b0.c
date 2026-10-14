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
    char unknown200[0x20];
    float f220;
    char unknown224[0x8];
    void *f22c;
    char unknown230[0x8];
    int f238;
};
extern void call_8c075398(Object *, int, int);
extern void operation_1ac120();
Object *operation_8c0783b0(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c263b24;
    o->tag = (int)(*(int *)0x8c2fd820);
    o->size = 0x23c;
    o->f238 = 0x2000;
    o->f1fc |= 2;
    o->f22c = operation_1ac120;
    o->f220 = 15.0f;
    return o;
}
