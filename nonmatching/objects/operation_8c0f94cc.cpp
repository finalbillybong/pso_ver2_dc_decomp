/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f94cc
 * function: operation_8c0f94cc
 * language: c++
 * reference size: 728 bytes
 * compiled size: 724 bytes (-0.5%)
 * differing lines: 112 of 313 reference instruction lines
 * differing bytes: 283
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_x22544 S_x22544;
typedef struct S_x37824 S_x37824;
typedef struct S_x38832 S_x38832;
typedef struct S_x39168 S_x39168;
typedef struct S_x41072 S_x41072;
typedef struct S_x41408 S_x41408;
typedef struct S_x6352 S_x6352;
typedef struct S_x67888 S_x67888;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_frame_18 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_18;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x10];
    int f64;
    char unknown68[0x338];
    int f3a0;
    char unknown3a4[0x10];
    float f3b4;
    Arg0_3b8 *f3b8;
    char unknown3bc[0x14];
    float f3d0;
    char unknown3d4[0x4];
    float f3d8;
};
struct S_x6352 {
    float f00;
};
struct S_x22544 {
    float f00;
};
struct S_x67888 {
    float f00;
};
struct S_x37824 {
    float f00;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Block_frame_18 f18;
    int f24;
    char unknown28[0x8];
};
struct S_x38832 {
    float f00;
};
struct S_x39168 {
    float f00;
};
struct S_x41072 {
    Vector3 f00;
};
struct S_x41408 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" float njSin_8c37eb0c(void *);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" int operation_8c0113bc(int, int);
extern "C" float njCos_8c38c154(int);
extern "C" int call_8c04a52c(Object *, void *, float);
extern "C" float njScalor_8c37e480(void *);
extern "C" void call_8c18e6fc(void *);
extern "C" void operation_8c0f94cc(Object *o)
{
    Frame frame;
    int v14;
    char *v26;
    int v27;
    int v28;
    int v19;
    int v15;
    int v13;
    int v17;
    int v16;
    float t1;
    int t2;
    int t3;
    float t4;
    float t5;
    int t6;
    o->f64 += 0x100;
    if (o->f3b4 > 0.0f) {
        *(int *)((char *)o + 0x3b8) += 0xc00;
        t1 = njSin_8c37eb0c((void *)(o->f3b8));
        if ((o->f3d0 += (t1 + 0.5f) * 0.5f * 0.25f) > 2.5f) {
            o->f3d0 = 2.5f;
        }
    } else {
        if (0.0f > (o->f3d0 -= 0.25f)) {
            o->f3d0 = 0.0f;
        }
    }
    v13 = (int)0x3d0;
    o->f3b4 -= ((S_x6352 *)((int)o + v13))->f00;
    v14 = (int)1;
    v15 = (int)0x3d4;
    v16 = (int)-1;
    v17 = (int)0x3dc;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    while (0xf > v14) {
        o->f3c.f00 += ((S_x22544 *)((int)o + v13))->f00 * ((S_x67888 *)((int)o + v15))->f00;
        o->f3c.f04 += ((S_x22544 *)((int)o + v13))->f00 * o->f3d8;
        o->f3c.f08 += ((S_x22544 *)((int)o + v13))->f00 * ((S_x37824 *)((int)o + v17))->f00;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f3c;
        (&frame)->f18.f04 += 5.0f;
        t2 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f18), (void *)0);
        if (t2 != 0) {
            o->f3c.f04 += ((&frame)->f18.f04 - o->f3c.f04) * 0.5f;
            v19 = (int)1;
        } else {
            v19 = (int)0;
        }
        if (v19 != 0) {
            t3 = operation_8c0113bc((int)(&o->f48), (int)(&o->f3c));
            if (t3 == 0) {
                goto L_8c0f9684;
            }
        }
        v26 = (char *)v14;
        v28 = (int)((int)(v26) << 0xc);
        if (((v14 & 1)) != 0) {
            v27 = (int)(((int)(v26) << 0xc) * v16);
            v28 = (int)v27;
        }
        t5 = njSin_8c37eb0c((void *)v28);
        t4 = njCos_8c38c154(v28);
        ((S_x38832 *)((int)o + v15))->f00 = ((S_x38832 *)((int)o + v15))->f00 * t4 - ((S_x39168 *)((int)o + v17))->f00 * t5;
        ((S_x39168 *)((int)o + v17))->f00 = ((S_x38832 *)((int)o + v15))->f00 * t5 + ((S_x39168 *)((int)o + v17))->f00 * t4;
        *(Vector3 *)&o->f3c = *(Vector3 *)&o->f48;
        v14 = (int)(v14 + 1);
    }
L_8c0f9684:;
    if (!(o->f3b4 > 0.0f) && o->f3d0 == 0.0f) {
        t6 = call_8c04a52c(o, (void *)(&(&frame)->f24), 50.0f);
        if ((unsigned short)t6 != 0xffff) {
            if (njScalor_8c37e480((void *)(&(&frame)->f24)) > 15.0f) {
                o->f3a0 = 4;
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x41072 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
                call_8c18e6fc((void *)(&(&frame)->f0c));
                (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
                return;
            }
        }
        o->f3a0 = 3;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x41408 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
