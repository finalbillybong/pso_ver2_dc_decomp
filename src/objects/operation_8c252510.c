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
extern void operation_8c241158(void *);
extern void operation_1ac120();
Object *operation_8c252510(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fa68;
    o->tag = (int)(*(int *)0x8c33fa20);
    o->size = 0x23c;
    o->f238 = 0x2000;
    o->f1fc |= 2;
    o->f22c = operation_1ac120;
    o->f220 = 15.0f;
    return o;
}
