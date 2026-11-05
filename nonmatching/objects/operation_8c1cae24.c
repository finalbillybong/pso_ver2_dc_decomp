/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cae24
 * function: operation_8c1cae24
 * language: c
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 12 of 113 reference instruction lines
 * differing bytes: 12
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x28];
    char f28;
    char unknown29[0xb];
    Arg0_34 *f34;
};
struct Frame {
    Block8 f00;
};
extern char g_8c3290d0[];
extern char g_8c41cba0[];
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void set_global_8c19b290(void);
extern int operation_8c1cab38(Object *);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(void *, void *, int, int);
extern void operation_8c156f50(void *);
extern void operation_8c157138(void *);
void operation_8c1cae24(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t1 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
        if (t1 == 0) {
            return;
        }
    }
    switch (*(char *)0x8c4e2ce0) {
    case 9:
        if (*(int *)0x8c4dbaec == 0) {
            play_se_8c05fbf8(0x50001, 0, 0, 0);
            set_global_8c19b290();
            o->f28 = 3;
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3290b0;
            t2 = operation_8c1cab38(o);
            if (t2 != 0) {
                t3 = operation_8c156c24((int)(&frame), 3);
                o->f34 = (Arg0_34 *)t3;
                add_wrapper_8c156d30((void *)(o->f34), (void *)((g_8c3290d0 + 0xa)), 6, 0);
                add_wrapper_8c156d30((void *)(o->f34), (void *)((g_8c3290d0 + 0xd)), 6, 1);
                add_wrapper_8c156d30((void *)(o->f34), (void *)((g_8c3290d0 + 0x1b)), 6, 2);
            } else {
                t4 = operation_8c156c24((int)(&frame), 2);
                o->f34 = (Arg0_34 *)t4;
                add_wrapper_8c156d30((void *)(o->f34), (void *)((g_8c3290d0 + 0xa)), 6, 0);
                add_wrapper_8c156d30((void *)(o->f34), (void *)((g_8c3290d0 + 0x1b)), 6, 2);
            }
            operation_8c156f50((void *)(o->f34));
            operation_8c157138((void *)(o->f34));
        }
        return;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    }
}
