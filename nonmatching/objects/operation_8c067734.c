/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c067734
 * function: operation_8c067734
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 8 of 100 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c468904 S_g8c468904;
typedef struct Object Object;
typedef struct Arg0_6a4 Arg0_6a4;
typedef struct Arg0_740 Arg0_740;
struct Frame {
    Block20 f00;
};
struct Object {
    char unknown0[0x6a4];
    Arg0_6a4 *f6a4;
    char unknown6a8[0x98];
    Arg0_740 *f740;
};
struct Arg0_740 {
    char unknown0[0xc];
    int f0c;
};
extern Block20 g_8c2fd2f0;
extern S_g8c468904 *g_8c468904;
extern void process_entries_8c0731d8(void *);
extern void operation_8c05b950(void *, int, void *, int);
extern int operation_8c05bbf8(void);
extern void call_8c067d34(Object *, int, Frame *, void *);
extern void call_8c05b478(Object *, int, Frame *, void *);
extern void create_effect(void *, int, int);
void operation_8c067734(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v2;
    int v7;
    int v3;
    int v6;
    int t1;
    *(Block20 *)&(&frame)->f00 = *(Block20 *)&g_8c2fd2f0;
    process_entries_8c0731d8((void *)(o->f6a4));
    if (a1 == 0) {
        v1 = (int)((char *)o + 0x48c);
        v6 = (int)((char *)o + 0x498);
        v7 = (int)v1;
    } else {
        v2 = (int)((char *)o + 0x474);
        v3 = (int)((char *)o + 0x480);
        v6 = (int)v3;
        v7 = (int)v2;
    }
    operation_8c05b950((void *)o, 0, g_8c468904, 0);
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        call_8c067d34(o, v7, (Frame *)((&frame)), (void *)(o->f6a4));
        call_8c067d34(o, v6, (Frame *)((&frame)), (void *)(o->f6a4));
    } else {
        call_8c05b478(o, v7, (Frame *)((&frame)), (void *)(o->f6a4));
        call_8c05b478(o, v6, (Frame *)((&frame)), (void *)(o->f6a4));
    }
    operation_8c05b950((void *)o, 0, g_8c468904, 0);
    create_effect((void *)v6, (int)(o->f740->f0c), 0x40);
}
