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
    int f20;
    float f24;
    int f28;
};
extern int g_8c3288e8;
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1c0dc0(Object *o, int a1)
{
    char *pm2;
    int *v4;
    int v1;
    int v2;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27591c;
    o->tag = (int)(g_8c3288e8);
    o->size = 0x7c;
    o->f20 = 0;
    o->f24 = 0.0f;
    o->f28 = 0x14;
    for (v1 = 0; v1 < 5; v1++) {
        v4 = (int *)((char *)o + (v1 << 4) + 0x2c);
        v4[0] = 0;
        v2 = 0;
        v4[1] = 0;
        v4 += 2;
        while (v2 < 2) {
            pm2 = (char *)v4;
            a1 = v2 << 2;
            *(int *)(pm2 + (a1)) = 0;
            v2++;
        }
    }
    return o;
}
