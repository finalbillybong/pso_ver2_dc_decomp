/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c222398
 * function: operation_8c222398
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 26 of 152 reference instruction lines
 * differing bytes: 21
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
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_x44912 S_x44912;
struct Frame {
    char a[0xd];
    char b[0xd];
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2284];
    int f22ac;
    char unknown22b0[0x2c];
    int f22dc;
    int f22e0;
};
struct S_x44912 {
    int f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4cc];
    int f4cc;
};
extern S_g8c467180 *g_8c467180;
extern char g_8c3374a4[];
extern void memset_8c12b880(void *, int, int);
extern void sprintf_8c12b048(void *, void *, ...);
extern int call_8c372d38(void *, void *);
extern void call_8c18e720(int, void *);
extern void call_8c220c40(int, int);
extern void operation_8c220be8(int, int);
void operation_8c222398(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int k;
    v1 = (int)0x22dc;
    v2 = (int)0x22e0;
    while (0x5f > *(int *)((char *)o + v1)) {
        memset_8c12b880((void *)frame.b, 0, 0xd);
        memset_8c12b880((void *)frame.a, 0, 0xd);
        sprintf_8c12b048((void *)frame.b, (void *)((g_8c3374a4 + 0xd)), (void *)0x8c2e1950, *(Arg0_0 **)((char *)o + v1));
        t1 = call_8c372d38((void *)(*(Arg0_0 **)((char *)o + v2)), (void *)frame.b);
        switch (t1) {
        case 0:
            k = o->f22ac * 0xb8;
            call_8c18e720(k + (int)o + 0x2c, (void *)frame.b);
            *(int *)((char *)((char *)o + 0xdc) + (o->f22ac * 0xb8)) = (int)(o->f22dc);
            *(int *)((char *)((char *)o + 0xe0) + (o->f22ac * 0xb8)) = (int)(o->f22e0);
            o->f24 = 3;
            return;
        case -1:
        case -0xfb:
        case -0xfd:
        case -0xff:
            break;
        }
        ((S_x44912 *)((int)o + v1))->f00 += 2;
    }
    if (7 > o->f22e0) {
        o->f22e0 += 1;
        o->f22dc = 0;
        return;
    }
    if (o->f22ac != 0) {
        call_8c220c40(0x19, 1);
        o->f24 = 5;
        return;
    }
    operation_8c220be8((int)(g_8c467180->f2c->f4cc), 1);
    o->f24 = 0x12;
}
