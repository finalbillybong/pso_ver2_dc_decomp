/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ab618
 * function: operation_8c1ab618
 * language: c
 * reference size: 636 bytes
 * compiled size: 648 bytes (+1.9%)
 * differing lines: 68 of 244 reference instruction lines
 * differing bytes: 446
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_a8 S_g8c46ee80_a8;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct S_g8c46ee80_b0 S_g8c46ee80_b0;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    Vector3 f20;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    float f24;
    char unknown28[0x20];
    int f48;
    int f4c;
    int f50;
    int f54;
};
struct S_c8c021ef8 {
    char unknown0[0x7d4];
    float f7d4;
    float f7d8;
    float f7dc;
    char unknown7e0[0x498];
    int fc78;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    char unknown9c[0xc];
    S_g8c46ee80_a8 *fa8;
    S_g8c46ee80_ac *fac;
    S_g8c46ee80_b0 *fb0;
};
extern Vector3 g_8c324f6c;
extern S_g8c46ee80 *g_8c46ee80;
extern float g_8c4e2bb8;
extern S_c8c021ef8 *lookup_low_id(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateZ_8c37e02c(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern float call_8c3845f0(void *, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void project_point_to_screen_8c38ad50(int, void *, Frame *);
extern void reset_state_8c391c94(void *);
extern void call_8c087354(int, void *, float, float, float);
extern void reset_state_8c391cc4(void);
void operation_8c1ab618(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    float v4;
    int v12;
    int v16;
    float v17;
    S_c8c021ef8 *t1;
    float t2;
    *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&g_8c324f6c;
    t1 = lookup_low_id((int)(o->f54));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f20 != t1->fc78) {
        o->f04 |= 1;
        return;
    }
    (&frame)->f08 = t1->f7d4;
    (&frame)->f0c = t1->f7d8;
    (&frame)->f10 = t1->f7dc;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(g_8c46ee80->fac));
    njRotateX_8c37dd28(0, (void *)(g_8c46ee80->fa8));
    njRotateZ_8c37e02c(0, (void *)(g_8c46ee80->fb0));
    call_8c3be38c(0, (void *)(&(&frame)->f20), (void *)(&(&frame)->f20));
    njPopMatrixEx_8c38ad10();
    (&frame)->f14 = (&frame)->f08 - g_8c46ee80->f90;
    (&frame)->f18 = (&frame)->f0c - g_8c46ee80->f94;
    (&frame)->f1c = (&frame)->f10 - g_8c46ee80->f98;
    if (!(((&frame)->f14 * (&frame)->f14 + (&frame)->f18 * (&frame)->f18 + (&frame)->f1c * (&frame)->f1c) > 122500.0f)) {
        t2 = call_8c3845f0((void *)(&(&frame)->f20), (void *)(&(&frame)->f14));
        if (t2 > 0.0f) {
            njPushMatrixEx_8c38ae68();
            project_point_to_screen_8c38ad50(0, (void *)(&(&frame)->f08), (Frame *)((&frame)));
            njPopMatrixEx_8c38ad10();
            (&frame)->f00 -= o->f24 * 0.5f;
            v1 = (int)o->f4c;
            v2 = (int)o->f50;
            v4 = (float)(float)v1;
            if (v2 > 0) {
                v4 = (float)(float)v1;
                if ((float)v1 > (float)(v2 + -6)) {
                    v4 = (float)(float)(v2 - v1);
                }
            }
            if (6.0f > v4) {
                if ((v4 * 255.0f * 0.166666672f) > 2147483648.0f) {
                }
                v12 = (int)((unsigned int)(v4 * 255.0f * 0.166666672f) << 0x18);
            } else {
                v12 = (int)-0x1000000;
            }
            v16 = (int)(v12 | o->f48);
            v17 = (float)-1.0f;
            reset_state_8c391c94((void *)(&o->f24));
            call_8c087354(v16, (void *)(((char *)o + 0x28)), (&frame)->f00, (&frame)->f04, v17 / (g_8c4e2bb8 + 0.1495f));
            reset_state_8c391cc4();
        }
    }
}
