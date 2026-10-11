typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0x2];
    int f24;
    int f28;
    int f2c;
    char unknown30[0x10];
    int f40;
    float f44;
    float f48;
    float f4c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1c5cb8(Object *o, int a1, int a2, int a3, int a4)
{
    int v1;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276684;
    o->tag = *(int *)0x8c328c98;
    o->size = 0x50;
    o->f20 = a3;
    o->f24 = 0;
    o->f40 = a2;
    o->f28 = a4;
    o->f4c = 0.0f;
    o->f48 = 0.0f;
    o->f44 = 0.0f;
    o->f2c = 0;
    v1 = (int)0;
    while (v1 != 3) {
        *(int *)((char *)((char *)o + 0x30) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->f04 |= 0x10;
    return o;
}
