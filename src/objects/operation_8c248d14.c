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
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
    char unknown1e2[0x1a];
    int f1fc;
    char unknown200[0x20];
    float f220;
    short f224;
    char unknown226[0x6];
    void *f22c;
};
extern void call_8c075398(Object *, int, int);
extern void operation_239998_8c248e3c();
Object *operation_8c248d14(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27d074;
    o->tag = (int)(*(int *)0x8c33b120);
    o->size = 0x240;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1fc |= 0x22;
    o->f224 = 1;
    o->f22c = operation_239998_8c248e3c;
    o->f220 = 10.0f;
    return o;
}
