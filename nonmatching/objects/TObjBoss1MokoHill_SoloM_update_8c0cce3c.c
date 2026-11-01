/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cce3c
 * function: TObjBoss1MokoHill_SoloM_update_8c0cce3c
 * language: c
 * reference size: 780 bytes
 * compiled size: 780 bytes (+0.0%)
 * differing lines: 88 of 328 reference instruction lines
 * differing bytes: 87
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
typedef struct S_g8c46fa68 S_g8c46fa68;
typedef struct S_g8c46fa6c S_g8c46fa6c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct S_vv34 S_vv34;
typedef struct Block_g8c46fa68_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_g8c46fa68_0;
struct Object {
    char unknown0[0x10];
    Arg0_10 *f10;
    char unknown14[0xc];
    int f20;
    Vector3 f24;
    float f30;
    float f34;
    float f38;
    char unknown3c[0x4];
    int f40;
};
struct S_g8c46fa68 {
    Block_g8c46fa68_0 f00;
};
struct S_g8c46fa6c {
    int f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv34 {
    char unknown0[0x8];
    float f08;
    int f0c;
};
extern int g_8c46fa60;
extern int g_8c46fa64;
extern S_g8c46fa68 *g_8c46fa68;
extern S_g8c46fa6c *g_8c46fa6c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern float operation_8c07c454(S_g8c46fa68 *);
extern float squared_distance_xz(void *, void *);
extern float signed_sqrt_8c37f6c0(float);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjBoss1MokoHill_Solo_ctor_8c0cd2ac(int, void *, int);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern int rand(void);
extern void normalize_xz_checked(void *);
extern void initialize_effect_node_8c07c980(void *, int, int, int, int);
void TObjBoss1MokoHill_SoloM_update_8c0cce3c(Object *o)
{
    Frame frame;
    float v1;
    char *v17;
    float v18;
    float v19;
    int v22;
    float v20;
    float v21;
    int v32;
    S_vv34 *v34;
    int v33;
    float t1;
    float t2;
    float t3;
    int t4;
    int t5;
    float t6;
    float t7;
    int t8;
    int t9;
    int t10;
    float t11;
    float t12;
    int t13;
    if (o->f20 == 0) {
        return;
    }
    o->f34 += 0.5f;
    if (o->f34 > 0.0f) {
        o->f34 = 0.0f;
    }
    t1 = operation_8c07c454(g_8c46fa68);
    o->f38 = o->f34;
    if (t1 != 0.0f && 95.0f > t1) {
        o->f38 = -30.0f - t1 * -0.315789461f;
        v1 = (float)o->f34;
        if (o->f38 > v1) {
            o->f38 = v1;
        }
    }
    if (0.0f > o->f38) {
    } else {
        t2 = squared_distance_xz((void *)g_8c46fa68, (void *)(&o->f24));
        t3 = signed_sqrt_8c37f6c0(t2);
        o->f30 += t3;
        *(Vector3 *)&o->f24 = *(Vector3 *)&g_8c46fa68->f00;
        if (!(10.0f > o->f30)) {
            o->f30 = 0.0f;
            if (o->f40 != 0) {
                t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x54);
                if (t4 == 0) {
                    goto L_8c0ccf36;
                }
                TObjBoss1MokoHill_Solo_ctor_8c0cd2ac(t4, (void *)(o->f10), 0);
            } else {
                t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x54);
                if (t5 != 0) {
                    TObjBoss1MokoHill_Solo_ctor_8c0cd2ac(t5, (void *)(o->f10), 0x1e);
                }
            }
        }
L_8c0ccf36:;
        v17 = (char *)g_8c46fa6c->f00;
        t12 = njCos_8c38c154((int)(v17));
        t11 = njSin_8c37eb0c((int)(v17));
        v18 = (float)g_8c46fa68->f00.f00;
        v19 = (float)g_8c46fa68->f00.f08;
        v20 = (float)(v18 + t11 * 120.0f);
        v21 = (float)(v19 + t12 * 120.0f);
        t13 = rand();
        v22 = (int)(v17 + (int)(((float)t13 / 32768.0f - 0.5f) * 2.0f * 10000.0f));
        t7 = njCos_8c38c154(v22);
        t6 = njSin_8c37eb0c(v22);
        (&frame)->f0c = g_8c46fa68->f00.f00 + t6 * 50.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = g_8c46fa68->f00.f08 + t7 * 50.0f;
        (&frame)->f00 = (&frame)->f0c - v20;
        (&frame)->f08 = (&frame)->f14 - v21;
        normalize_xz_checked((void *)(&frame));
        (&frame)->f00 *= 1.5f;
        (&frame)->f08 *= 1.5f;
        t8 = rand();
        (&frame)->f04 = (float)t8 / 32768.0f * 3.0f + 6.0f;
        t9 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x58);
        if (t9 != 0) {
            initialize_effect_node_8c07c980((void *)t9, (int)(o->f10), (int)(&(&frame)->f0c), (int)(&frame), 1);
        }
    }
    v32 = (int)g_8c46fa64;
    v33 = (int)0;
    v34 = (S_vv34 *)v32;
    while (g_8c46fa60 > v33) {
        switch (v34->f0c) {
        case 0:
            if (-8.0f > v34->f08) {
                v34->f08 = -8.0f;
                t10 = rand();
                v34->f0c = (int)((float)t10 / 32768.0f * 70.0f) + 2;
                goto L_8c0cd0b0;
            }
            v34->f08 -= 0.2f;
            break;
        case 1:
            if (v34->f08 > 0.0f) {
                v34->f08 = 0.0f;
                v34->f0c = 0;
                goto L_8c0cd0b0;
            }
            v34->f08 += 2.0f;
            break;
        default:
            v34->f0c -= 1;
            break;
        }
L_8c0cd0b0:;
        v34 = (S_vv34 *)((char *)v34 + 16);
        v33 = (int)(v33 + 1);
    }
}
