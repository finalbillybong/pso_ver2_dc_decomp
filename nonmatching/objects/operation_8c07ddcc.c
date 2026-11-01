/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07ddcc
 * function: operation_8c07ddcc
 * language: c
 * reference size: 208 bytes
 * compiled size: 204 bytes (-1.9%)
 * differing lines: 8 of 85 reference instruction lines
 * differing bytes: 80
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
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
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xa4];
    short f1e4;
};
struct Frame {
    int f00;
    int f04;
    char unknown8[0x54];
};
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
};
extern int call_8c18e768(int, int);
extern void TTecSifta_create_8c0ba928(void *, void *, void *);
extern void TTecDeband_create_8c0b03c8(void *, void *, void *);
extern void TTecResta_create_8c0b9444(void *, void *, void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void TTecReverser_ctor_8c0abf80(Arg0_13c *, void *, Frame *, int);
void operation_8c07ddcc(Object *o, int a1)
{
    Frame frame;
    int v1;
    int t1;
    t1 = call_8c18e768((int)(o->f1e4), 0x28);
    v1 = (int)o->f13c;
    if (v1 != 0) {
        if (a1 != 0xa) {
            if (a1 != 0xd) {
                if (a1 == 0xf) {
                    goto L_8c07de22;
                }
                if (a1 == 0x11) {
                    goto L_8c07de30;
                }
                return;
            }
            TTecSifta_create_8c0ba928((void *)v1, (void *)(v1 + 0x3c), (void *)t1);
            return;
        }
        TTecDeband_create_8c0b03c8((void *)v1, (void *)(v1 + 0x3c), (void *)t1);
        return;
L_8c07de22:;
        TTecResta_create_8c0b9444((void *)v1, (void *)(v1 + 0x3c), (void *)t1);
        return;
L_8c07de30:;
        call_8c18e044((void *)(&(&frame)->f04), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
        (&frame)->f00 = 1;
        *(short *)&(&frame)->f04 = o->f13c->f20;
        *(short *)((char *)(&frame) + 0x6) = 0;
        TTecReverser_ctor_8c0abf80((Arg0_13c *)(o->f13c), (void *)(((char *)o->f13c + 0x3c)), (Frame *)((&frame)), t1);
    }
}
