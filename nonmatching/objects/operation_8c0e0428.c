/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e0428
 * function: operation_8c0e0428
 * language: c
 * reference size: 1696 bytes
 * compiled size: 1662 bytes (-2.0%)
 * differing lines: 623 of 695 reference instruction lines
 * differing bytes: 1311
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -34 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Frame {
    float f00;
    float f04;
    int f08;
    char unknownc[0x8];
};
struct Arg1 {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x48];
    float fa0;
    float fa4;
};
struct Arg2 {
    float f00;
    float f04;
};
extern void call_8c0e0060(Object *, void *, int);
extern float call_8c38d7d8(int, void *);
extern float signed_sqrt_8c37f6c0(float);
extern float errno_wrap_8c130334(float, float);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void call_8c0dfa54(Object *, int, Frame *);
extern float call_8c12c714(float);
extern int operation_8c0dc92c(int, int, int);
extern int rand(void);
int operation_8c0e0428(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    float v1;
    float v3;
    float v5;
    float v4;
    float v6;
    int v7;
    float v2;
    int v9;
    int v13;
    int v14;
    float v18;
    int v19;
    int v20;
    int v24;
    int v25;
    int v29;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    int t8;
    int t9;
    int t10;
    float t11;
    float t12;
    int t13;
    int t14;
    float t15;
    float t16;
    float t17;
    float t18;
    float t19;
    float t20;
    int t21;
    float t22;
    float t23;
    int t24;
    call_8c0e0060(o, (void *)(&(&frame)->f08), 0);
    t17 = call_8c38d7d8((int)(*(int *)0x8c46ee80 + 0x90), (void *)(&(&frame)->f08));
    v1 = (float)1000.0f;
    v2 = (float)(v1 / t17);
    v3 = (float)a1->f00;
    v3 = (float)(v3 + o->f50 * 0.5f);
    v4 = (float)(v3 - o->fa0);
    v5 = (float)a1->f04;
    v5 = (float)(v5 + o->f54 * 0.5f);
    v6 = (float)(v5 - o->fa4);
    t1 = signed_sqrt_8c37f6c0(v4 * v4 + v6 * v6);
    if (3.0f > t1) {
        v9 = (int)0xd400;
    } else {
        t18 = errno_wrap_8c130334(v6, v4);
        v7 = (int)(int)(t18 * 65536.0f / 6.28318405f);
        t2 = njCos_8c38c154(v7);
        (&frame)->f00 = v4 - v2 * t2;
        t3 = njSin_8c37eb0c(v7);
        (&frame)->f04 = v6 - v2 * t3;
        (&frame)->f00 = (&frame)->f00 / (o->f50 + 19.0f);
        (&frame)->f04 = (&frame)->f04 / (o->f54 + 13.0f);
        t19 = errno_wrap_8c130334((&frame)->f04, (&frame)->f00);
        v9 = (int)(int)(t19 * 65536.0f / 6.28318405f);
    }
    call_8c0dfa54(o, v9, (Frame *)((&frame)));
    t20 = errno_wrap_8c130334((&frame)->f04, (&frame)->f00);
    v13 = (int)(int)(t20 * 65536.0f / 6.28318405f);
    t4 = njCos_8c38c154(v13);
    (&frame)->f00 += v2 * t4;
    t5 = njSin_8c37eb0c(v13);
    (&frame)->f04 += v2 * t5;
    t6 = signed_sqrt_8c37f6c0((&frame)->f00 * (&frame)->f00 + (&frame)->f04 * (&frame)->f04);
    t7 = call_8c12c714(t1 - t6);
    if (10.0f > t7) {
        return 0;
    }
    a2->f00 = o->fa0 + (&frame)->f00 - o->f40 * 0.5f;
    a2->f04 = o->fa4 + (&frame)->f04 - o->f44 * 0.5f;
    v14 = (int)0;
    if ((*(float *)0x8c4e2ba8 + 20.0f) > a2->f00) {
        a2->f00 = *(float *)0x8c4e2ba8 + 20.0f;
        v14 = (int)1;
    }
    if ((*(float *)0x8c4e2bb0 - 20.0f - o->f50 * 1.0f) < a2->f00) {
        a2->f00 = *(float *)0x8c4e2bb0 - 20.0f - o->f50 * 1.0f;
        v14 = (int)1;
    }
    if ((*(float *)0x8c4e2bac + 40.0f) > a2->f04) {
        a2->f04 = *(float *)0x8c4e2bac + 40.0f;
        v14 = (int)1;
    }
    if ((*(float *)0x8c4e2bb4 - 40.0f - o->f54 * 1.0f) < a2->f04) {
        a2->f04 = *(float *)0x8c4e2bb4 - 40.0f - o->f54 * 1.0f;
        v14 = (int)1;
    }
    if (v14 != 0) {
        return 0;
    }
    t8 = operation_8c0dc92c((int)o, (int)a2, (int)(&o->f40));
    if (t8 == 0) {
        return 1;
    }
    t21 = rand();
    v18 = (float)((float)t21 / 32768.0f);
    (&frame)->f00 += (v4 - (&frame)->f00) * v18;
    (&frame)->f04 += (v6 - (&frame)->f04) * v18;
    a2->f00 = o->fa0 + (&frame)->f00 - o->f40 * 0.5f;
    a2->f04 = o->fa4 + (&frame)->f04 - o->f44 * 0.5f;
    t9 = operation_8c0dc92c((int)o, (int)a2, (int)(&o->f40));
    if (t9 == 0) {
        return 1;
    }
    t10 = rand();
    call_8c0dfa54(o, (int)((int)((float)v13 + ((float)t10 / 32768.0f * 32768.0f - 16384.0f))), (Frame *)((&frame)));
    t22 = errno_wrap_8c130334((&frame)->f04, (&frame)->f00);
    v19 = (int)(int)(t22 * 65536.0f / 6.28318405f);
    t11 = njCos_8c38c154(v19);
    (&frame)->f00 += v2 * t11;
    t12 = njSin_8c37eb0c(v19);
    (&frame)->f04 += v2 * t12;
    a2->f00 = o->fa0 + (&frame)->f00 - o->f40 * 0.5f;
    a2->f04 = o->fa4 + (&frame)->f04 - o->f44 * 0.5f;
    v20 = (int)0;
    if ((*(float *)0x8c4e2ba8 + 20.0f) > a2->f00) {
        a2->f00 = *(float *)0x8c4e2ba8 + 20.0f;
        v20 = (int)1;
    }
    if ((*(float *)0x8c4e2bb0 - 20.0f - o->f50 * 1.0f) < a2->f00) {
        a2->f00 = *(float *)0x8c4e2bb0 - 20.0f - o->f50 * 1.0f;
        v20 = (int)1;
    }
    if ((*(float *)0x8c4e2bac + 40.0f) > a2->f04) {
        a2->f04 = *(float *)0x8c4e2bac + 40.0f;
        v20 = (int)1;
    }
    if ((*(float *)0x8c4e2bb4 - 40.0f - o->f54 * 1.0f) < a2->f04) {
        a2->f04 = *(float *)0x8c4e2bb4 - 40.0f - o->f54 * 1.0f;
        v20 = (int)1;
    }
    if (v20 != 0) {
        return 0;
    }
    t13 = operation_8c0dc92c((int)o, (int)a2, (int)(&o->f40));
    if (t13 == 0) {
        return 1;
    }
    t14 = rand();
    call_8c0dfa54(o, (int)((int)((float)t14 / 32768.0f * 65536.0f)), (Frame *)((&frame)));
    t23 = errno_wrap_8c130334((&frame)->f04, (&frame)->f00);
    v24 = (int)(int)(t23 * 65536.0f / 6.28318405f);
    t15 = njCos_8c38c154(v24);
    (&frame)->f00 += v2 * t15;
    t16 = njSin_8c37eb0c(v24);
    (&frame)->f04 += v2 * t16;
    a2->f00 = o->fa0 + (&frame)->f00 - o->f40 * 0.5f;
    a2->f04 = o->fa4 + (&frame)->f04 - o->f44 * 0.5f;
    v25 = (int)0;
    if ((*(float *)0x8c4e2ba8 + 20.0f) > a2->f00) {
        a2->f00 = *(float *)0x8c4e2ba8 + 20.0f;
        v25 = (int)1;
    }
    if ((*(float *)0x8c4e2bb0 - 20.0f - o->f50 * 1.0f) < a2->f00) {
        a2->f00 = *(float *)0x8c4e2bb0 - 20.0f - o->f50 * 1.0f;
        v25 = (int)1;
    }
    if ((*(float *)0x8c4e2bac + 40.0f) > a2->f04) {
        a2->f04 = *(float *)0x8c4e2bac + 40.0f;
        v25 = (int)1;
    }
    if ((*(float *)0x8c4e2bb4 - 40.0f - o->f54 * 1.0f) < a2->f04) {
        a2->f04 = *(float *)0x8c4e2bb4 - 40.0f - o->f54 * 1.0f;
        v25 = (int)1;
    }
    if (v25 == 0) {
        t24 = operation_8c0dc92c((int)o, (int)a2, (int)(&o->f40));
        v29 = (int)(t24 == 0);
        return (int)(v29);
    }
    return 0;
}
