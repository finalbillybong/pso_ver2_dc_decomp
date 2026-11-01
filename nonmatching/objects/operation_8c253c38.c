/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c253c38
 * function: operation_8c253c38
 * language: c
 * reference size: 380 bytes
 * compiled size: 376 bytes (-1.1%)
 * differing lines: 26 of 153 reference instruction lines
 * differing bytes: 291
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    float f2c;
    float f30;
    float f34;
    char unknown38[0x4];
    float f3c;
};
typedef struct V3 {
    float f00;
    float f04;
    float f08;
} V3;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    V3 f10;
    float f1c;
    float f20;
    int f24;
    int f28;
    void *f2c;
};
extern void call_8c380ab8(int, int);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateX_8c37dd28(int, int);
extern void scale_current_matrix_v_8c37e390(void *);
extern void call_8c38c0f0(Frame *);
extern void reset_state_8c391c94(void);
extern void call_8c37ebdc(void *, int, int);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c253c38(Object *o)
{
    Frame frame;
    if (*(int *)0x8c4d8340 == 0) {
        return;
    }
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
    njTranslate_8c3829bc(0, 0.0f, 0.3f, 0.0f);
    njRotateX_8c37dd28(0, -0x4000);
    o->f2c = 0.28f;
    o->f30 = 0.28f;
    o->f34 = 0.28f;
    scale_current_matrix_v_8c37e390((void *)(&o->f2c));
    (&frame)->f10.f00 = -5.0f;
    (&frame)->f10.f04 = 0.0f;
    (&frame)->f10.f08 = 0.0f;
    (&frame)->f1c = 1.0f;
    (&frame)->f20 = 1.0f;
    (&frame)->f24 = 0;
    (&frame)->f28 = (int)(*(int *)0x8c4d8340);
    (&frame)->f2c = (void *)0x8c33fb48;
    (&frame)->f00 = 1.0f - o->f3c;
    (&frame)->f04 = 1.0f;
    (&frame)->f08 = 1.0f;
    (&frame)->f0c = 1.0f;
    call_8c38c0f0((Frame *)((&frame)));
    reset_state_8c391c94();
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x22);
    (&frame)->f10.f00 = 0.0f;
    (&frame)->f10.f04 = 0.0f;
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x26);
    (&frame)->f10.f00 = -5.0f;
    (&frame)->f10.f04 = -5.0f;
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x2a);
    (&frame)->f10.f00 = 0.0f;
    (&frame)->f10.f04 = -5.0f;
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x2e);
    reset_state_8c391cc4();
    call_8c38c0f0((Frame *)((void *)0x8c305fd8));
    njPopMatrixEx_8c38ad10();
}
