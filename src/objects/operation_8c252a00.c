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
extern void operation_8c241158(void *);
extern void operation_1abd98();
extern void operation_8c1c635c();
extern void operation_8c1c6580();
Object *operation_8c252a00(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fc58;
    o->tag = (int)(*(int *)0x8c33fa70);
    o->size = 0x234;
    o->f1fc |= 2;
    o->f230 = operation_8c1c635c;
    o->f228 = operation_8c1c6580;
    o->f22c = operation_1abd98;
    return o;
}
