typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv6 S_vv6;
typedef struct S_x16992 S_x16992;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
};
typedef struct Trailer {
    char *f00;
    unsigned int f04;
    char unknown8[0x8];
    int f10;
} Trailer;
struct S_vv6 {
    unsigned short f00;
};
extern int g_8c4d5b10;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int call_8c1a86d0(void);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, int, int);
extern int operation_8c1a85a8(int);
static inline void relocate(S_c8c122700 *f)
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
int operation_8c104e9c(int a0)
{
    S_c8c122700 *t2;
    int t1;
    int t3;
    t1 = call_8c1a86d0();
    if (t1 > 0) {
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
        if (t2 != 0) {
            TObject_ctor_8c0330e4((void *)t2, (void *)((void *)0x8c4d5ad0));
            t2->f18 = (void *)0x8c26586c;
        }
        memset_8c12b880((void *)(((char *)t2 + 0x2c)), 0, 0x11);
        strncpy_8c12b154((void *)(((char *)t2 + 0x2c)), a0, 0x10);
        t2->f00 = (int)(((char *)t2 + 0x2c));
        g_8c4d5b10 = a0;
        t3 = operation_8c1a85a8(a0);
        t2->f20 = (int)(t3);
        t2->f24 = (int)(t1);
        relocate(t2);
        return (int)(t2->f28);
    }
    return 0;
}
