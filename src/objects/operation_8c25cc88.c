typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513420 S_g8c513420;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4];
    int f24;
    int f28;
};
extern char g_8c3404e0[];
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c25ce38(int, Object *, void *);
extern void call_8c225f04(int, Object *);
extern void call_8c1003d0(void *);
Object *operation_8c25cc88(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281c6c;
    o->tag = *(int *)0x8c3404a0;
    o->size = 0x2c;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x38);
    if (t1 != 0) {
        call_8c25ce38(t1, o, (void *)(*(S_g8c513420 **)0x8c513420));
    }
    o->f24 = t1;
    o->f28 = 0;
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1994);
    if (t2 != 0) {
        call_8c225f04(t2, o);
    }
    call_8c1003d0((void *)((g_8c3404e0 + 0x1d)));
    return o;
}
