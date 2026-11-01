/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c104a2c
 * function: operation_8c104a2c
 * language: c
 * reference size: 448 bytes
 * compiled size: 456 bytes (+1.8%)
 * differing lines: 170 of 191 reference instruction lines
 * differing bytes: 400
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    char unknown1c[0x14];
    int f30;
    float f34;
};
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
    float f20;
    float f24;
    float f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
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
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(void *, void *);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_flush_8c38af12(void);
extern void restore_child_blend(void);
void operation_8c104a2c(Object *o, Arg1 *a1)
{
    Frame frame;
    float v2;
    float v5;
    float v1;
    float v7;
    float v4;
    float v9;
    float v41;
    float v6;
    float v3;
    float v42;
    float v8;
    int t1;
    v1 = (float)-1.0f;
    v2 = (float)a1->f14;
    v3 = (float)(v2 + o->f0c);
    v4 = (float)(o->f0c / 21.0f);
    v5 = (float)a1->f10;
    v6 = (float)(v5 + o->f08);
    v7 = (float)(o->dispatch * 0.299f);
    v8 = (float)(v1 / (a1->f34 + v7));
    v9 = (((float)a1->f30 - (o->f08 / a1->f18 + v4) * 7.5f) * 17.0f / (o->f10 * 3.5f));
    if (v9 > 0.0f) {
        if (v9 > 0.5f) {
            v9 = 0.5f;
        }
        if (((o->tag & 8)) != 0) {
            set_child_blend();
        }
        if (((o->tag & 0xc)) != 0) {
            sq_select_8c38aeb4(1);
        } else {
            sq_select_8c38aeb4(0);
        }
        call_8c3827d8((void *)(o->f30->f00));
        sq_header_8c38af22((void *)(o->f34), (void *)(o->f2c));
        v41 = (float)(0.5f - v9);
        (&frame)->f00 = o->f10 * v41 + v6;
        (&frame)->f04 = o->f14 * v41 + v3;
        v42 = (float)(v9 + 0.5f);
        (&frame)->f08 = o->f10 * v42 + v6;
        (&frame)->f0c = o->f14 * v42 + v3;
        (&frame)->f10 = o->f1c;
        (&frame)->f14 = o->f20;
        (&frame)->f18 = o->f24;
        (&frame)->f1c = o->f28;
        if (((o->tag & 0x10)) != 0) {
            scale_rectangle_fields((void *)a1, (void *)(&frame));
            sq_quad_8c38b09e((Frame *)((&frame)), v8);
        } else {
            t1 = clip_and_scale_rectangle((void *)a1, (void *)(&frame));
            if (t1 != 0) {
                sq_quad_8c38b09e((Frame *)((&frame)), v8);
            }
        }
        sq_flush_8c38af12();
        restore_child_blend();
    }
}
