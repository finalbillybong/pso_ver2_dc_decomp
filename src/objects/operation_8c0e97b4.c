typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c44be88 *g_8c44be88;
extern int g_8c467188;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c3083a8[];
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c04c2f0(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c08aefc(int, void *, void *, void *);
extern void operation_8c0e991c();
Object *operation_8c0e97b4(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    initialize_hierarchy_node((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c267f5c;
    operation_8c04c2f0();
    switch (g_8c467188) {
    case 0:
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x6c);
        if (t1 == 0) {
            goto L_8c0e98a0;
        }
        call_8c08aefc(t1, g_8c44be84, (void *)((void *)g_8c3083a8), operation_8c0e991c);
        break;
    case 1:
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x6c);
        if (t2 == 0) {
            goto L_8c0e98a0;
        }
        call_8c08aefc(t2, g_8c44be84, (void *)((g_8c3083a8 + 0xf)), operation_8c0e991c);
        break;
    case 2:
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x6c);
        if (t3 == 0) {
            goto L_8c0e98a0;
        }
        call_8c08aefc(t3, g_8c44be84, (void *)((g_8c3083a8 + 0x1f)), operation_8c0e991c);
        break;
    case 3:
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x6c);
        if (t4 == 0) {
            goto L_8c0e98a0;
        }
        call_8c08aefc(t4, g_8c44be84, (void *)((g_8c3083a8 + 0x2f)), operation_8c0e991c);
        break;
    case 4:
        t5 = allocate_block(g_8c4d97e0, (unsigned int)0x6c);
        if (t5 != 0) {
            call_8c08aefc(t5, g_8c44be84, (void *)((g_8c3083a8 + 0x3f)), operation_8c0e991c);
        }
    }
L_8c0e98a0:;
    return o;
}
