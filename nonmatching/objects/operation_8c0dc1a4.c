/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dc1a4
 * function: operation_8c0dc1a4
 * language: c
 * reference size: 616 bytes
 * compiled size: 616 bytes (+0.0%)
 * differing lines: 64 of 276 reference instruction lines
 * differing bytes: 479
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on menu to registration screen (emulator A/B: RAM, trace and sampled call I/O);
 *   not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Frame {
    Block16 f00;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct Object {
    char unknown0[0x10];
    float f10;
    float f14;
    float dispatch;
    char unknown1c[0x14];
    int f30;
    float f34;
};
struct Arg1 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x4];
    float f14;
};
struct S_vv1 {
    float f00;
    float f04;
};
extern Block16 g_8c307420;
extern S_g8c46fe00 *g_8c46fe00;
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void hs_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern int clip_and_scale_rectangle(Object *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void restore_child_blend(void);
void operation_8c0dc1a4(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    float v2;
    float v4;
    float v3;
    float v12;
    S_vv1 *v1;
    float v5;
    int t1;
    int t2;
    int t3;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c307420;
    if (!(o->f30 >= 0)) {
        return;
    }
    v1 = (S_vv1 *)(&frame);
    if (a2 != 0) {
        v1 = (S_vv1 *)((char *)(&frame) + 0x8);
    }
    v2 = (float)o->f14;
    v3 = (float)(v2 + a1->f0c);
    v4 = (float)o->f10;
    v5 = (float)(-1.0f / (o->f34 + 0.22425f));
    set_child_blend();
    sq_select_8c38aeb4(1);
    hs_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(1, -1);
    (&frame)->f10 = v4;
    (&frame)->f14 = v3;
    v12 = (float)(v4 + 16.0f);
    (&frame)->f18 = v12;
    (&frame)->f1c = v3 + a1->f14;
    (&frame)->f20 = v1->f00 / 256.0f;
    (&frame)->f24 = v1->f04 / 256.0f;
    (&frame)->f28 = (v1->f00 + 16.0f) / 256.0f;
    (&frame)->f2c = (v1->f04 + 18.0f) / 256.0f;
    t1 = clip_and_scale_rectangle(o, &(&frame)->f10);
    if (t1 != 0) {
        sq_quad_8c38b09e(&(&frame)->f10, v5);
    }
    (&frame)->f10 = v4 + o->dispatch - 16.0f;
    (&frame)->f14 = v3;
    (&frame)->f18 = v4 + o->dispatch;
    (&frame)->f1c = v3 + a1->f14;
    (&frame)->f20 = (v1->f00 + 32.0f) / 256.0f;
    (&frame)->f24 = v1->f04 / 256.0f;
    (&frame)->f28 = (v1->f00 + 32.0f + 16.0f) / 256.0f;
    (&frame)->f2c = (v1->f04 + 18.0f) / 256.0f;
    t2 = clip_and_scale_rectangle(o, &(&frame)->f10);
    if (t2 != 0) {
        sq_quad_8c38b09e(&(&frame)->f10, v5);
    }
    (&frame)->f10 = v12;
    (&frame)->f14 = v3;
    (&frame)->f18 = v4 + o->dispatch - 16.0f;
    (&frame)->f1c = v3 + a1->f14;
    (&frame)->f20 = (v1->f00 + 16.0f) / 256.0f;
    (&frame)->f24 = v1->f04 / 256.0f;
    (&frame)->f28 = (v1->f00 + 16.0f + 16.0f) / 256.0f;
    (&frame)->f2c = (v1->f04 + 18.0f) / 256.0f;
    t3 = clip_and_scale_rectangle(o, &(&frame)->f10);
    if (t3 != 0) {
        sq_quad_8c38b09e(&(&frame)->f10, v5);
    }
    sq_flush_8c38af12();
    restore_child_blend();
}
