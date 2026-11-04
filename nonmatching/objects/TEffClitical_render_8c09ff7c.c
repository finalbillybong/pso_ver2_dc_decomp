/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09ff7c
 * function: TEffClitical_render_8c09ff7c
 * language: c
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 34 of 76 reference instruction lines
 * differing bytes: 48
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TEffClitical.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46eda0 S_g8c46eda0;
typedef struct S_g8c46eda0_0 S_g8c46eda0_0;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct Object Object;
struct Frame {
    void *f00;
    void *f04;
    int f08;
    int f0c;
};
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    char unknown4c[0x28];
    int f74;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    S_g8c46ee80_ac *fac;
};
struct S_g8c46eda0 {
    S_g8c46eda0_0 *f00;
};
extern void call_8c38c0f0(void *);
extern void call_8c0a0214(Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c3827d8(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c0a0270(Frame *);
void TEffClitical_render_8c09ff7c(Object *o)
{
    Frame frame;
    int v1;
    float pm1;
    (&frame)->f00 = (void *)0x8c3055f4;
    v1 = (int)*(int *)0x8c575570;
    *(int *)0x8c46f560 = (int)(v1);
    (&frame)->f04 = (void *)0x8c3021ac;
    *(int *)0x8c575570 = v1 | 0x10;
    (&frame)->f08 = (int)o->f74 + 0x11;
    (&frame)->f0c = 0;
    call_8c38c0f0((void *)(((char *)o + 0x30)));
    call_8c0a0214((Frame *)((&frame)));
    njPushMatrixEx_8c38ae68();
    call_8c3827d8((void *)((void *)0x8c3021ac));
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x24)));
    njRotateY_8c37df90(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fac));
    pm1 = o->f44;
    njScale_8c37e2e4(0, o->f40, pm1, o->f48);
    call_8c3aa716((void *)((*(S_g8c46eda0 **)0x8c46eda0)->f00));
    njPopMatrixEx_8c38ad10();
    call_8c0a0270((Frame *)((&frame)));
    *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
}
