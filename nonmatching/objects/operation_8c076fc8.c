/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c076fc8
 * function: operation_8c076fc8
 * language: c
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 12 of 86 reference instruction lines
 * differing bytes: 11
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
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_1d8 Arg0_1d8;
typedef struct Arg0_1dc Arg0_1dc;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x98];
    Arg0_1d8 *f1d8;
    Arg0_1dc *f1dc;
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
};
struct S_vv1 {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x224];
    int f310;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    int f18;
    char unknown1c[0x8];
    int f24;
    char unknown28[0x8];
};
extern void operation_8c075894(void *, void *, int, int);
extern void call_8c077524(void *, void *, void *);
void operation_8c076fc8(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    char c;
    v1 = (S_vv1 *)o->f13c;
    v2 = (int)(((v1->f310 & 0xe0)) != 0);
    if (v2 != 0 && ((v1->fe8 & 4)) == 0) {
        if (a1 != 0) {
            if (o->f1d8 == 0) {
                return;
            }
            c = o->f1e0;
            operation_8c075894((void *)o, (void *)v1, c, (int)(&(&frame)->f24));
            c = o->f1e1;
            operation_8c075894((void *)o, (void *)(o->f13c), c, (int)(&(&frame)->f18));
            call_8c077524((void *)(o->f1d8), (void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
            return;
        }
        if (o->f1dc != 0) {
            c = o->f1e2;
            operation_8c075894((void *)o, (void *)v1, c, (int)(&(&frame)->f0c));
            c = o->f1e3;
            operation_8c075894((void *)o, (void *)(o->f13c), c, (int)(&frame));
            call_8c077524((void *)(o->f1dc), (void *)(&(&frame)->f0c), (void *)(&frame));
        }
    }
}
