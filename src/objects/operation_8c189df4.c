typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern int g_8c319e88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern unsigned int g_8c4dbc64;
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c18999c(int, Object *, void *);
extern void call_8c1009e4(int);
extern void operation_8c1c7210(void *, int);
extern void call_8c207854(int, Object *, int);
Object *operation_8c189df4(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2721f0;
    o->tag = (int)(g_8c319e88);
    o->size = 0x20;
    switch (g_8c4dbc64) {
    case 0:
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
        if (t1 != 0) {
            call_8c18999c(t1, o, (void *)((void *)0x8c319e8c));
        }
        call_8c1009e4(0);
        break;
    case 1:
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x30);
        if (t2 != 0) {
            operation_8c1c7210((void *)t2, (int)o);
        }
        call_8c1009e4(3);
        break;
    case 3:
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x44);
        if (t3 != 0) {
            call_8c207854(t3, o, 1);
        }
        call_8c1009e4(1);
        break;
    case 4:
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x44);
        if (t4 != 0) {
            call_8c207854(t4, o, 0);
        }
        call_8c1009e4(2);
    case 2:
        break;
    }
    return o;
}
