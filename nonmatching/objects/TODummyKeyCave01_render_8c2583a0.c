/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2583a0
 * function: TODummyKeyCave01_render_8c2583a0
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 14 of 110 reference instruction lines
 * differing bytes: 15
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
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_2c S_vv4_2c;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x32];
    unsigned short f9e;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    char unknown8[0x24];
    S_vv4_2c *f2c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void apply_resource_3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c37ddbc(int, void *, void *, void *);
extern void scale_current_matrix_v_8c37e390(void *);
extern void call_8c3aa702(void *);
extern void call_8c38c0f0(void *);
extern void reset_state_8c391c94(void);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void TODummyKeyCave01_render_8c2583a0(Object *o)
{
    S_vv1 *v1;
    S_vv4 *v4;
    S_vv5 *v5;
    if (((o->f34 & 0x8000000)) == 0 && o->f38 != 0 && o->f28 != 0) {
        apply_resource_3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37ddbc(0, (void *)(o->f60), (void *)(o->f64), (void *)(o->f68));
        scale_current_matrix_v_8c37e390((void *)(((char *)o + 0x6c)));
        v1 = (S_vv1 *)o->f38;
        call_8c3aa702((void *)(v1->f04));
        if (((o->f9e & 0xffff)) == 0) {
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            call_8c38c0f0((void *)(((char *)o + 0xa0)));
        }
        reset_state_8c391c94();
        v4 = (S_vv4 *)v1->f2c;
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xb0)));
        translate_current_matrix_v_8c382a40((void *)((int)v4 + 8));
        call_8c3aa702((void *)(v4->f04));
        v5 = (S_vv5 *)v4->f2c;
        translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
        call_8c3aa702((void *)(v5->f04));
        if (((o->f9e & 0xffff)) == 0) {
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
        }
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
