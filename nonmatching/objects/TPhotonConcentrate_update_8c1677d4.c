/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1677d4
 * function: TPhotonConcentrate_update_8c1677d4
 * language: c
 * reference size: 672 bytes
 * compiled size: 672 bytes (+0.0%)
 * differing lines: 4 of 269 reference instruction lines
 * differing bytes: 4
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
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_134 Arg0_134;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Block_frame_18 f18;
    Vector3 f24;
    Vector3 f30;
};
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    Vector3 ff0;
    char unknownfc[0xc];
    Vector3 f108;
    float f114;
    float f118;
    float f11c;
    char unknown120[0x4];
    int f124;
    char unknown128[0x8];
    Arg0_130 *f130;
    Arg0_134 *f134;
};
struct Arg0_130 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_134 {
    char unknown0[0x64];
    int f64;
};
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njScalor_8c37e480(void *);
extern void create_effect_777c(void *, int);
extern float call_8c38d7d8(void *, void *);
extern void call_8c3bdf60(void *, void *);
extern float njSin_8c37eb0c(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateZ_8c37e02c(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void njRotateY_8c37df90(int, int);
extern void call_8c0a7608(Arg0_130 *, Frame *);
void TPhotonConcentrate_update_8c1677d4(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    float v9;
    float v12;
    float t1;
    float t2;
    float t3;
    float t4;
    v1 = (S_vv1 *)&o->ff0;
    *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&v1->f00;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f30), (void *)(&o->f108));
    t1 = njScalor_8c37e480((void *)(&(&frame)->f30));
    o->f114 = t1;
    if (10.0f > o->f114) {
        o->f130->f04 |= 1;
        o->f130 = (Arg0_130 *)0;
        create_effect_777c((void *)(&o->ff0), 0xc6);
        o->f04 |= 1;
        return;
    }
    t2 = call_8c38d7d8((void *)(((char *)o + 0xe4)), (void *)(&o->ff0));
    if (t2 > o->f11c) {
        o->f04 |= 1;
        return;
    }
    call_8c3bdf60((void *)(&o->ff0), (void *)(((char *)o + 0xfc)));
    *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&o->f108;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f24), (void *)(((char *)o + 0xe4)));
    t3 = njScalor_8c37e480((void *)(&(&frame)->f24));
    o->f118 = t3;
    if (o->f118 == 0.0f) {
        o->f118 = 1e-05f;
    }
    v9 = (float)(float)(unsigned int)(unsigned int)(o->f114 / o->f118 * 180.0f);
    t4 = njSin_8c37eb0c((int)((int)(v9 * 65536.0f / 360.0f)));
    (&frame)->f18.f00 = o->f118 / 10.0f * 4.0f * t4;
    (&frame)->f18.f08 = 0.0f;
    (&frame)->f18.f04 = 0.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    v12 = (float)(float)(unsigned int)o->f124;
    njRotateZ_8c37e02c(0, (int)((int)(v12 * 65536.0f / 360.0f)));
    call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
    njPopMatrix_8c38accc(1);
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&(&frame)->f0c;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    if (o->f134 != 0) {
        njRotateY_8c37df90(0, (int)((int)((float)(o->f134->f64 + -0x5a) * 65536.0f / 360.0f)));
        call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
    }
    njPopMatrix_8c38accc(1);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->ff0;
    call_8c3bdf60((void *)(&frame), (void *)(&(&frame)->f0c));
    if (o->f130 != 0) {
        call_8c0a7608((Arg0_130 *)(o->f130), (Frame *)((&frame)));
    }
}
