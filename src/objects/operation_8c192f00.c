typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dc2ec S_g8c4dc2ec;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc2e0;
extern int g_8c4dc2e4;
extern int g_8c4dc2e8;
extern S_g8c4dc2ec *g_8c4dc2ec;
extern int g_8c4dc2f0;
extern void operation_193738(void);
extern void operation_193bf8(void);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c18de4c(int);
void operation_8c192f00(void)
{
    int v63;
    int t1;
    int t2;
    int t3;
    int t4;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    operation_193738();
    operation_193bf8();
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c31a310), 0, 0, 0);
    }
    g_8c4dc2e0 = (int)(t1);
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t2 != 0) {
        initialize_hierarchy_node((void *)t2, (void *)0);
    }
    g_8c4dc2e8 = (int)(t2);
    t3 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t3 != 0) {
        initialize_hierarchy_node((void *)t3, (void *)0);
    }
    g_8c4dc2e4 = (int)(t3);
    t4 = call_8c18de4c(0x30);
    g_8c4dc2ec = (S_g8c4dc2ec *)(int)(t4);
    g_8c4dc2f0 = 0;
    if (t4 != 0) {
        v63 = (int)0;
        while (v63 != 0xc) {
            *(int *)((char *)((char *)g_8c4dc2ec + 0x0) + (v63 << 2)) = 0;
            v63 = (int)(v63 + 1);
        }
    }
}
