typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a8484 S_c8c1a8484;
typedef struct Frame Frame;
typedef struct S_vv5 S_vv5;
typedef struct S_x25968 S_x25968;
struct Frame {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    char unknown2c[0x14];
};
typedef struct Trailer {
    char *f00;
    unsigned int f04;
    char unknown8[0x8];
    int f10;
} Trailer;
struct S_vv5 {
    unsigned short f00;
};
extern int g_8c4d5b10;
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c1a8484(int, int);
extern void destroy_hierarchy_node(void *, short);
static inline void relocate(Frame *f)
{
    int *q;
    unsigned short *offs;
    unsigned int n;
    unsigned int i;
    Trailer *tail;
    q = (int *)f->f20;
    tail = (Trailer *)((char *)q + f->f24 - 0x20);
    offs = (unsigned short *)(tail->f00 + (int)q);
    n = tail->f04;
    for (i = 0; i < n; i++) {
        q = (int *)((char *)q + (*offs++ << 2));
        *q += f->f20;
    }
    f->f28 = tail->f10 + f->f20;
}
int operation_8c105380(int a0, int a1)
{
    Frame frame;
    int t1;
    int r;
    initialize_hierarchy_node((void *)(&frame), (void *)0);
    (&frame)->f18 = (void *)0x8c26586c;
    g_8c4d5b10 = a0;
    t1 = operation_8c1a8484(a0, a1);
    if (t1 > 0) {
        frame.f20 = a1;
        frame.f24 = t1;
        relocate(&frame);
        r = frame.f28;
        (&frame)->f18 = (void *)0x8c26586c;
        destroy_hierarchy_node((void *)(&frame), (short)0);
        return r;
    }
    (&frame)->f18 = (void *)0x8c26586c;
    destroy_hierarchy_node((void *)(&frame), (short)0);
    return 0;
}
