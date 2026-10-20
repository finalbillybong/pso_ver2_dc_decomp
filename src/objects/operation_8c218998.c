typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
};
extern int g_8c3363a0;
extern int g_8c3363c4;
extern int g_8c505900;
extern int g_8c505904;
extern int g_8c505908;
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c18de4c(int);
extern int call_8c12b944(void);
extern int call_8c011ecc(int);
extern void construct_seeded_random_state(void *, unsigned int);
extern void operation_193470(void *, int, int, unsigned int, int);
extern int call_8c21871c(void *);
Object *operation_8c218998(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int t1;
    int t2;
    unsigned int u3;
    unsigned int u4;
    int t5;
    int t6;
    int t7;
    int t8;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278350;
    o->tag = (int)(g_8c3363c4);
    o->size = 0x28;
    g_8c3363a0 = (char)a2;
    t1 = call_8c18de4c(0x44);
    v1 = (int)0;
    o->f24 = (Arg0_24 *)t1;
    while (v1 != 0x11) {
        u3 = (unsigned int)((float)call_8c12b944() / 32768.0f * 4294967296.0f);
        u4 = (unsigned int)((float)call_8c12b944() / 32768.0f * 65536.0f);
        t2 = call_8c011ecc(0xe8);
        if (t2 != 0) {
            construct_seeded_random_state((void *)t2, u3 | u4);
        }
        *(int *)((char *)((char *)o->f24 + 0x0) + (v1 << 2)) = (int)(t2);
        v1 = (int)(v1 + 1);
    }
    t5 = call_8c011ecc(0x20);
    if (t5 != 0) {
        operation_193470((void *)t5, (int)((void *)0x8c2e17db), 0xb6, (unsigned int)0x28, 0x940);
    }
    g_8c505900 = (int)(t5);
    t6 = call_8c011ecc(0x20);
    if (t6 != 0) {
        operation_193470((void *)t6, (int)((void *)0x8c2e17e6), 0xb7, (unsigned int)0x28, 0x280);
    }
    g_8c505904 = (int)(t6);
    t7 = call_8c011ecc(0x20);
    if (t7 != 0) {
        operation_193470((void *)t7, (int)((void *)0x8c2e17d0), 0xb9, (unsigned int)0x28, 0x940);
    }
    g_8c505908 = (int)(t7);
    t8 = call_8c21871c((void *)((void *)0x8c3363a4));
    o->f20 = (int)(t8);
    return o;
}
