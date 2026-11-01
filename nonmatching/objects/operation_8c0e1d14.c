/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e1d14
 * function: operation_8c0e1d14
 * language: c
 * reference size: 556 bytes
 * compiled size: 556 bytes (+0.0%)
 * differing lines: 34 of 234 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
typedef struct Object Object;
typedef struct Arg0_1c Arg0_1c;
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
    char unknown10[0x8];
    float dispatch;
    Arg0_1c *f1c;
    int f20;
};
struct Frame {
    float f00;
    float f04;
    char unknown8[0x18];
};
extern S_g8c467184 *g_8c467184;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, void *);
extern void operation_8c04b3b8(int);
extern int operation_8c087244(int);
extern int operation_8c087248(int);
extern int operation_8c04b794(int);
extern int call_8c04b428(int, Frame *, void *);
extern void call_8c087120(int, Frame *);
extern void operation_8c04b9dc(int, void *);
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
extern void sq_flush_8c38af12(void);
extern void call_8c04b3e4(void);
void operation_8c0e1d14(Object *o, Arg1 *a1)
{
    Frame frame;
    int v11;
    float v5;
    int v4;
    int v10;
    float v6;
    float v7;
    int v3;
    if (!((((float)a1->f30 - (o->f08 / a1->f18 + o->f0c / 21.0f) * 7.5f) * 17.0f) > 0.0f)) {
        return;
    }
    v3 = ((o->tag & 4)) != 0;
    v5 = a1->f10 + o->f08;
    v6 = a1->f14 + o->f0c;
    v7 = -1.0f / (a1->f34 + o->dispatch * 0.299f);
    v4 = o->f20;
    if (v3 != 0) {
        sq_select_8c38aeb4(1);
        call_8c3827d8(g_8c467184);
        sq_header_8c38af22(0, (void *)(o->f1c));
    } else {
        operation_8c04b3b8(0);
    }
    if (!(v4 > 0)) {
        if (v3 != 0) {
            v11 = operation_8c087244(0x30);
            v10 = operation_8c087248(v11);
        } else {
            v11 = operation_8c04b794(0x30);
            v10 = call_8c04b428((unsigned char)v11, &frame, (void *)(o->f1c));
        }
        v5 -= (float)(unsigned char)v10;
        frame.f00 = v5;
        frame.f04 = v6;
        if (v3 != 0) {
            call_8c087120(v11, &frame);
        } else {
            operation_8c04b9dc(v10, (void *)&frame);
        }
        if (clip_and_scale_rectangle((void *)a1, (void *)&frame) != 0) {
            sq_quad_8c38b09e(&frame, v7);
        }
    }
    while (v4 > 0) {
        v10 = call_8c18e8a0(v4, 10);
        if (v3 != 0) {
            v11 = operation_8c087244(v10 + 0x30);
            v10 = operation_8c087248(v11);
        } else {
            v11 = operation_8c04b794((unsigned char)(v10 + 0x30));
            v10 = call_8c04b428((unsigned char)v11, &frame, (void *)(o->f1c));
        }
        v5 -= (float)(unsigned char)v10;
        frame.f00 = v5;
        frame.f04 = v6;
        if (v3 != 0) {
            call_8c087120(v11, &frame);
        } else {
            operation_8c04b9dc(v10, (void *)&frame);
        }
        if (clip_and_scale_rectangle((void *)a1, (void *)&frame) != 0) {
            sq_quad_8c38b09e(&frame, v7);
        }
        v4 = call_8c18e768(v4, 10);
    }
    if (v3 != 0) {
        sq_flush_8c38af12();
        return;
    }
    call_8c04b3e4();
}
