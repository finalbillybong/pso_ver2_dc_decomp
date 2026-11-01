/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c017554
 * function: operation_8c017554
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 6 of 111 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c62c S_g8c41c62c;
typedef struct S_g8c41c7c0 S_g8c41c7c0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_1a4 S_g8c467180_90_1a4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x1a4];
    S_g8c467180_90_1a4 *f1a4;
};
struct S_g8c41c62c {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c2e2fa4;
extern int g_8c41bce4;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c41c62c *g_8c41c62c;
extern int g_8c41c630;
extern S_g8c41c7c0 *g_8c41c7c0;
extern void *g_8c41c8d0;
extern char g_8c41c8d4;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c2e3014[];
extern void request_resource_release(void *);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(void *, void *, int, int);
extern void operation_8c156f50(S_g8c41c62c *);
extern void operation_8c157138(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d5c(void *, float, float);
void operation_8c017554(void)
{
    Frame frame;
    int t1;
    int t2;
    if (g_8c41c614 != 0) {
        request_resource_release(g_8c41c614);
        g_8c41c614 = (S_g8c41c614 *)0;
    }
    if (g_8c41c62c == 0) {
        if (g_8c41c8d4 == 0) {
            g_8c41c8d0 = (g_8c2e3014 + 0x6b);
            g_8c41c8d4 = 1;
        }
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2fa4;
        t1 = operation_8c156c24((int)(&frame), 2);
        g_8c41c62c = (S_g8c41c62c *)(int)(t1);
        operation_8c156d30((void *)t1, (void *)(g_8c467180->f90->f1a4), 2, 0);
        operation_8c156d30(g_8c41c62c, g_8c41c8d0, 2, 1);
        operation_8c156f50(g_8c41c62c);
        operation_8c157138((void *)g_8c41c62c);
        g_8c41c62c->f80 = (g_8c41c62c->f80 & 0xffff) | 0x40;
    }
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
    if (t2 != 0) {
        operation_8c051a98((void *)t2, (int)g_8c41c7c0, 0x10, 0, (unsigned char)0);
    }
    g_8c41c630 = (int)(t2);
    operation_8c051d5c((void *)t2, 109.0f, 164.0f);
    g_8c41bce4 = 9;
}
