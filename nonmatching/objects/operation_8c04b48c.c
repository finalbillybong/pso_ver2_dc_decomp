/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04b48c
 * function: operation_8c04b48c
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 20 of 114 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_g8c467130 S_g8c467130;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv5 S_vv5;
struct Frame {
    S_frame_0 *f00;
};
struct S_vv1 {
    unsigned short f00;
    char unknown2[0x7fe];
    unsigned short f800;
};
struct S_vv2 {
    unsigned short f00;
};
struct S_vv5 {
    unsigned short f00;
};
extern S_g8c467130 *g_8c467130;
extern int operation_8c04b588(int, void *, void *);
extern void call_8c04b5c8(int, void *);
void *operation_8c04b48c(int a0)
{
    Frame frame;
    S_vv1 *v1;
    unsigned int v3;
    S_vv2 *v2;
    unsigned int v4;
    S_vv5 *v5;
    int t1;
    int t2;
    int t3;
    int t4;
    unsigned int n;
    (&frame)->f00 = (S_frame_0 *)0;
    v1 = (S_vv1 *)&*(int *)((char *)((char *)g_8c467130 + 0x0) + (((unsigned short)a0 & 0xff) << 3));
    if (v1->f00 == (unsigned short)a0) {
        return v1;
    }
    if ((v1->f800 & 0xffff) == (unsigned short)a0) {
        return (void *)((int)v1 + 0x800);
    }
    t1 = operation_8c04b588(a0, (void *)v1, (void *)(&frame));
    if (t1 != 0) {
        return v1;
    }
    t2 = operation_8c04b588(a0, (void *)((int)v1 + 0x800), (void *)(&frame));
    if (t2 != 0) {
        return (void *)((int)v1 + 0x800);
    }
    v2 = (S_vv2 *)((int)g_8c467130 + 0x1000);
    v3 = (unsigned int)0;
    while ((unsigned int)0x71 > v3) {
        if (v2->f00 == (unsigned short)a0) {
            return v2;
        }
        t3 = operation_8c04b588(a0, (void *)v2, (void *)(&frame));
        if (t3 != 0) {
            return v2;
        }
        v2 = (S_vv2 *)((char *)v2 + 8);
        v3 = (unsigned int)(v3 + 1);
    }
    v4 = (unsigned int)0;
    n = 0x200;
    v5 = (S_vv5 *)g_8c467130;
    while (n > v4) {
        if (v5->f00 == (unsigned short)a0) {
            return v5;
        }
        t4 = operation_8c04b588(a0, (void *)v5, (void *)(&frame));
        if (t4 != 0) {
            return v5;
        }
        v4 = (unsigned int)(v4 + 1);
        v5 = (S_vv5 *)((char *)v5 + 8);
    }
    call_8c04b5c8(a0, (void *)((&frame)->f00));
    return (void *)((&frame)->f00);
}
