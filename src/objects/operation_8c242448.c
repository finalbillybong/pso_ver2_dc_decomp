typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
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
    int f2c;
    char unknown30[0x10];
    int f40;
    char unknown44[0x8];
    int f4c;
    int f50;
    int f54;
    char unknown58[0xc];
    int f64;
};
extern void initialize_hierarchy_node(void *, void *);
extern int lookup_low_id(int);
extern void call_8c028264(int, void *);
extern void clear_global_render_resources(void);
Object *operation_8c242448(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27ccdc;
    o->tag = *(int *)0x8c33aad4;
    o->size = 0x274;
    o->f2c = 0;
    o->f28 = 0;
    o->f24 = 0;
    o->f20 = 0;
    o->f4c = 0;
    o->f50 = 0;
    o->f54 = 0;
    if (*(int *)0x8c467188 == 0) {
        v1 = (int)(void *)0x8c33aa9c;
    } else {
        v1 = (int)(void *)0x8c33aab8;
    }
    o->f40 = v1;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        call_8c028264(t1, *(S_g8c4db9e0 **)0x8c4db9e0);
    }
    clear_global_render_resources();
    o->f64 = 0;
    return o;
}
