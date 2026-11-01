/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa998
 * function: operation_8c0fa998
 * language: c++
 * reference size: 744 bytes
 * compiled size: 744 bytes (+0.0%)
 * differing lines: 86 of 322 reference instruction lines
 * differing bytes: 242
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
typedef struct Arg0_404 Arg0_404;
typedef struct S_x42224 S_x42224;
typedef struct S_x44112 S_x44112;
typedef struct S_x65392 S_x65392;
typedef struct S_x65568 S_x65568;
typedef struct S_x96688 S_x96688;
typedef struct Block_frame_30 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_30;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_24 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_24;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct S_x96688 {
    float f00;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    Block_frame_24 f24;
    Block_frame_30 f30;
    Vector3 f3c;
};
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x358];
    int f3a0;
    char unknown3a4[0x54];
    float f3f8;
    float f3fc;
    float f400;
    Arg0_404 *f404;
};
struct S_x44112 {
    float f00;
};
struct S_x65392 {
    float f00;
};
struct S_x65568 {
    float f00;
};
struct S_x42224 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void call_8c3bdf60(void *, int);
extern "C" float call_8c12c714(float);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void mark_effect_for_release(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void call_8c18e6fc(Frame *);
extern "C" void operation_8c0fa998(Object *o)
{
    Frame frame;
    int v7;
    int v2;
    int v18;
    int v6;
    int v3;
    int v1;
    int v4;
    int v37;
    int v5;
    int v38;
    float t1;
    int t2;
    float t3;
    float t4;
    float t5;
    int t6;
    float t7;
    float t8;
    int t9;
    v1 = (int)0x3fc;
    v2 = (int)0;
    v3 = (int)0x3f8;
    ((S_x96688 *)((int)o + v1))->f00 += -0.075f;
    v4 = (int)0x4000;
    v5 = (int)0x400;
    v6 = (int)4;
    while (v6 > 0) {
        *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&o->f3c;
        call_8c3bdf60((void *)(&(&frame)->f3c), (int)((int)o + v3));
        *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&(&frame)->f3c;
        t1 = call_8c12c714(((S_x44112 *)((int)o + v1))->f00);
        (&frame)->f30.f04 += t1 + 5.0f;
        t2 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f30), (void *)0);
        if (t2 != 0) {
            *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f3c;
            if ((&frame)->f30.f04 < o->f3c.f04) {
                goto L_8c0faa88;
            }
            o->f3c.f04 = (&frame)->f30.f04;
            v7 = (int)1;
            v2 = (int)v7;
            goto L_8c0faa88;
        }
        t4 = njSin_8c37eb0c(v4);
        t3 = njCos_8c38c154(v4);
        ((S_x65392 *)((int)o + v3))->f00 = ((S_x65392 *)((int)o + v3))->f00 * t3 + ((S_x65568 *)((int)o + v5))->f00 * t4;
        ((S_x65568 *)((int)o + v5))->f00 = ((S_x65392 *)((int)o + v3))->f00 * -t4 + ((S_x65568 *)((int)o + v5))->f00 * t3;
        v6 = (int)(v6 + -1);
    }
L_8c0faa88:;
    v18 = (int)v2;
    if (v6 == 0) {
        o->f400 = 0.0f;
        o->f3f8 = 0.0f;
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&o->f3c;
        t5 = call_8c12c714(o->f3fc);
        (&frame)->f24.f04 += t5 + 5.0f;
        t6 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f24), (void *)0);
        if (t6 != 0) {
            if ((&frame)->f24.f04 < o->f3c.f04) {
                goto L_8c0faafa;
            }
            o->f3c.f04 = (&frame)->f24.f04;
            v18 = (int)1;
        } else {
            v18 = (int)1;
        }
    }
    v2 = (int)v18;
L_8c0faafa:;
    if (o->f404 != 0) {
        call_8c0a7608((void *)(o->f404), (void *)(&o->f3c));
    }
    v38 = (int)v5;
    if (v2 != 0) {
        if (o->f404 != 0) {
            mark_effect_for_release((void *)(o->f404));
            o->f404 = (Arg0_404 *)0;
        }
        v37 = (int)0x1000;
        v38 = (int)0;
        while (0xffff > v38) {
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f3c;
            t7 = njSin_8c37eb0c(v38);
            (&frame)->f18.f00 += t7 * 12.5f;
            (&frame)->f18.f04 += -2.5f;
            t8 = njCos_8c38c154(v38);
            (&frame)->f18.f08 += t8 * 12.5f;
            create_effect_777c((void *)(&(&frame)->f18), 0xe2);
            v38 = (int)(v38 + v37);
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
        (&frame)->f0c.f04 += 5.0f;
        t9 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f0c), (void *)0);
        if (t9 != 0) {
            o->f3c.f04 += ((&frame)->f0c.f04 - o->f3c.f04) * 0.5f;
        }
        o->f3a0 = 1;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x42224 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
