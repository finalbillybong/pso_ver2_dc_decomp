/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20937c
 * function: TWindowGetComCard_ctor_8c20937c
 * language: c
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 6 of 111 reference instruction lines
 * differing bytes: 7
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TWindowGetComCard.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x258];
    int f258;
    int f25c;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c335e08;
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern S_g8c46fe20 *g_8c46fe20;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c1196d4(void *, void *, int);
extern int find_free_slot_8c1dc970(void);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c119764(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c026450(void);
Object *TWindowGetComCard_ctor_8c20937c(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278138;
    o->tag = (int)(g_8c335e08);
    v1 = (int)(void *)0x8c4e2fa4;
    o->size = 0x30;
    t1 = call_8c1196d4((void *)((void *)0x8c2e14f8), (void *)((void *)0x8c2e1500), 1);
    o->f20 = (int)(t1);
    o->f24 = 0;
    t2 = find_free_slot_8c1dc970();
    if (t2 != 0) {
        reset_text_cursor_8c18ea38();
        operation_8c18ea4c((int)(v1 + 8));
        operation_8c18ea4c((int)(g_8c467180->f2c->f258));
        operation_8c119764((int)(o->f20), (int)((void *)0x8c4dbe40), 2);
        o->f2c = 0;
        v1 = (int)(v1 + 8);
    } else {
        operation_8c119764((int)(o->f20), (int)(g_8c467180->f2c->f25c), 0);
        o->f2c = 0x12c;
    }
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0) {
        operation_8c026450();
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 2;
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 4;
    }
    o->f28 = 0;
    return o;
}
