/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d16a0
 * function: TWindowSubSymbolChat_render_8c1d16a0
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 12 of 114 reference instruction lines
 * differing bytes: 123
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
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x3c];
    Arg0_3c *f3c;
};
struct Arg0_3c {
    char unknown0[0x64];
    int f64;
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
extern S_g8c46fe00 *g_8c46fe00;
extern float g_8c4e2bb8;
extern void backup_render_state(void);
extern void reset_state_8c391c94(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
extern void reset_state_8c391cc4(void);
extern void restore_render_state(void);
void TWindowSubSymbolChat_render_8c1d16a0(Object *o)
{
    Frame frame;
    float v6;
    int v1;
    float v7;
    if (o->f3c != 0) {
        if (6 > o->f3c->f64) {
            v1 = (int)((int)((float)(o->f3c->f64 * 0xff) * 0.166666672f) << 0x18 | 0xffffff);
        } else {
            v1 = (int)-1;
        }
        v7 = -1.0f / g_8c4e2bb8;
        backup_render_state();
        reset_state_8c391c94();
        sq_select_8c38aeb4(1);
        call_8c3827d8(g_8c46fe00);
        sq_header_8c38af22(0, v1);
        (&frame)->f00 = 514.0f;
        (&frame)->f04 = 344.0f;
        (&frame)->f08 = (&frame)->f00 + 14.0f;
        (&frame)->f0c = (&frame)->f04 + 12.0f;
        (&frame)->f10 = 0.875f;
        (&frame)->f14 = 0.33984375f;
        (&frame)->f18 = 0.9296875f;
        (&frame)->f1c = 0.38671875f;
        sq_quad_8c38b09e((Frame *)((&frame)), v7);
        sq_flush_8c38af12();
        reset_state_8c391cc4();
        restore_render_state();
    }
}
