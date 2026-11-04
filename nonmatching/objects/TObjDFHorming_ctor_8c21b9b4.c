/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21b9b4
 * function: TObjDFHorming_ctor_8c21b9b4
 * language: c
 * reference size: 660 bytes
 * compiled size: 664 bytes (+0.6%)
 * differing lines: 138 of 246 reference instruction lines
 * differing bytes: 380
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjDFHorming.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv18_0 S_vv18_0;
typedef struct S_x32144_0 S_x32144_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x28];
    Vector3 f48;
    char unknown54[0x2d0];
    Vector3 f324;
    char unknown330[0x20];
    unsigned short f350;
    char unknown352[0x2];
    int f354;
    Vector3 f358;
    float f364;
    float f368;
    float f36c;
    float f370;
    char unknown374[0x8];
    int f37c;
    float f380;
    int f384;
    char unknown388[0xc];
    float f394;
};
struct Arg2 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_c8c1794c8 {
    float f00;
    char unknown4[0x24];
    int f28;
};
extern int g_8c336420;
extern int g_8c4703c0;
extern void call_8c043418(Object *);
extern float signed_sqrt_8c37f6c0(void *, float);
extern int rand(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c130334(float, float);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern S_c8c1794c8 *record30_8c1794c8(int);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
Object *TObjDFHorming_ctor_8c21b9b4(Object *o, int a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int v18;
    int v17;
    float v10;
    int v15;
    int v5;
    int v4;
    int v16;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    float t4;
    S_c8c1794c8 *t5;
    S_c8c1794c8 *t6;
    int t7;
    int t8;
    float t9;
    (void)home;
    call_8c043418(o);
    o->dispatch = (void *)0x8c2783a4;
    o->tag = (int)(g_8c336420);
    o->size = 0x39c;
    o->f350 = a3;
    o->f354 = 0x96;
    if (g_8c4703c0 == 3) {
        o->f354 = 0x12c;
    }
    *(Vector3 *)&o->f358 = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f48 = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f358 = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f324 = *(Vector3 *)&a2->f00;
    t3 = signed_sqrt_8c37f6c0((void *)((void *)0x8c37f6c0), 1.08f);
    t8 = rand();
    t1 = lookup_low_id((int)(o->f350 & 0xffff));
    if (t1 != 0) {
        v4 = (int)0;
    } else {
        t9 = call_8c130334(t1->f3c - 10000.0f, t1->f44);
        v5 = (int)((int)(((float)t8 / 32768.0f - 0.5f) * 16384.0f) + (int)(t9 * 65536.0f / 6.28318405f));
        v4 = (int)v5;
    }
    t2 = njSin_8c37eb0c(v4);
    o->f364 = t2 * 1.2f / t3;
    t4 = njCos_8c38c154(v4);
    o->f36c = t4 * 1.2f / t3;
    o->f368 = -6.0f / t3;
    o->f370 = 6.0f;
    t5 = record30_8c1794c8(0x38);
    o->f37c = (int)(t5->f28);
    t6 = record30_8c1794c8(0x38);
    o->f380 = t6->f00;
    v10 = (float)o->f380;
    if (0.0f > v10 || v10 > 1.0f) {
        o->f380 = 0.5f;
    } else {
    }
    o->f394 = o->f380 * -50.0f + 60.0f;
    v15 = (int)0x324;
    v17 = (int)0;
    v16 = (int)0x374;
    while (2 > v17) {
        v18 = (int)(v17 << 2);
        t7 = create_effect_769c((void *)((int)o + v15), (int)(*(S_vv18_0 **)((char *)((char *)v18 + 0x0) + ((int)((void *)0x8c336424)))));
        *(int *)((char *)((char *)((int)o + v16) + 0x0) + (v18)) = (int)(t7);
        if (t7 != 0) {
            set_effect_bits((void *)(*(S_x32144_0 **)((char *)((char *)((int)o + v16) + 0x0) + (v18))), (unsigned short)0x40);
        }
        v17 = (int)(v17 + 1);
    }
    o->f384 = 0;
    return o;
}
