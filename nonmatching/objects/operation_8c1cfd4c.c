/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cfd4c
 * function: operation_8c1cfd4c
 * language: c
 * reference size: 588 bytes
 * compiled size: 588 bytes (+0.0%)
 * differing lines: 160 of 261 reference instruction lines
 * differing bytes: 128
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
typedef struct S_c8c139fac S_c8c139fac;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x1c];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    char unknown58[0x50];
    int fa8;
    float fac;
    float fb0;
    float fb4;
    float fb8;
    float fbc;
    float fc0;
};
struct Arg0_20 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
struct S_c8c139fac {
    float f00;
    float f04;
    float f08;
};
extern S_c8c139fac *operation_8c139fac(void);
extern float njScalor_8c37e480(Frame *);
extern void njUnitVector_8c37b630(Frame *);
void operation_8c1cfd4c(Object *o)
{
    Frame frame;
    S_c8c139fac *t1;
    float t2;
    t1 = operation_8c139fac();
    if (t1 == 0) {
        return;
    }
    (&frame)->f00 = o->f20->f3c - t1->f00;
    (&frame)->f08 = o->f20->f44 - t1->f08;
    (&frame)->f04 = 0.0f;
    t2 = njScalor_8c37e480((Frame *)((&frame)));
    if (t2 != 0.0f) {
        njUnitVector_8c37b630((Frame *)((&frame)));
    } else {
        return;
    }
    switch (o->fa8) {
    case 0:
        o->f4c = t1->f00;
        o->f54 = t1->f08;
        o->f50 = t1->f04;
        if (!(50.0f > o->f50)) {
            o->f50 = 60.0f;
        }
        o->f40 = (&frame)->f00 * 45.42f + o->f20->f3c;
        o->f48 = (&frame)->f08 * 45.42f + o->f20->f44;
        o->f44 = o->f20->f40 + 15.0f;
        if (!(100.0f > t2)) {
            return;
        }
        o->fa8 = 1;
        o->fac = o->f4c - o->f20->f3c;
        o->fb0 = o->f50 - o->f20->f40;
        o->fb4 = o->f54 - o->f20->f44;
        o->fb8 = o->f40 - o->f20->f3c;
        o->fbc = o->f44 - o->f20->f40;
        o->fc0 = o->f48 - o->f20->f44;
        return;
    case 1:
        if (t2 > 100.0f) {
            o->fa8 = 0;
        }
        o->f4c = o->fac + o->f20->f3c;
        o->f50 = o->fb0 + o->f20->f40;
        o->f54 = o->fb4 + o->f20->f44;
        o->f40 = o->fb8 + o->f20->f3c;
        o->f44 = o->fbc + o->f20->f40;
        o->f48 = o->fc0 + o->f20->f44;
    }
}
