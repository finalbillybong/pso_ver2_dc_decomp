typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506304 S_g8c506304;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x4];
    int f3c;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c38668e(void *, void *, void *, int);
extern int call_8c18de4c(int);
Object *operation_8c22bef8(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278e30;
    o->tag = *(int *)0x8c338310;
    o->size = 0x44;
    call_8c38668e(((char *)o + 0x30), ((char *)o + 0x38), *(S_g8c506304 **)0x8c506304, 1);
    o->f3c = 0;
    o->f34 = 1;
    o->f28 = -1;
    o->f24 = 0;
    t1 = call_8c18de4c(0x4800);
    o->f20 = t1;
    return o;
}
