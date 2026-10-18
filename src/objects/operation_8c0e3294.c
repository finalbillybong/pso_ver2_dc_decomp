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
    char unknown20[0x40];
    float f60;
    char unknown64[0x18];
    int f7c;
    int f80;
};
extern int g_8c307768;
extern S_g8c4e2ba4 *g_8c4e2ba4;
extern void operation_8c0db20c(void *, int, int);
Object *operation_8c0e3294(Object *o, int a1)
{
    int v1;
    operation_8c0db20c((void *)o, (int)((void *)0x8c307824), (int)g_8c4e2ba4);
    o->dispatch = (void *)0x8c2677dc;
    o->tag = (int)(g_8c307768);
    o->size = 0x84;
    o->f7c = a1;
    o->f80 = 0;
    o->f60 = -1.0f;
    v1 = (int)0;
    while (5 > v1) {
        *(int *)((char *)((char *)o + 0x68) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
