typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_x29168 S_x29168;
struct Frame {
    Vector3 f04;
    Vector3 f10;
    int f1c;
    char unknown20[0x1fc];
};
struct S_x29168 {
    float f00;
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern int g_8c32c0c8;
extern Vector3 g_8c32c0cc;
extern Vector3 g_8c32c0d8;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern void call_8c37e7d4(void *);
extern void call_8c014498(void *, int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c0a1448(S_c8c122700 *, void *);
extern void call_8c0a1a78(int);
extern void operation_8c0a237c(void *, void *);
extern void operation_8c01c250(int);
extern void call_8c013620(void *, int);
extern void create_descriptor_managers(void);
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c1e609c(void *, int);
void operation_8c1e653c(void)
{
    Frame frame;
    unsigned int v1;
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    S_c8c122700 *t3;
    call_8c3806f6(0, 0, 0);
    call_8c01d9dc();
    v1 = (unsigned int)0;
    while ((unsigned int)0x80 > v1) {
        *(float *)((char *)&(&frame)->f1c + (v1 << 2)) = 0.0f;
        v1 = (unsigned int)(v1 + 1);
    }
    call_8c37e7d4((void *)(&(&frame)->f1c));
    call_8c014498((void *)((void *)0x8c2e2e84), 4);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf8);
    if (t1 != 0) {
        call_8c0a1448(t1, g_8c44be88);
    }
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c32c0cc;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&g_8c32c0d8;
    call_8c0a1a78(6);
    operation_8c0a237c((void *)(&(&frame)->f10), (void *)(&(&frame)->f04));
    operation_8c01c250(0);
    call_8c013620((void *)((void *)0x8c32c0a8), 0x20);
    create_descriptor_managers();
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
    if (t2 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t2;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node((void *)t2, g_8c44be88);
        self->f18 = (void *)0x8c277f28;
        self->f00 = (int)(g_8c32c0c8);
        self->f1e = 0x24;
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
        if (t3 != 0) {
            operation_8c1e609c((void *)t3, (int)self);
        }
    }
}
