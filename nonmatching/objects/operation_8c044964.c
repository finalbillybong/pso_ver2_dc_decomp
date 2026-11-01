/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c044964
 * function: operation_8c044964
 * language: c
 * reference size: 624 bytes
 * compiled size: 624 bytes (+0.0%)
 * differing lines: 12 of 267 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Block_frame_24 f24;
    Vector3 f30;
    Vector3 f3c;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x104];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x1a8];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
};
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern float njScalor2_8c37e494(void *);
extern void njUnitVector_8c37b630(void *);
extern void call_8c3bdf60(void *, void *);
extern int call_8c0441d8(Object *, Vector3);
extern int operation_8c051ff4(void *, void *, void *);
extern float call_8c130334(float, float);
extern float squared_distance_xz(void *, void *);
float operation_8c044964(Object *o, float f0, Vector3 pv)
{
    int ang;
    Frame frame;
    int v1;
    float t1;
    int t2;
    float t3;
    int t4;
    float t5;
    int t6;
    *(Vector3 *)&(&frame)->f3c = pv;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f3c), (void *)(&o->f324));
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, 0x8000);
    call_8c3be38c(0, (void *)(&(&frame)->f3c), (void *)(&(&frame)->f3c));
    njPopMatrix_8c38accc(1);
    t1 = njScalor2_8c37e494((void *)(&(&frame)->f3c));
    if (t1 > 1e-07f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f3c));
        call_8c3bdf60((void *)(&(&frame)->f3c), (void *)(&o->f324));
        t6 = call_8c0441d8(o, *(Vector3 *)&(&frame)->f3c);
        v1 = (int)t6;
    } else {
        v1 = (int)0;
    }
    if (v1 == 0) {
    } else {
        *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&o->f324;
        t2 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f30), (void *)0);
        if (t2 != 0) {
            *(Vector3 *)&o->f158 = *(Vector3 *)&o->f3c;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f164;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f158;
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&(&frame)->f0c;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
        if (1e-07f > ((&frame)->f24.f00 * (&frame)->f24.f00 + (&frame)->f24.f08 * (&frame)->f24.f08)) {
            o->f320 = 0.0f;
            o->f318 = 0.0f;
        } else {
            ang = (int)(call_8c130334((&frame)->f24.f00, (&frame)->f24.f08) * 65536.0f / 6.28318405f);
            (&frame)->f24.f04 = 0.0f;
            (&frame)->f24.f00 = 0.0f;
            (&frame)->f24.f08 = f0;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, ang);
            call_8c3be38c(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f24));
            njPopMatrix_8c38accc(1);
            o->f318 = (&frame)->f24.f00;
            o->f320 = (&frame)->f24.f08;
        }
        *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        call_8c3bdf60((void *)(&frame), (void *)(&o->f318));
        t4 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
        if (t4 != 0) {
            *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f00;
        }
        t5 = squared_distance_xz((void *)(&pv), (void *)(&o->f3c));
        return t5;
    }
    return 0.0f;
}
