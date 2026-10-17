typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x18];
    float f38;
    char unknown3c[0x1c];
    int f58;
    char unknown5c[0x4];
    float f60;
    char unknown64[0x4];
    char f68;
    char f69;
    char unknown6a[0xe];
    char f78;
};
extern void operation_8c0db20c(void *, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c1034cc();
Object *operation_8c103424(Object *o)
{
    Object **home = &o;
    unsigned int v1;
    (void)home;
    operation_8c0db20c((void *)o, (int)((void *)0x8c30b518), (int)(*(S_g8c4e2ba4 **)0x8c4e2ba4));
    o->dispatch = (void *)0x8c269684;
    call_8c18e044((void *)(&o->f68), operation_8c1034cc, 0, 4, 4);
    o->tag = (int)(*(int *)0x8c30b230);
    o->size = 0x7c;
    o->f38 = 456.0f;
    o->f58 = 7;
    o->f60 = -1.0f;
    o->f78 = 0;
    v1 = (unsigned int)0;
    while ((unsigned int)4 > v1) {
        o->f68 = 0;
        o->f69 = 0;
        v1 = (unsigned int)(v1 + 1);
    }
    return o;
}
