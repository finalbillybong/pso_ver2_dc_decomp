/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d58e4
 * function: operation_8c1d58e4
 * language: c
 * reference size: 548 bytes
 * compiled size: 548 bytes (+0.0%)
 * differing lines: 180 of 242 reference instruction lines
 * differing bytes: 125
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv41 S_vv41;
typedef struct S_vv44 S_vv44;
typedef struct S_vv46 S_vv46;
typedef struct S_vv49 S_vv49;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Object {
    char unknown0[0x8];
    float f08;
    float f0c;
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
struct S_vv41 {
    float f00;
    float f04;
};
struct S_vv44 {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    int f10;
};
struct S_vv49 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x1c];
    float f34;
};
struct S_vv46 {
    float f00;
    float f04;
};
extern S_g8c46fe00 *g_8c46fe00;
extern char g_8c289440[];
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
extern void restore_child_blend(void);
void operation_8c1d58e4(Object *o, Arg1 *a1)
{
    Frame frame;
    float v30;
    float v31;
    float v33;
    int v48;
    S_vv46 *v46;
    S_vv46 *v45;
    float v32;
    float v50;
    S_vv41 *v41;
    S_vv49 *v49;
    float v34;
    S_vv44 *v44;
    int v51;
    float v57;
    int v47;
    if (!(a1->f30 >= 0)) {
        return;
    }
    set_child_blend();
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(1, -1);
    v48 = 0;
    v30 = ((S_vv49 *)a1)->f10;
    v31 = ((S_vv49 *)a1)->f14;
    v32 = v30 + ((S_vv44 *)o)->f08;
    v31 = v31 + ((S_vv44 *)o)->f0c;
    v33 = -1.0f;
    v34 = v33 / (((S_vv49 *)a1)->f34 + 0.1196f);
    v44 = (S_vv44 *)o;
    v45 = (S_vv46 *)(g_8c289440 + 0x10);
    v46 = (S_vv46 *)(g_8c289440 + 0x8);
    v49 = (S_vv49 *)a1;
    v50 = v31 + 16.0f;
    for (; (v51 = v44->f10) > v48; v48++) {
        if (9 > v48) {
            v41 = (S_vv41 *)v46;
        } else {
            v41 = (S_vv41 *)v45;
        }
        frame.f00 = v32;
        frame.f04 = v31;
        frame.f08 = v32 + 16.0f;
        frame.f0c = v50;
        frame.f10 = v41->f00 / 256.0f;
        frame.f14 = v41->f04 / 256.0f;
        frame.f18 = (v41->f00 + 16.0f) / 256.0f;
        frame.f1c = (v41->f04 + 16.0f) / 256.0f;
        if (clip_and_scale_rectangle(v49, &frame) != 0) {
            sq_quad_8c38b09e(&frame, v34);
        }
        v32 += 17.0f;
    }
    v44 = (S_vv44 *)((char *)v44 + 12);
    v30 = v49->f10 + v44->f08;
    v31 = v49->f14 + v44->f00;
    v57 = -1.0f / (v49->f34 + 0.0897f);
    v46 = (S_vv46 *)g_8c289440;
    v47 = v51;
    if (0xa > v47) {
        v47 = 0xa;
    }
    v50 = v31 + 16.0f;
    for (v48 = 0; v47 > v48; v48++) {
        frame.f00 = v30;
        frame.f04 = v31;
        frame.f08 = v30 + 16.0f;
        frame.f0c = v50;
        frame.f10 = v46->f00 / 256.0f;
        frame.f14 = v46->f04 / 256.0f;
        frame.f18 = (v46->f00 + 16.0f) / 256.0f;
        frame.f1c = (v46->f04 + 16.0f) / 256.0f;
        if (clip_and_scale_rectangle(v49, &frame) != 0) {
            sq_quad_8c38b09e(&frame, v57);
        }
        v30 += 17.0f;
    }
    sq_flush_8c38af12();
    restore_child_blend();
}
