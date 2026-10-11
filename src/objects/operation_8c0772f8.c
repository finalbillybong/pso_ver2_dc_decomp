typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a44 S_g8c469a44;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c0772f8(Object *o, int a1, int a2)
{
    int v1;
    char *v2;
    int v3;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26308c;
    o->tag = *(int *)0x8c2fd714;
    o->size = 0x30;
    v1 = (int)0;
    v2 = (char *)*(int *)0x8c469a48;
    while (v1 != 0x10) {
        if (*(int *)((char *)((char *)v2 + 0x0) + (v1 << 2)) == 0) {
            *(int *)((char *)((char *)v2 + 0x0) + (v1 << 2)) = 1;
            v3 = (int)&*(int *)((char *)((char *)*(S_g8c469a44 **)0x8c469a44 + 0x0) + (v1 << 9));
            goto L_8c077342;
        }
        v1 = (int)(v1 + 1);
    }
    v3 = (int)0;
L_8c077342:;
    o->f20 = v3;
    o->f28 = a2;
    o->f24 = 0;
    o->f2c = 0;
    o->f04 |= 0x10;
    return o;
}
