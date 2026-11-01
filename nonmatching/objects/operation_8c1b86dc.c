/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b86dc
 * function: operation_8c1b86dc
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 116 of 181 reference instruction lines
 * differing bytes: 318
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c327c3c S_L8c327c3c;
typedef struct S_L8c327c48 S_L8c327c48;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x69328 S_x69328;
typedef struct S_x70304 S_x70304;
typedef struct S_x80560 S_x80560;
typedef struct S_x80896 S_x80896;
typedef struct S_x81344 S_x81344;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_L8c327c48_0 {
    char unknown0[0x8];
    int f08;
} Block_L8c327c48_0;
typedef struct Block_L8c327c3c_0 {
    Block8 f00;
    int f08;
} Block_L8c327c3c_0;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x33c];
    float f3a4;
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    char unknownc[0x4];
    int f10;
    Vector3 f14;
};
struct S_x69328 {
    Vector3 f00;
};
struct S_x70304 {
    Vector3 f00;
};
struct S_L8c327c48 {
    Block_L8c327c48_0 f00;
};
struct S_x80560 {
    Block8 f00;
    int f08;
};
struct S_L8c327c3c {
    Block_L8c327c3c_0 f00;
};
struct S_x80896 {
    float f00;
};
struct S_x81344 {
    float f00;
};
extern S_L8c327c3c g_8c327c3c;
extern S_L8c327c48 g_8c327c48;
extern int signed_angle_delta(int, int);
extern int angle_step(int, int, int);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c1b86dc(Object *o)
{
    Frame frame;
    int v2;
    int v7;
    int v4;
    int v5;
    int v3;
    int v8;
    int v10;
    int t1;
    int t2;
    float t3;
    float t4;
    v2 = (int)(o->f3b4 << 0xc);
    t1 = signed_angle_delta(v2, (int)(o->f3b0 << 0xc));
    t2 = angle_step((int)(o->f64), (int)(-((int)(o->f3a4 * (float)t1) + v2)), 0x888);
    o->f64 = (int)(t2);
    (&frame)->f00 = (int)(o->f3ac);
    (&frame)->f04 = (int)(o->f3a8);
    v3 = (int)0;
    while (2 > v3) {
        v4 = (int)*(int *)((char *)&(&frame)->f00 + (v3 << 2));
        if (v4 != 0x10) {
            if (v4 == 0x11) {
                goto L_8c1b876e;
            }
            v5 = (int)v4;
        } else {
            *(Vector3 *)&((S_x69328 *)(v3 * 0xc + (char *)&(&frame)->f08))->f00 = *(Vector3 *)&(&g_8c327c3c)->f00;
            goto L_8c1b87e4;
L_8c1b876e:;
            *(Vector3 *)&((S_x70304 *)(v3 * 0xc + (char *)&(&frame)->f08))->f00 = *(Vector3 *)&(&g_8c327c48)->f00;
            goto L_8c1b87e4;
            v5 = (int)(&g_8c327c48)->f00.f08;
        }
        v7 = (int)(v3 * 0xc);
        v8 = (int)(v5 << 8);
        *(Block8 *)&((S_x80560 *)(v7 + (char *)&(&frame)->f08))->f00 = *(Block8 *)&(&g_8c327c3c)->f00.f00;
        v10 = (int)(v8 << 4);
        ((S_x80560 *)(v7 + (char *)&(&frame)->f08))->f08 = (int)((&g_8c327c3c)->f00.f08);
        t3 = njSin_8c37eb0c(v10);
        ((S_x80896 *)(v7 + (char *)&(&frame)->f08))->f00 += t3 * -100.0f;
        t4 = njCos_8c38c154(v10);
        ((S_x81344 *)(v7 + (char *)&(&frame)->f10))->f00 += t4 * 100.0f;
L_8c1b87e4:;
        v3 = (int)(v3 + 1);
    }
    *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f14;
    vector_sub_in_place_8c37f6f0((void *)(&o->f3c), (void *)(&(&frame)->f08));
    o->f3c.f00 *= o->f3a4;
    o->f3c.f04 *= o->f3a4;
    o->f3c.f08 *= o->f3a4;
    call_8c3bdf60((void *)(&o->f3c), (void *)(&(&frame)->f08));
}
