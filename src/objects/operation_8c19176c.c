typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    int f40;
    int f44;
};
extern void initialize_hierarchy_node(void *, void *);
extern float call_8c087ba0(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c19402c(int);
Object *operation_8c19176c(Object *o, int a1)
{
    Object **home = &o;
    float t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27276c;
    o->f20 = 650.0f;
    o->f24 = 425.0f;
    t1 = call_8c087ba0();
    o->f28 = t1 + 616.0f;
    o->f2c = 425.0f;
    o->f30 = 650.0f;
    o->f34 = 425.0f;
    o->f38 = 650.0f;
    o->f3c = 425.0f;
    o->f40 = 0;
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t2 != 0) {
        call_8c19402c(t2);
    }
    o->f44 = (int)(t2);
    return o;
}
