/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bce5c
 * function: TWindowMeseta_ctor_8c1bce5c
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 14 of 95 reference instruction lines
 * differing bytes: 30
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TWindowMeseta.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_6c Arg0_6c;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x34];
    float f68;
    Arg0_6c *f6c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    int f00;
};
struct Arg0_30 {
    int f00;
    Arg0_30_4 *f04;
};
struct S_vv7 {
    char unknown0[0x8];
    float f08;
};
struct S_vv6 {
    char unknown0[0x8];
    float f08;
};
extern int g_8c327ec8;
extern S_g8c467180 *g_8c467180;
extern void initialize_base_8c0db1d0(void *, int);
extern int operation_8c1bd03c(Object *);
extern int operation_8c04b8dc(int);
extern float operation_8c19a09c(float);
extern void call_8c0e2278(S_vv7 *, int, int);
extern void operation_8c0fcd60(S_vv6 *, void *);
Object *TWindowMeseta_ctor_8c1bce5c(Object *o)
{
    Object **home = &o;
    char *v8;
    int v1;
    float v2;
    float v5;
    char *v9;
    S_vv7 *v7;
    S_vv6 *v6;
    int t1;
    int t2;
    float t3;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c327f0c));
    o->dispatch = (void *)0x8c2754dc;
    o->tag = (int)(g_8c327ec8);
    o->size = 0x70;
    v8 = (char *)g_8c467180->f2c->f00;
    v1 = (int)v8;
    t1 = operation_8c1bd03c(o);
    o->f6c = (Arg0_6c *)t1;
    t2 = operation_8c04b8dc(v1);
    v5 = (float)(float)t2;
    if (0.0f > (float)t2) {
        v2 = (float)((float)t2 + 4294967296.0f);
        v5 = (float)v2;
    }
    t3 = operation_8c19a09c(v5 + 72.0f + 9.0f);
    o->f68 = t3;
    v9 = (char *)o->f30->f00;
    v6 = (S_vv6 *)v9;
    v7 = (S_vv7 *)o->f30->f04;
    v7->f08 = o->f68 + 160.0f - 8.0f - v5;
    call_8c0e2278(v7, v1, 0);
    v6->f08 = v7->f08 - 9.0f;
    operation_8c0fcd60(v6, (void *)(o->f6c));
    return o;
}
