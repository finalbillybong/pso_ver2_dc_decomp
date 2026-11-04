/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c086210
 * function: TButterfly_update_8c086210
 * language: c
 * reference size: 1920 bytes
 * compiled size: 1916 bytes (-0.2%)
 * differing lines: 132 of 710 reference instruction lines
 * differing bytes: 803
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TButterfly.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    Arg0_64 *f64;
    char unknown68[0x30];
    float f98;
    char unknown9c[0x4];
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    float fb4;
    short fb8;
    short fba;
    unsigned char fbc;
    unsigned char fbd;
    unsigned char fbe;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    char unknown1c[0x4];
    float f20;
    float f24;
    float f28;
    float f2c;
};
extern float njSin_8c37eb0c(int);
extern int rand(void);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(void *, void *);
void TButterfly_update_8c086210(Object *o)
{
    Frame frame;
    float v1;
    unsigned char v21;
    unsigned char v43;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    float t17;
    t17 = njSin_8c37eb0c((int)(o->fba));
    v1 = (float)(o->f98 + t17 * 3.2f);
    if ((o->fbd) == 0) {
        o->fb4 = (v1 - o->f40) * 5.0f;
        if (0.1f > o->fb4) {
            o->fb4 = 0.1f;
        } else {
            if (o->fb4 > 4.0f) {
                o->fb4 = 4.0f;
            }
        }
        o->fb0 = o->fb4 * 0.01f * 2.0f + 0.3f;
        o->fa4 += o->fb4 * 0.027f * 0.1f;
        o->fa4 -= 0.027f;
        o->fac += o->fb0;
        if (!(o->fac > 5.0f)) {
            goto L_8c0863c2;
        }
        o->fac = 0.0f;
    } else {
        o->fb4 = (v1 - o->f40) * -7.0f;
        if (0.1f > o->fb4) {
            o->fb4 = 0.1f;
        } else {
            if (o->fb4 > 4.0f) {
                o->fb4 = 4.0f;
            }
        }
        o->fb0 = o->fb4 * 0.1f * 2.0f + 0.32f;
        o->fa4 -= o->fb4 * 0.027f * 0.5f;
        o->fa4 -= 0.027f;
        o->fac += o->fb0;
        if (o->fac > 5.0f) {
            o->fac = 0.0f;
            o->fbd = 0;
        }
    }
L_8c0863c2:;
    v21 = (unsigned char)o->fbc;
    switch (v21) {
    case 0:
        o->fa0 *= 0.8f;
        o->fa8 *= 0.8f;
        break;
    case 1:
        if ((o->fbd) == 0) {
            t1 = rand();
            (&frame)->f24 = ((float)t1 / 32768.0f * 2.0f - 1.0f) * 0.0015f * 2.0f;
            (&frame)->f28 = 0.0f;
            t2 = rand();
            (&frame)->f2c = (float)t2 / 32768.0f * 0.0015f * 2.0f + 0.05f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3be38c(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
            njPopMatrix_8c38accc(1);
            o->fa0 += (&frame)->f18;
            o->fa8 += (&frame)->f20;
            o->fa0 *= 0.72f;
            o->fa8 *= 0.72f;
            goto L_8c0866ec;
        }
        o->fa0 *= 0.85f;
        o->fa8 *= 0.85f;
        break;
    case 2:
        if ((o->fbe) == 0) {
            t3 = rand();
            o->f64 = (Arg0_64 *)(int)((float)(int)o->f64 + ((float)t3 / 32768.0f * 200.0f + 200.0f));
        } else {
            t4 = rand();
            o->f64 = (Arg0_64 *)(int)((float)(int)o->f64 - ((float)t4 / 32768.0f * 200.0f + 200.0f));
        }
        if ((o->fbd) == 0) {
            t5 = rand();
            (&frame)->f0c = ((float)t5 / 32768.0f * 2.0f - 1.0f) * 0.025f * 2.0f;
            (&frame)->f10 = 0.0f;
            t6 = rand();
            (&frame)->f14 = (float)t6 / 32768.0f * 0.025f * 2.0f + 0.05f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&frame));
            njPopMatrix_8c38accc(1);
            o->fa0 += (&frame)->f00;
            o->fa8 += (&frame)->f08;
            o->fa0 *= 0.85f;
            o->fa8 *= 0.85f;
        } else {
            o->fa0 *= 0.75f;
            o->fa8 *= 0.75f;
        }
    }
L_8c0866ec:;
    call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(&o->fa0));
    if (o->f40 > (v1 + 12.0f)) {
        o->f40 = v1 + 12.0f;
    } else {
        if ((v1 - 6.0f) > o->f40) {
            o->f40 = v1 - 6.0f;
        }
    }
    if (o->fb8 != 0) {
        o->fb8 -= 1;
    } else {
        v43 = (unsigned char)o->fbc;
        switch (v43) {
        case 0:
            o->fbc = 1;
            t7 = rand();
            o->fb8 = (int)((float)t7 / 32768.0f * 20.0f * 2.0f + 20.0f);
            break;
        case 1:
            t8 = rand();
            if (0.5f > ((float)t8 / 32768.0f)) {
                o->fbc = 2;
                t9 = rand();
                o->fb8 = (int)((float)t9 / 32768.0f * 50.0f + 50.0f);
                t10 = rand();
                if (0.5f > ((float)t10 / 32768.0f)) {
                    o->fbe = 0;
                    goto L_8c086932;
                }
                o->fbe = 1;
                goto L_8c086932;
            }
            o->fbc = 0;
            t11 = rand();
            o->fb8 = (int)((float)t11 / 32768.0f * 30.0f + 30.0f);
            break;
        case 2:
            t12 = rand();
            if (0.4f > ((float)t12 / 32768.0f)) {
                o->fbc = 2;
                t13 = rand();
                o->fb8 = (int)((float)t13 / 32768.0f * 50.0f + 50.0f);
                t14 = rand();
                if (0.5f > ((float)t14 / 32768.0f)) {
                    o->fbe = 0;
                    goto L_8c086932;
                }
                o->fbe = 1;
            } else {
                o->fbc = 1;
                t15 = rand();
                o->fb8 = (int)((float)t15 / 32768.0f * 30.0f * 2.0f + 30.0f);
            }
        }
    }
L_8c086932:;
    t16 = rand();
    o->fba += (int)((float)t16 / 32768.0f * 40.0f + 160.0f);
}
