/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b9730
 * function: operation_8c0b9730
 * language: c
 * reference size: 708 bytes
 * compiled size: 708 bytes (+0.0%)
 * differing lines: 16 of 284 reference instruction lines
 * differing bytes: 39
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_144 Arg0_144;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    Arg0_5c *f5c;
    char unknown60[0x8];
    float f68;
    char unknown6c[0x8];
    float f74;
    float f78;
    char unknown7c[0x4c];
    short fc8;
    short fca;
    int fcc;
    unsigned short fd0;
    char unknownd2[0x46];
    float f118;
    float f11c;
    float f120;
    float f124;
    float f128;
    int f12c;
    int f130;
    char unknown134[0x10];
    Arg0_144 *f144;
    float f148;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct Arg0_20 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x78e];
    int f7b0;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TEffect_ctor_8c0a0058(Object *);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern void call_8c0c5094(void *, void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051eb8(void *, Object *);
extern void copy_actor_records(void *, void *, int);
Object *operation_8c0b9730(Object *o, int a1, Arg2 *a2, int a3, register int a4)
{
    Object **home = &o;
    float t2;
    int v1;
    int pm5;
    float t1;
    int pm7;
    float t3;
    short v28;
    int t4;
    float pm6;
    float pm10;
    short pm11;
    void *pm12;
    short pm8;
    TEffect_ctor_8c0a0058(o);
    (void)home;
    o->dispatch = (void *)0x8c266200;
    v1 = 0;
    while (v1 < 0x10) {
        *(int *)((char *)(0x88 + (char *)o) + (v1 << 2)) = 0;
        v1 = v1 + 1;
    }
    o->fd0 = (unsigned short)0xffff;
    o->f24 = a2->f00;
    o->f28 = a2->f04;
    o->f2c = a2->f08;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f78 = 0.0f;
    o->f20 = (Arg0_20 *)a1;
    o->fca = (short)a4;
    pm8 = o->fca;
    pm11 = (short)((int)pm8);
    v28 = (short)(int)(int)pm11;
    if (0 > (int)v28) {
        o->fca = 0;
    } else {
        if (0x1e <= v28) {
            o->fca = (short)0x1e;
        } else {
            o->fca = a4;
        }
    }
    if (!(a4 >= 0)) {
        o->fc8 = 0;
    } else {
        if (a4 >= 0xf) {
            o->fc8 = (short)0xe;
        } else {
            o->fc8 = (short)a4;
        }
    }
    o->fcc = 0;
    o->f30 = 1.0f;
    o->f34 = 1.0f;
    o->f38 = 1.0f;
    o->f3c = 1.0f;
    o->f58 = 0;
    o->f5c = (Arg0_5c *)a3;
    o->f58 = 0;
    pm6 = 30.0f;
    o->f148 = 4.0f;
    o->f68 = 3.0f;
    o->f74 = pm6;
    t1 = njSin_8c37eb0c((void *)(o->f5c));
    o->f4c = t1;
    o->f50 = 0.0f;
    t2 = njCos_8c38c154((void *)(o->f5c));
    o->f54 = t2;
    t3 = njScalor_8c37e480((void *)(&o->f4c));
    if (0.0f != t3) {
        njUnitVector_8c37b630((void *)(&o->f4c));
    }
    call_8c0c5094((void *)(&o->f4c), (void *)(&o->f58), (void *)(((char *)o + 0x60)));
    pm10 = 0.0f;
    o->f118 = 0.0f;
    o->f11c = pm10;
    o->f120 = 0.0f;
    pm7 = (int)o->f20->f20;
    if ((unsigned int)pm7 < (unsigned int)4) {
        pm7 = o->f20->f7b0;
        if (pm7 != 0) {
            pm6 = -10.0f;
            o->f120 = pm6;
        }
    }
    o->f124 = 5.0f;
    o->f128 = 1.0f;
    o->f12c = 1;
    {
        Object *base = o;
        if ((unsigned int)(int)base->f20->f20 < (unsigned int)4) {
            if (!(base->f20->f7b0 == 0)) {
                base->f130 = 0x80007;
                goto L_8c0b9926;
            }
            base->f130 = 0x80207;
        } else {
            base->f130 = 0x80007;
        }
    }
L_8c0b9926:
    ;
    pm5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xe4);
    t4 = pm5;
    if (t4 != 0) {
        operation_8c051eb8((void *)t4, o);
    }
    o->f144 = (Arg0_144 *)t4;
    if (!(0 == o->f144)) {
        pm12 = (void *)(o->f144);
        copy_actor_records(pm12, (void *)(&o->f118), 1);
    }
    return o;
}
