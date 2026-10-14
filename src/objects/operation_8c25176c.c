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
    char unknown1c4[0x38];
    int f1fc;
    char unknown200[0x20];
    float f220;
    char unknown224[0x4];
    void *f228;
    void *f22c;
    void *f230;
    int f234;
};
extern void operation_8c241158(void *);
Object *operation_8c25176c(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f498;
    o->f234 = 0;
    o->tag = (int)(*(int *)0x8c33f970);
    o->size = 0x250;
    o->f1c0 |= 0x20;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c251bd4;
    o->f230 = (void *)0x8c251c18;
    o->f22c = (void *)0x8c251a60;
    o->f220 = 10.0f;
    o->f234 = 0;
    return o;
}
