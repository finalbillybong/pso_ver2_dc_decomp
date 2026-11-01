/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21fc04
 * function: operation_8c21fc04
 * language: c
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 42 of 116 reference instruction lines
 * differing bytes: 95
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
typedef struct Arg0_70 Arg0_70;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x70];
    Arg0_70 *f70;
};
struct Arg0_70 {
    int f00;
};
struct Arg1 {
    float f00;
    float f04;
    char unknown8[0x2c];
    float f34;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct S_vv5 {
    float f00;
    float f04;
};
extern void sq_header3_8c38b02e(int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
void operation_8c21fc04(Object *o, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    int v1;
    float v4;
    S_vv5 *v5;
    float v6;
    v1 = (int)a2;
    if (a2 == 2) {
        v1 = (int)a2;
        if (o->f70->f00 == 1) {
            v1 = (int)6;
        }
    }
    v5 = (S_vv5 *)&*(int *)((char *)0x8c2e1918 + (v1 << 3));
    v6 = -1.0f / (a1->f34 + 0.1794f);
    sq_header3_8c38b02e(a3);
    (&frame)->f00 = a1->f00 + 445.0f - 420.0f;
    (&frame)->f04 = a1->f04 + 348.0f - 335.0f + (float)a2 * 16.0f;
    (&frame)->f08 = (&frame)->f00 + 178.0f;
    (&frame)->f0c = (&frame)->f04 + 16.0f;
    (&frame)->f10 = v5->f00 / 256.0f;
    (&frame)->f14 = v5->f04 / 256.0f;
    (&frame)->f18 = (v5->f00 + 178.0f) / 256.0f;
    (&frame)->f1c = (v5->f04 + 16.0f) / 256.0f;
    scale_rectangle_fields((void *)a1, (void *)(&frame));
    sq_quad_8c38b09e((Frame *)((&frame)), v6);
}
