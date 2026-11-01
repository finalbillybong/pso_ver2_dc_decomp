/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b37a0
 * function: operation_8c0b37a0
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 50 of 123 reference instruction lines
 * differing bytes: 136
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c46f1c0 S_g8c46f1c0;
typedef struct S_g8c46f1c0_8 S_g8c46f1c0_8;
typedef struct Object Object;
struct Frame {
    Block16 f00;
    Vector3 f10;
    void *f1c;
    void *f20;
    int f24;
    int f28;
};
struct Object {
    char unknown0[0x30];
    float f30;
    float f34;
    float f38;
    char unknown3c[0x10];
    int f4c;
};
struct S_g8c46f1c0 {
    char unknown0[0x8];
    S_g8c46f1c0_8 *f08;
};
extern Vector3 g_8c3051ec;
extern Block16 g_8c3051f8;
extern S_g8c46f1c0 *g_8c46f1c0;
extern int g_8c46f560;
extern int g_8c575570;
extern int get_current_area_8c032b10(void);
extern void step_effect_color_alpha(void *, void *, float);
extern void adjust_vector_by_metric(void *, void *, float);
extern void call_8c0a0214(void *);
extern void call_8c38c0f0(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c0a0270(void *);
void operation_8c0b37a0(Object *o)
{
    Frame frame;
    int t1;
    t1 = get_current_area_8c032b10();
    if (t1 == 0 || get_current_area_8c032b10() == 0xf) {
        return;
    }
    (&frame)->f1c = (void *)0x8c3055f4;
    (&frame)->f20 = (void *)0x8c3051e0;
    (&frame)->f24 = (int)o->f4c + 0x11;
    (&frame)->f28 = 0;
    (&frame)->f10 = *(Vector3 *)&g_8c3051ec;
    {
        Block16 *p_ = (Block16 *)&g_8c3051f8;
        *(Block16 *)&(&frame)->f00 = *p_;
    }
    step_effect_color_alpha((void *)(((char *)o + 0x3c)), (void *)(&frame), 0.1f);
    adjust_vector_by_metric((void *)(&o->f30), (void *)(&(&frame)->f10), 0.05f);
    call_8c0a0214((void *)(&(&frame)->f1c));
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    call_8c38c0f0((void *)(((char *)o + 0x3c)));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x24)));
    njScale_8c37e2e4(0, o->f30, o->f34, o->f38);
    njTranslate_8c3829bc(0, 0.0f, 10.0f, 0.0f);
    call_8c3827d8((void *)((void *)0x8c3051e0));
    call_8c3aa716((void *)(g_8c46f1c0->f08));
    njPopMatrixEx_8c38ad10();
    call_8c0a0270((void *)(&(&frame)->f1c));
    g_8c575570 = (int)(g_8c46f560);
}
