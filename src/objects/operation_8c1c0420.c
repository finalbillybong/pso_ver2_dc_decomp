typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x24];
    float f94;
    float f98;
    float f9c;
};
extern void call_8c01d1ec(Object *, void *);
Object *operation_8c1c0420(Object *o)
{
    int v1;
    call_8c01d1ec(o, (void *)(*(S_g8c44be98 **)0x8c44be98));
    o->dispatch = (void *)0x8c27589c;
    o->tag = (int)(*(int *)0x8c328724);
    o->size = 0xb0;
    o->f94 = 500.0f;
    o->f98 = 0.0f;
    o->f9c = o->f6c + 30.0f;
    v1 = (int)0;
    while (2 > v1) {
        *(int *)((char *)((char *)o + 0xa0) + (v1 << 2)) = 0;
        *(int *)((char *)((char *)o + 0xa8) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
