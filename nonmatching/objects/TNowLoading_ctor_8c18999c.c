/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18999c
 * function: TNowLoading_ctor_8c18999c
 * language: c
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 56 of 152 reference instruction lines
 * differing bytes: 69
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * class header: src/include/classes/TNowLoading.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46ee84 S_L8c46ee84;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_s30 Arg0_s30;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
    float f30;
    float f34;
    float f38;
};
struct Arg2 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_s30 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    float f10;
    float f14;
    float f18;
};
extern int g_8c319e78;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c46ee84 g_8c46ee84;
extern char gc_8c46ee84[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c0c5094(void *, void *, void *);
extern int create_effect_794c(void *, void *, int, int);
extern int create_effect_7a48(void *, int, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TLoadingCur_ctor_8c189f84(int, Object *, void *);
Object *TNowLoading_ctor_8c18999c(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    Object **home = &o;
    char *v2;
    char *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2721d4;
    o->tag = (int)(g_8c319e78);
    o->size = 0x40;
    *(Vector3 *)&o->f30 = *(Vector3 *)a2;
    (&frame)->f04 = 0;
    (&frame)->f08 = 0;
    (&frame)->f0c = 0;
    (&frame)->f10 = -*(float *)(gc_8c46ee84 + 0xc);
    (&frame)->f14 = -*(float *)(gc_8c46ee84 + 0x10);
    (&frame)->f18 = -*(float *)(gc_8c46ee84 + 0x14);
    call_8c0c5094((void *)(&(&frame)->f10), (void *)(&(&frame)->f04), (void *)(&(&frame)->f0c));
    o->f30 = *(float *)(gc_8c46ee84 + 0x0) + *(float *)(gc_8c46ee84 + 0xc) * 100.0f;
    o->f34 = *(float *)(gc_8c46ee84 + 0x4) + *(float *)(gc_8c46ee84 + 0x10) * 100.0f;
    o->f38 = *(float *)(gc_8c46ee84 + 0x8) + *(float *)(gc_8c46ee84 + 0x14) * 100.0f;
    t1 = create_effect_794c((void *)(&o->f30), (void *)(&(&frame)->f04), 0x13, 1);
    o->f20 = (int)(t1);
    t2 = create_effect_794c((void *)(&o->f30), (void *)(&(&frame)->f04), 0x15, 1);
    o->f24 = (int)(t2);
    t3 = create_effect_7a48((void *)(&o->f30), 0x17, 1);
    o->f28 = (int)(t3);
    t4 = create_effect_7a48((void *)(&o->f30), 0x1d, 1);
    o->f2c = (int)(t4);
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x60);
    if (t5 != 0) {
        TLoadingCur_ctor_8c189f84(t5, o, (void *)(&o->f30));
    }
    return o;
}
