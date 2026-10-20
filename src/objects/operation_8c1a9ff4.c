typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e1a48 S_g8c4e1a48;
typedef struct S_x33040 S_x33040;
typedef struct S_x39184 S_x39184;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    int f20;
};
struct Frame {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0xc];
    float f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0x8];
};
struct S_x33040 {
    Vector3 f00;
};
struct S_x39184 {
    float f00;
};
extern int g_8c324d80;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e1a40;
extern S_g8c4e1a48 *g_8c4e1a48;
extern char g_8c288e38[];
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern void initialize_resource_record(void *);
extern void operation_8c1a9c84(void *, int, int);
void operation_8c1a9ff4(void)
{
    Frame frame;
    int v5;
    int off;
    S_c8c122700 *t2;
    S_c8c122700 *t1;
    S_c8c122700 *t3;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        initialize_hierarchy_node((void *)t1, (void *)0);
    }
    g_8c4e1a48 = (S_g8c4e1a48 *)t1;
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
    if (t2 != 0) {
        initialize_hierarchy_node((void *)t2, g_8c44be98);
        t2->f18 = (void *)0x8c274674;
        t2->f00 = (int)(g_8c324d80);
        t2->f1e = 0x24;
        t2->f20 = 3;
    }
    g_8c4e1a40 = 4;
    initialize_resource_record((void *)(&frame));
    for (v5 = 0; v5 < 0xc; v5++) {
        off = v5 * 0x14;
        frame.f0c = *(Vector3 *)(g_8c288e38 + off);
        frame.f24 = *(float *)((char *)(g_8c288e38 + 0xc) + off);
        frame.f30 = *(int *)((char *)(g_8c288e38 + 0x10) + off);
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0xa4);
        if (t3 != 0) {
            operation_8c1a9c84((void *)t3, (int)g_8c4e1a48, (int)(&frame));
        }
    }
}
