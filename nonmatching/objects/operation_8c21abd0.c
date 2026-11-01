/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21abd0
 * function: operation_8c21abd0
 * language: c
 * reference size: 408 bytes
 * compiled size: 408 bytes (+0.0%)
 * differing lines: 80 of 156 reference instruction lines
 * differing bytes: 38
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c50595c S_g8c50595c;
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
    S_frame_4 *f04;
};
extern S_g8c50595c *g_8c50595c;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operator_new_8c18de4c(int);
extern void set_effect_blend_state(float);
extern void call_8c3827d8(int);
extern void operation_8c21ae48(void);
extern void call_8c3addea(void *, int, float);
extern void operation_8c21ae64(void);
extern void njPushMatrix_8c38ade4(int);
extern void call_8c3aa716(int);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
extern void operation_8c0351f0(int, void *, float);
extern void operator_delete_8c18de08(void *);
void operation_8c21abd0(int a0, int a1, float f0, float f1)
{
    Frame frame;
    int *home1 = &a1;
    S_c8c021ef8 *t1;
    char *v2;
    int v3;
    char *v5;
    int v4;
    int v6;
    char *v1;
    int t2;
    (void)home1;
    if (f1 != 0.0f && (unsigned short)a0 != 0xffff) {
        t1 = lookup_low_id((int)((unsigned short)a0));
        if (t1 != 0) {
            switch (t1->fbc4) {
            case 0:
                t2 = operator_new_8c18de4c(0x80);
                g_8c50595c = (S_g8c50595c *)(int)(t2);
                if (t2 != 0) {
                    v1 = (char *)t1->f838;
                    (&frame)->f04 = (S_frame_4 *)t1->f38;
                    v2 = (char *)t1->f834;
                    v3 = (int)((char *)t1 + 0x964);
                    v4 = (int)((char *)t1 + 0xa90);
                    v5 = (char *)t1->f83c;
                    v6 = (int)((char *)t1 + 0xbbc);
                    if (1.0f > f1) {
                        set_effect_blend_state(f1);
                    }
                    call_8c3827d8(v6);
                    operation_8c21ae48();
                    call_8c3addea((void *)((&frame)->f04), a1, f0);
                    operation_8c21ae64();
                    if (v5 != 0) {
                        njPushMatrix_8c38ade4((int)((int)g_8c50595c + 0x40));
                        call_8c3827d8(v4);
                        call_8c3aa716((int)(v5));
                        njPopMatrixEx_8c38ad10();
                    }
                    if (v1 != 0) {
                        njPushMatrix_8c38ade4((int)g_8c50595c);
                        call_8c3827d8(v3);
                        call_8c3aa716((int)(v1));
                        njPopMatrixEx_8c38ad10();
                    }
                    if (1.0f > f1) {
                        restore_effect_blend_state();
                    }
                    if (v2 != 0) {
                        njPushMatrix_8c38ade4((int)g_8c50595c);
                        call_8c3827d8(v3);
                        operation_8c0351f0((int)(v2), (void *)(((char *)t1 + 0x7e4)), f1);
                        njPopMatrixEx_8c38ad10();
                    }
                    operator_delete_8c18de08(g_8c50595c);
                    g_8c50595c = (S_g8c50595c *)0;
                }
            }
        }
    }
}
