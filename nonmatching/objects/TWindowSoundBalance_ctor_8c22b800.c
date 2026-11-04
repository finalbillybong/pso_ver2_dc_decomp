/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22b800
 * function: TWindowSoundBalance_ctor_8c22b800
 * language: c
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 2 of 131 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TWindowSoundBalance.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_20 S_vv5_20;
typedef struct S_vv9 S_vv9;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    char unknown40[0x28];
    char f68;
    char f69;
    short f6a;
    short f6c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x14];
    S_vv1_20 *f20;
};
struct S_vv5 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x14];
    S_vv5_20 *f20;
};
struct S_vv9 {
    char unknown0[0x3204];
    short f3204;
    char f3206;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c0dc854(void *);
extern int operation_8c04b8dc(void *);
extern void operation_8c0e2328(S_vv1 *, float);
extern void operation_8c22bd14(void *, short);
extern void operation_8c22bd64(void *, int);
Object *TWindowSoundBalance_ctor_8c22b800(Object *o, Arg1 *a1)
{
    Object **home = &o;
    S_vv1 *v1;
    S_vv5 *v5;
    S_vv9 *v9;
    int t1;
    int t2;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3382d4));
    o->dispatch = (void *)0x8c278e10;
    o->tag = (int)(*(int *)0x8c338248);
    o->size = 0x70;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    operation_8c0dc854((void *)o);
    o->f68 = 0;
    o->f69 = 0;
    o->f6a = 1;
    o->f6c = 1;
    v1 = (S_vv1 *)o->f30->f00;
    t1 = operation_8c04b8dc((void *)(v1->f20));
    v1->f08 = 231.0f - (float)(unsigned int)t1 * 0.5f;
    operation_8c0e2328(v1, 1000000.0f);
    v5 = (S_vv5 *)o->f30->f04;
    t2 = operation_8c04b8dc((void *)(v5->f20));
    v5->f08 = 231.0f - (float)(unsigned int)t2 * 0.5f;
    operation_8c0e2328((S_vv1 *)v5, 1000000.0f);
    v9 = (S_vv9 *)*(S_g8c4db9e8 **)0x8c4db9e8;
    if (v9 == 0) {
        operation_8c22bd14((void *)o, 0);
        operation_8c22bd64((void *)o, 0);
    } else {
        operation_8c22bd14((void *)o, v9->f3204);
        operation_8c22bd64((void *)o, (int)(v9->f3206));
    }
    return o;
}
