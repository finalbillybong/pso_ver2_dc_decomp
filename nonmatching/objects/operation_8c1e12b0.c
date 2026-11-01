/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e12b0
 * function: operation_8c1e12b0
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 30 of 116 reference instruction lines
 * differing bytes: 151
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
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    char unknown14[0x4];
    float f18;
    char unknown1c[0x18];
    float f34;
};
struct S_vv3 {
    unsigned short f00;
};
struct Frame {
    float f00;
    float f04;
    char unknown8[0x18];
};
struct Arg2 {
    float f00;
    float f04;
};
extern int operation_8c04b794(short);
extern int call_8c04b428(int, Frame *, int);
extern void operation_8c04b9dc(int, void *);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
void operation_8c1e12b0(int a0, Arg1 *a1, Arg2 *a2, S_vv3 *a3, register int a4)
{
    Frame frame;
    short v5;
    int t2;
    int v4;
    float v6;
    float v2;
    int t1;
    int v1;
    v4 = a4;
    v1 = -1;
    v2 = -1.0f / (a1->f34 + 0.0897f);
    while (a3->f00 != 0 && v4-- != 0) {
        v5 = (short)a3->f00;
        a3 = (S_vv3 *)((char *)a3 + 2);
        t1 = operation_8c04b794(v5);
        t2 = call_8c04b428(t1, (Frame *)((&frame)), v1);
        if ((a2->f00 + (float)(unsigned char)t2) > ((v6 = (float)a1->f10) + a1->f18)) {
            a2->f00 = v6;
            a2->f04 += 20.0f;
        }
        if ((unsigned short)v5 == 0x20) {
            a2->f00 += (float)(unsigned char)t2;
        } else {
            (&frame)->f00 = a2->f00;
            (&frame)->f04 = a2->f04;
            operation_8c04b9dc(t2, (void *)(&frame));
            scale_rectangle_fields((void *)a1, (void *)(&frame));
            sq_quad_8c38b09e((Frame *)((&frame)), v2);
            a2->f00 += (float)(unsigned char)t2;
        }
    }
}
