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
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
};
extern void initialize_base_8c0db1d0(void *, int);
Object *operation_8c215450(Object *o)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c335fa0));
    o->dispatch = (void *)0x8c278258;
    o->tag = (int)(*(int *)0x8c335fc0);
    o->size = 0x78;
    o->f6c = 6.0f;
    o->f70 = 6.0f;
    o->f74 = 0.0f;
    o->f64 = 0x1000000;
    return o;
}
