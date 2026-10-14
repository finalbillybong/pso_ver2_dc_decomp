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
    char unknown20[0x44];
    int f64;
};
extern void operation_1abe00(void *, void *, void *, void *);
Object *operation_8c23cabc(Object *o, int a1, int a2, int a3)
{
    operation_1abe00((void *)o, (void *)a1, (void *)a2, (void *)a3);
    o->dispatch = (void *)0x8c27a67c;
    o->tag = (int)(*(int *)0x8c33a594);
    o->size = 0x68;
    o->f64 = 0;
    return o;
}
