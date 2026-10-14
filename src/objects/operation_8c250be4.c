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
    char unknown200[0x24];
    short f224;
    char unknown226[0xe];
    int f234;
    int f238;
    int f23c;
    int f240;
};
extern void operation_8c241158(void *);
Object *operation_8c250be4(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27eac8;
    o->tag = (int)(*(int *)0x8c33f870);
    o->size = 0x250;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1fc |= 0x23;
    o->f224 = 4;
    o->f234 = 0;
    o->f238 = 0xccc;
    o->f23c = 0;
    o->f240 = 1;
    return o;
}
