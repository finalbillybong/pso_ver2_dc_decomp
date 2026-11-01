/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22fb5c
 * function: operation_8c22fb5c
 * language: c
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 46 of 246 reference instruction lines
 * differing bytes: 376
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
typedef struct S_g8c506520 S_g8c506520;
typedef struct S_vv2 S_vv2;
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
struct S_vv2 {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0xb8];
    int fe0;
};
extern S_g8c506520 *g_8c506520;
extern char g_8c506528;
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c22fb5c(int a0)
{
    Frame frame;
    unsigned char v3;
    int v4;
    int v1;
    S_vv2 *v2;
    int t1;
    int t2;
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c506520);
    v1 = (int)0xffffff;
    v2 = (S_vv2 *)a0;
    for (v3 = 0; v3 < 8; v3++) {
        v4 = v3;
        t1 = call_8c18e768(v4, 2);
        (&frame)->f00 = v2->f20 + (float)(t1 * 0x5c);
        t2 = call_8c18e8a0(v4, 2);
        (&frame)->f04 = v2->f24 + (float)(t2 * 0x57);
        (&frame)->f08 = (&frame)->f00 + 57.0f;
        (&frame)->f0c = (&frame)->f04 + 86.0f;
        if (*(int *)((char *)((char *)v2 + 0xe4) + (v4 << 2)) != 0) {
            if (v4 != g_8c506528) {
                v2->fe0 = 0x55;
            } else {
                v2->fe0 = 0xff;
                (&frame)->f10 = 0.4453125f;
                (&frame)->f14 = 0.0f;
                (&frame)->f18 = 0.890625f;
                (&frame)->f1c = 0.671875f;
                sq_select_8c38aeb4(1);
                sq_header_8c38af22(0, (int)(v2->fe0 << 0x18 | v1));
                sq_quad_8c38b09e((Frame *)((&frame)), 0.5f);
                sq_flush_8c38af12();
            }
            (&frame)->f10 = 0.0f;
            (&frame)->f14 = 0.0f;
            (&frame)->f18 = 0.4453125f;
            (&frame)->f1c = 0.671875f;
            sq_select_8c38aeb4(1);
            sq_header_8c38af22(0, (int)(v2->fe0 << 0x18 | v1));
            sq_quad_8c38b09e((Frame *)((&frame)), 0.5f);
            sq_flush_8c38af12();
        }
    }
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c506520);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(1, -1);
    sq_quad_8c38b09e((Frame *)((int)v2 + 0x60), 0.5f);
    sq_quad_8c38b09e((Frame *)((int)v2 + 0x80), 0.5f);
    sq_quad_8c38b09e((Frame *)((int)v2 + 0xa0), 0.5f);
    sq_quad_8c38b09e((Frame *)((int)v2 + 0xc0), 0.5f);
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
