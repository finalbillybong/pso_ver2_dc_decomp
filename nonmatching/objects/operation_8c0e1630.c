/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e1630
 * function: operation_8c0e1630
 * language: c
 * reference size: 784 bytes
 * compiled size: 812 bytes (+3.6%)
 * differing lines: 296 of 341 reference instruction lines
 * differing bytes: 686
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, stack frame and spills; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +28 bytes
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
typedef struct Arg0_18 Arg0_18;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    char unknown14[0x4];
    Arg0_18 *dispatch;
    float f1c;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    char unknown1c[0x14];
    int f30;
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
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
};
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, void *);
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_header3_8c38b02e(int);
extern void sq_flush_8c38af12(void);
void operation_8c0e1630(Object *o, Arg1 *a1)
{
    Frame frame;
    float v41;
    float v42;
    float v43;
    float v44;
    float v1;
    float w;
    float v5;
    float v6;
    float v10;
    float v11;
    float v46;
    float v32;
    float v33;
    float v12;
    v41 = o->f10;
    v42 = o->f0c;
    v43 = a1->f18;
    v44 = (v42 / v43 + v41 / 21.0f) * 7.5f;
    v1 = ((float)a1->f30 - v44) * 17.0f;
    if (!(v1 > 0.0f)) {
        return;
    }
    w = o->f1c;
    frame.f00 = w;
    if (!(w > 0.0f) && ((o->tag & 0x10)) == 0) {
        return;
    }
    if (((o->tag & 4)) != 0) {
        frame.f08 = 194.0f;
        v5 = 84.0f;
        v6 = 14.0f;
        frame.f04 = 6.0f;
    } else {
        frame.f08 = 176.0f;
        v5 = 84.0f;
        v6 = 14.0f;
        frame.f04 = 9.0f;
    }
    if (frame.f00 > v1) {
        frame.f00 = v1;
    }
    v10 = o->f08 * 0.299f;
    frame.f10 = a1->f10;
    v11 = a1->f14;
    frame.f0c = -1.0f;
    v46 = a1->f34 + v10;
    frame.f10 += v42;
    v11 += v41;
    frame.f0c = frame.f0c / v46;
    sq_select_8c38aeb4(0);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0, (void *)(o->dispatch));
    if (v1 > 0.0f) {
        frame.f18 = frame.f10;
        frame.f1c = v11;
        frame.f20 = frame.f10 + frame.f00;
        frame.f24 = v11 + frame.f04;
        frame.f14 = frame.f08 / 256.0f;
        frame.f28 = frame.f14;
        frame.f2c = v5 / 256.0f;
        v12 = (frame.f08 + v6) / 256.0f;
        frame.f30 = v12;
        frame.f34 = (v5 + frame.f04) / 256.0f;
        if (clip_and_scale_rectangle((void *)a1, (void *)&frame.f18) != 0) {
            v5 = frame.f20 - frame.f18;
            frame.f28 = frame.f14;
            frame.f30 = v12;
            while (v5 > 0.0f) {
                if (v6 > v5) {
                    frame.f30 = (frame.f08 + v6) / 256.0f;
                    v6 = v5;
                }
                frame.f20 = frame.f18 + v6;
                sq_quad_8c38b09e((void *)&frame.f18, frame.f0c);
                v5 -= v6;
                frame.f18 = frame.f20;
            }
        }
    }
    if (((o->tag & 0x10)) != 0) {
        sq_header3_8c38b02e(-1);
        frame.f10 = frame.f10 - 1.0f;
        v32 = (o->f08 - 0.1f) * 0.299f;
        v33 = -1.0f;
        v46 = a1->f34 + v32;
        frame.f18 = frame.f10;
        v11 -= 1.0f;
        frame.f1c = v11;
        frame.f20 = frame.f18 + 102.0f;
        frame.f24 = frame.f1c + 11.0f;
        frame.f28 = 0.0f;
        frame.f2c = 0.35546875f;
        frame.f30 = 0.3984375f;
        frame.f34 = 0.3984375f;
        v33 = v33 / v46;
        if (clip_and_scale_rectangle((void *)a1, (void *)&frame.f18) != 0) {
            sq_quad_8c38b09e((void *)&frame.f18, v33);
        }
    }
    sq_flush_8c38af12();
}
