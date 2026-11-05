/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04a9e0
 * function: operation_8c04a9e0
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 20 of 70 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c0c5094(void *, void *, Frame *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c11a920(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c04a9e0(Object *o, Arg1 *a1)
{
    int pm2;
    float pm5;
    int pm1;
    float pm8;
    float pm11;
    float pm6;
    int pm4;
    void *pm10;
    Frame frame;
    int pm3;
    void *pm7;
    int pm13;
    S_frame_4 *pm9;
    void *pm14;
    S_frame_4 *pm15;
    njPushMatrixEx_8c38ae68();
    pm1 = 0x170;
    pm10 = (void *)(((char *)o + pm1));
    call_8c0c5094(pm10, (void *)(&(&frame)->f04), (((&frame))));
    pm8 = o->f3c;
    pm5 = pm8;
    pm3 = 0;
    njTranslate_8c3829bc(pm3, pm5, o->f40 + 0.3f, o->f44);
    pm14 = (void *)((&frame)->f00);
    pm7 = pm14;
    njRotateZ_8c37e02c(0, pm7);
    pm4 = 0;
    pm15 = (&frame)->f04;
    pm9 = pm15;
    pm10 = (void *)(pm9);
    njRotateX_8c37dd28(pm4, pm10);
    pm13 = 0;
    pm10 = (void *)(o->f64);
    njRotateY_8c37df90(pm13, pm10);
    pm4 = (-0x4000);
    pm3 = pm4;
    pm2 = 0;
    pm1 = pm3;
    njRotateX_8c37dd28(pm2, (void *)pm1);
    if (0 != a1) {
        float pm12;
        pm12 = 1.0f;
        pm11 = a1->f08;
        pm6 = pm11;
        pm5 = pm6;
        njScale_8c37e2e4(0, a1->f00, pm5, pm12);
    }
    call_8c11a920();
    njPopMatrixEx_8c38ad10();
}
