/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21aa68
 * function: operation_8c21aa68
 * language: c
 * reference size: 360 bytes
 * compiled size: 360 bytes (+0.0%)
 * differing lines: 82 of 137 reference instruction lines
 * differing bytes: 40
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct S_c8c021ef8 {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x7f8];
    int f834;
    int f838;
    int f83c;
    char unknown840[0x384];
    int fbc4;
};
struct Frame {
    S_frame_0 *f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c21ad68(int);
extern void set_effect_blend_state(float);
extern void call_8c3827d8(int);
extern void call_8c3aa716(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
extern void operation_8c0351f0(int, void *, float);
void operation_8c21aa68(int a0, float f0)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int v2;
    int v3;
    int v5;
    int v4;
    int v6;
    int v1;
    if (f0 != 0.0f && (unsigned short)a0 != 0xffff) {
        t1 = lookup_low_id((int)((unsigned short)a0));
        if (t1 != 0) {
            switch (t1->fbc4) {
            case 0:
                v1 = t1->f838;
                (&frame)->f00 = (S_frame_0 *)t1->f38;
                v2 = t1->f834;
                v3 = (int)((char *)t1 + 0x964);
                v4 = (int)((char *)t1 + 0xa90);
                v5 = t1->f83c;
                v6 = (int)((char *)t1 + 0xbbc);
                operation_8c21ad68((int)((&frame)->f00));
                if (1.0f > f0) {
                    set_effect_blend_state(f0);
                }
                call_8c3827d8(v6);
                call_8c3aa716((void *)((&frame)->f00));
                if (v5 != 0) {
                    njPushMatrixEx_8c38ae68();
                    translate_current_matrix_v_8c382a40((void *)((void *)0x8c505950));
                    call_8c3827d8(v4);
                    call_8c3aa716((void *)v5);
                    njPopMatrixEx_8c38ad10();
                }
                if (v1 != 0) {
                    njPushMatrixEx_8c38ae68();
                    translate_current_matrix_v_8c382a40((void *)((void *)0x8c505944));
                    call_8c3827d8(v3);
                    call_8c3aa716((void *)v1);
                    njPopMatrixEx_8c38ad10();
                }
                if (1.0f > f0) {
                    restore_effect_blend_state();
                }
                if (v2 != 0) {
                    njPushMatrixEx_8c38ae68();
                    translate_current_matrix_v_8c382a40((void *)((void *)0x8c505944));
                    call_8c3827d8(v3);
                    operation_8c0351f0((int)(v2), (void *)(((char *)t1 + 0x7e4)), f0);
                    njPopMatrixEx_8c38ad10();
                }
            }
        }
    }
}
