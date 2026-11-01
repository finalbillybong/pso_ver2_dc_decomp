/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10f90c
 * function: operation_8c10f90c
 * language: c
 * reference size: 1468 bytes
 * compiled size: 1532 bytes (+4.4%)
 * differing lines: 454 of 637 reference instruction lines
 * differing bytes: 1071
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +64 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_78_94 Arg0_78_94;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_94 S_vv1_94;
typedef struct Block_frame_ac {
    char unknown0[0xc];
    float f0c;
    float f10;
    int f14;
    char unknown18[0x4];
    float f1c;
    float f20;
    float f24;
    char unknown28[0x4];
} Block_frame_ac;
typedef struct Block_frame_70 {
    float f00;
    float f04;
    float f08;
} Block_frame_70;
typedef struct Block_frame_7c {
    float f00;
    float f04;
    float f08;
} Block_frame_7c;
typedef struct Block_frame_34 {
    float f00;
    float f04;
    float f08;
} Block_frame_34;
typedef struct Block_frame_1c {
    int f00;
    char unknown4[0x8];
} Block_frame_1c;
struct Object {
    char unknown0[0x78];
    Arg0_78 *f78;
    Arg0_7c *f7c;
    char unknown80[0x10];
    char f90;
    char unknown91[0x4f];
    float fe0;
    char unknowne4[0x4];
    float fe8;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    Block_frame_1c f1c;
    float f28;
    float f2c;
    float f30;
    Block_frame_34 f34;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
    float f68;
    float f6c;
    Block_frame_70 f70;
    Block_frame_7c f7c;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    float fa8;
    Block_frame_ac fac;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
    char unknown98[0x40];
    Block44 fd8;
    int f104;
};
struct S_vv1 {
    char unknown0[0x94];
    S_vv1_94 *f94;
};
struct S_vv1_94 {
    char unknown0[0x3c];
    float f3c;
};
struct Arg0_7c_94 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x2e0];
    float f328;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Arg0_78 {
    char unknown0[0x94];
    Arg0_78_94 *f94;
};
struct Arg0_78_94 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern Vector3 g_8c30fb28;
extern Vector3 g_8c30fb34;
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float call_8c3845f0(void *, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c10fec8(Object *, void *, void *, void *, void *, void *, void *, Frame *);
extern int project_contact_position(void *, void *, void *, void *);
int operation_8c10f90c(Object *o, Arg1 *a1)
{
    Frame frame;
    int v2;
    float v12;
    S_vv1 *v1;
    float v11;
    float v13;
    float v30;
    float v31;
    float v37;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    int t8;
    float t9;
    v1 = (S_vv1 *)o->f7c;
    *(Block44 *)&(&frame)->fac = *(Block44 *)&o->f7c->fd8;
    v2 = (int)(&frame)->fac.f14;
    if (v2 != 0 && v2 != 0) {
        if ((&frame)->fac.f10 > 12.0f) {
            goto L_8c10fb80;
        }
        if (v2 != 1) {
            goto L_8c10fb80;
        }
        if ((&frame)->fac.f10 != (&frame)->fac.f0c) {
            goto L_8c10fb80;
        }
    }
    v11 = (float)(&frame)->fac.f1c;
    v12 = (float)(&frame)->fac.f0c;
    v12 = (float)(v12 + 20.0f);
    v13 = (float)(&frame)->fac.f24;
    (&frame)->f94 = v1->f94->f3c - v11;
    (&frame)->f98 = 0.0f;
    (&frame)->f9c = o->f7c->f94->f44 - v13;
    (&frame)->fa0 = (&frame)->f9c;
    (&frame)->fa4 = 0.0f;
    (&frame)->fa8 = -(&frame)->f94;
    t1 = njScalor_8c37e480((void *)(&(&frame)->fa0));
    if (t1 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->fa0));
    }
    (&frame)->f88 = o->fe0 - v11;
    (&frame)->f8c = 0.0f;
    (&frame)->f90 = o->fe8 - v13;
    t2 = njScalor_8c37e480((void *)(&(&frame)->f88));
    if (t2 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f88));
    }
    t3 = call_8c3845f0((void *)(&(&frame)->fa0), (void *)(&(&frame)->f88));
    if (0.0f > t3) {
        (&frame)->fa0 = -(&frame)->fa0;
        (&frame)->fa8 = -(&frame)->fa8;
    }
    t4 = njScalor_8c37e480((void *)(&(&frame)->f94));
    if (t4 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f94));
    }
    (&frame)->fa0 += (&frame)->f94;
    (&frame)->fa4 += (&frame)->f98;
    (&frame)->fa8 += (&frame)->f9c;
    t5 = njScalor_8c37e480((void *)(&(&frame)->fa0));
    if (t5 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->fa0));
    }
    a1->f00 = v12 * (&frame)->fa0 + v11;
    a1->f04 = v12 * (&frame)->fa4 + (&frame)->fac.f20;
    a1->f08 = v12 * (&frame)->fa8 + v13;
    if (!(o->f90 > 0xa)) {
    } else {
        a1->f00 = v11 - v12 * (&frame)->fa0;
        a1->f04 = (&frame)->fac.f20 - v12 * (&frame)->fa4;
        a1->f08 = v13 - v12 * (&frame)->fa8;
        goto L_8c10fe4e;
L_8c10fb80:;
        *(Vector3 *)&(&frame)->f7c = *(Vector3 *)&g_8c30fb28;
        *(Vector3 *)&(&frame)->f70 = *(Vector3 *)&g_8c30fb34;
        (&frame)->f70.f08 *= (&frame)->fac.f10;
        (&frame)->f7c.f00 *= (&frame)->fac.f0c;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (int)(o->f7c->f104 + 0x4000));
        call_8c3be280(0, (void *)(&(&frame)->f7c), (void *)(&(&frame)->f7c));
        call_8c3be280(0, (void *)(&(&frame)->f70), (void *)(&(&frame)->f70));
        njPopMatrix_8c38accc(1);
        (&frame)->f64 = (&frame)->fac.f1c + (&frame)->f7c.f00;
        (&frame)->f4c = (&frame)->fac.f1c - (&frame)->f7c.f00;
        (&frame)->f68 = (&frame)->fac.f20 + (&frame)->f7c.f04;
        (&frame)->f50 = (&frame)->fac.f20 - (&frame)->f7c.f04;
        (&frame)->f6c = (&frame)->fac.f24 + (&frame)->f7c.f08;
        (&frame)->f54 = (&frame)->fac.f24 - (&frame)->f7c.f08;
        (&frame)->f58 = (&frame)->fac.f1c + (&frame)->f70.f00;
        (&frame)->f5c = (&frame)->fac.f20 + (&frame)->f70.f04;
        (&frame)->f40 = (&frame)->fac.f1c - (&frame)->f70.f00;
        v30 = (float)((&frame)->fac.f20 - (&frame)->f70.f04);
        (&frame)->f44 = v30;
        v31 = (float)((&frame)->fac.f24 + (&frame)->f70.f08);
        (&frame)->f60 = v31;
        (&frame)->f48 = (&frame)->fac.f24 - (&frame)->f70.f08;
        (&frame)->f28 = o->f78->f94->f3c - (&frame)->fac.f1c;
        (&frame)->f2c = o->f78->f94->f40 - (&frame)->fac.f20;
        (&frame)->f30 = o->f78->f94->f44 - (&frame)->fac.f24;
        t6 = ((float (*)(void *, float, float, float, float))njScalor_8c37e480)(&(&frame)->f28, v30, v31, (&frame)->f70.f08, (&frame)->f70.f00);
        if (t6 != 0.0f) {
            njUnitVector_8c37b630((void *)(&(&frame)->f28));
        }
        call_8c10fec8(o, (void *)(&(&frame)->f64), (void *)(&(&frame)->f4c), (void *)(&(&frame)->f58), (void *)(&(&frame)->f40), (void *)(&o->f7c->f94->f3c), (void *)(&(&frame)->f1c.f00), (Frame *)((&frame)));
        *(Vector3 *)&(&frame)->f34 = *(Vector3 *)&(&frame)->f1c;
        t7 = call_8c3845f0((void *)(&(&frame)->f28), (void *)(&(&frame)->f34));
        if (0.0f > t7) {
            (&frame)->f34.f00 = -(&frame)->f34.f00;
            (&frame)->f34.f08 = -(&frame)->f34.f08;
        }
        v37 = (float)(&frame)->f00;
        a1->f00 = v37 * (&frame)->f34.f00 + o->f7c->f94->f3c;
        a1->f04 = o->f7c->f94->f328 + v37 * (&frame)->f34.f04;
        a1->f08 = v37 * (&frame)->f34.f08 + o->f7c->f94->f44;
        t8 = project_contact_position((void *)o, (void *)(((char *)o->f7c->f94 + 0x324)), (void *)a1, (void *)(&(&frame)->f10));
        if (t8 != 0) {
            a1->f00 = (&frame)->f10;
            a1->f04 = (&frame)->f14;
            a1->f08 = (&frame)->f18;
        }
        if (o->f90 > 0xf) {
            (&frame)->f08 = 0.0f;
            (&frame)->f0c = (&frame)->f34.f00;
            t9 = call_8c3845f0((void *)(&(&frame)->f28), (void *)(&(&frame)->f04));
            if (0.0f > t9) {
                (&frame)->f0c = -(&frame)->f0c;
            }
            a1->f00 = v37 * (&frame)->f04 + o->f7c->f94->f3c;
            a1->f04 = o->f7c->f94->f328;
            a1->f08 = v37 * (&frame)->f0c + o->f7c->f94->f44;
        }
    }
L_8c10fe4e:;
    return 1;
}
