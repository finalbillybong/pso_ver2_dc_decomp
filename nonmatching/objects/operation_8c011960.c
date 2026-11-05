/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c011960
 * function: operation_8c011960
 * language: c
 * reference size: 564 bytes
 * compiled size: 568 bytes (+0.7%)
 * differing lines: 106 of 246 reference instruction lines
 * differing bytes: 474
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct S_L8c46f620 S_L8c46f620;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv40 S_vv40;
typedef struct S_vv40_0 S_vv40_0;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv7 S_vv7;
typedef struct S_vv9 S_vv9;
typedef struct Block_L8c46f620_0 {
    float f00;
    float f04;
    float f08;
} Block_L8c46f620_0;
struct S_vv1 {
    int f00;
    S_vv1_4 *f04;
};
struct Frame {
    int f04;
    float f08;
    float f0c;
    float f10;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv4_0 {
    int f00;
    int f04;
};
struct S_vv7 {
    float f00;
    float f04;
    float f08;
    char unknownc[0x34];
    int f40;
};
struct Object {
    float tag;
    float f04;
    float f08;
};
struct S_L8c46f5a0 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c46f620 {
    Block_L8c46f620_0 f00;
};
struct S_vv2 {
    Vector3 f00;
    Vector3 f0c;
    int f18;
    S_vv7 *f1c;
};
struct S_vv9 {
    Vector3 f00;
};
struct S_vv40 {
    S_vv40_0 *f00;
};
extern S_L8c46f5a0 g_8c46f5a0;
extern S_L8c46f620 g_8c46f620;
extern void subtract_vector_components(void *, void *, void *);
extern void njScalor_8c37e480(void *);
extern float call_8c3845f0(void *, S_vv9 *);
extern void call_8c38a8e8(void *, void *, void *);
extern void operation_8c011e8c(S_vv7 *, int);
extern void operation_8c011e94(void *, void *);
extern void operation_8c011e90(S_vv1 *);
int operation_8c011960(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    int *home2 = &a2;
    S_vv9 *v9;
    S_vv4 *v4;
    int v6;
    S_vv7 *v7;
    int v34;
    float v10;
    float v3;
    S_vv2 *v2;
    S_vv1 *v1;
    int v5;
    S_vv40 *v40;
    int v8;
    int v33;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    (void)home2;
    v1 = (S_vv1 *)(void *)0x8c417f80;
    v1->f00 = 0;
    v2 = (S_vv2 *)v1->f04;
    subtract_vector_components((void *)o, (void *)a1, (void *)(&(&frame)->f08));
    njScalor_8c37e480((void *)(&(&frame)->f08));
    v3 = (float)2.0f;
    while (*(int *)a3 != 0) {
        v4 = *(S_vv4 **)a3;
        (&frame)->f04 = (int)(v4->f00->f00);
        v7 = (S_vv7 *)v4->f00->f04;
        for (v8 = 0; (&frame)->f04 > v8; v8++) {
            if (((v7->f40 & a2)) != 0) {
                v9 = (S_vv9 *)((int)v7 + 0x24);
                t1 = call_8c3845f0((void *)(&(&frame)->f08), v9);
                if (!(-1e-07f > t1)) {
                } else {
                    (&g_8c46f5a0)->f00 = o->tag - v7->f00;
                    (&g_8c46f5a0)->f04 = o->f04 - v7->f04;
                    (&g_8c46f5a0)->f08 = o->f08 - v7->f08;
                    t2 = call_8c3845f0((void *)((void *)&g_8c46f5a0), v9);
                    if (t2 > 1e-07f) {
                        v10 = (float)(t2 / t1);
                        v10 = (float)-v10;
                        if (!(v10 > 1.0f) && !(0.0f > v10)) {
                            (&g_8c46f620)->f00.f00 = (&frame)->f08 * v10 + o->tag;
                            (&g_8c46f620)->f00.f04 = (&frame)->f0c * v10 + o->f04;
                            (&g_8c46f620)->f00.f08 = (&frame)->f10 * v10 + o->f08;
                            subtract_vector_components((void *)((void *)&g_8c46f620), (void *)v7, (void *)((void *)&g_8c46f5a0));
                            subtract_vector_components((void *)((void *)&g_8c46f620), (void *)((int)v7 + 0xc), (void *)((void *)0x8c46f5c0));
                            call_8c38a8e8((void *)((void *)&g_8c46f5a0), (void *)((void *)0x8c46f5c0), (void *)((void *)0x8c46f600));
                            t3 = call_8c3845f0((void *)((void *)0x8c46f600), v9);
                            if (!(0.0f > t3)) {
                                subtract_vector_components((void *)((void *)&g_8c46f620), (void *)((int)v7 + 0x18), (void *)((void *)0x8c46f5e0));
                                call_8c38a8e8((void *)((void *)0x8c46f5c0), (void *)((void *)0x8c46f5e0), (void *)((void *)0x8c46f600));
                                t4 = call_8c3845f0((void *)((void *)0x8c46f600), v9);
                                if (!(0.0f > t4)) {
                                    call_8c38a8e8((void *)((void *)0x8c46f5e0), (void *)((void *)&g_8c46f5a0), (void *)((void *)0x8c46f600));
                                    t5 = call_8c3845f0((void *)((void *)0x8c46f600), v9);
                                    if (!(0.0f > t5)) {
                                        operation_8c011e8c(v7, 0x33ffffff);
                                        operation_8c011e94((void *)((void *)&g_8c46f620), (void *)((void *)0x8c306048));
                                        if (v3 > v10) {
                                            v1->f00 = 1;
                                            *(Vector3 *)&v2->f00 = *(Vector3 *)&(&g_8c46f620)->f00;
                                            *(Vector3 *)&v2->f0c = *(Vector3 *)&v9->f00;
                                            v2->f18 = (int)(v7->f40);
                                            v2->f1c = v7;
                                            v3 = (float)v10;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            v7 = (S_vv7 *)((int)v7 + 0x44);
        }
        a3 += 4;
    }
    operation_8c011e90(v1);
    return (int)(v1->f00);
}
