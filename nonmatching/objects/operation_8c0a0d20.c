/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0d20
 * function: operation_8c0a0d20
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 76 of 187 reference instruction lines
 * differing bytes: 367
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: suspect on boot+title+opening movie; menu to registration screen (36 bytes differ, I/O
 *   equal); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46ee84 S_L8c46ee84;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_c8c0a2850 S_c8c0a2850;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_b4 S_g8c46ee80_b4;
typedef struct S_vv1 S_vv1;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_vv1 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    char unknowna8[0xc];
    S_g8c46ee80_b4 *fb4;
};
struct S_L8c46ee84 {
    float f00;
    float f04;
    float f08;
};
struct S_c8c0a2850 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
extern S_g8c46ee80 *g_8c46ee80;
extern float g_8c57555c;
extern float g_8c575560;
extern S_L8c46ee84 g_8c46ee84;
extern S_L8c46efc8 g_8c46efc8;
extern char g_8c46efd4[];
extern float njScalor_8c37e480(Frame *);
extern void call_8c0a4dd4(Frame *, void *, void *);
extern void call_8c382a24(void *, float, float, float);
extern S_c8c0a2850 *operation_8c0a2850(S_g8c46ee80 *);
extern void call_8c38abb8(void *, float, float, float);
extern void set_1c_8c37e76c(void *, void *);
extern void copy_vector_8c37e990(void *);
extern void call_8c37e4c0(void *);
extern void call_8c380c5a(int, void *);
void operation_8c0a0d20(void)
{
    Frame frame;
    S_vv1 *v1;
    float t1;
    S_c8c0a2850 *t2;
    v1 = (S_vv1 *)g_8c46ee80;
    (&frame)->f00 = v1->f9c - v1->f90;
    (&frame)->f04 = v1->fa0 - v1->f94;
    (&frame)->f08 = v1->fa4 - v1->f98;
    t1 = njScalor_8c37e480((Frame *)((&frame)));
    if (t1 == 0.0f) {
        g_8c46ee80->f9c = g_8c46ee80->f90;
        g_8c46ee80->fa0 = g_8c46ee80->f94;
        g_8c46ee80->fa4 = g_8c46ee80->f98 + 1.0f;
    }
    call_8c0a4dd4((Frame *)((&frame)), (void *)(((char *)g_8c46ee80 + 0xa8)), (void *)(((char *)g_8c46ee80 + 0xac)));
    call_8c382a24((void *)((void *)&g_8c46ee84), g_8c46ee80->f90 - (&g_8c46ee84)->f00, g_8c46ee80->f94 - (&g_8c46ee84)->f04, g_8c46ee80->f98 - (&g_8c46ee84)->f08);
    t2 = operation_8c0a2850(g_8c46ee80);
    call_8c38abb8((void *)((void *)&g_8c46ee84), g_8c46ee80->f9c + t2->f00, g_8c46ee80->fa0 + t2->f04, g_8c46ee80->fa4 + t2->f08);
    if ((((&g_8c46efc8)->f08 & 0x40)) != 0) {
        set_1c_8c37e76c((void *)((void *)&g_8c46ee84), (void *)(g_8c46ee80->fb4));
    }
    if ((((&g_8c46efc8)->f08 & 0x200)) != 0) {
        g_8c57555c = 1.0f;
        g_8c575560 = 0.85f;
        copy_vector_8c37e990((void *)((void *)g_8c46efd4));
        call_8c37e4c0((void *)((void *)&g_8c46ee84));
        call_8c380c5a(2, (void *)((g_8c46efd4 + 0x14)));
        return;
    }
    call_8c37e4c0((void *)((void *)&g_8c46ee84));
}
