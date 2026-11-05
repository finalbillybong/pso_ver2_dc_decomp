/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b99f4
 * function: operation_8c0b99f4
 * language: c
 * reference size: 756 bytes
 * compiled size: 760 bytes (+0.5%)
 * differing lines: 96 of 306 reference instruction lines
 * differing bytes: 592
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
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
    int f5c;
    int f60;
    char unknown64[0x4];
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
struct Arg3 {
    float f00;
    float f04;
    float f08;
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
extern float errno_wrap_8c130334(float, float);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern void call_8c0c5094(void *, void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051eb8(void *, Object *);
extern void copy_actor_records(void *, void *, int);
Object *operation_8c0b99f4(Object *o, int a1, Arg2 *a2, Arg3 *a3, register int a4)
{
    Object **home = &o;
    int v1;
    int v4;
    float v5;
    float v7;
    float v8;
    float v6;
    float v9;
    short v37;
    float v10;
    float t1;
    float t2;
    int t3;
    (void)home;
    TEffect_ctor_8c0a0058(o);
    o->dispatch = (void *)0x8c266200;
    v4 = (int)0;
    goto L_8c0b9a32;
    v1 = (int)0;
L_8c0b9a26:;
    *(int *)((char *)((char *)o + 0x88) + (v1 << 2)) = 0;
    v4 = (int)(v1 + 1);
L_8c0b9a32:;
    v1 = (int)v4;
    if (0x10 > v4) {
        goto L_8c0b9a26;
    }
    o->fd0 = 0xffff;
    v5 = (float)a3->f00;
    v6 = (float)(v5 - a2->f00);
    v7 = (float)a3->f08;
    v8 = (float)a3->f04;
    v9 = (float)(v7 - a2->f08);
    v10 = (float)(v8 - a2->f04);
    t1 = errno_wrap_8c130334(v6, v9);
    o->f24 = a2->f00;
    o->f28 = a2->f04;
    o->f2c = a2->f08;
    o->f58 = 0;
    o->f5c = (int)(t1 * 65536.0f / 6.28318405f);
    o->f60 = 0;
    o->f148 = 4.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f78 = 0.0f;
    o->f20 = (Arg0_20 *)a1;
    o->fca = a4;
    v37 = (short)o->fca;
    if (!(v37 >= 0)) {
        o->fca = 0;
    } else {
        if (v37 >= 0x1e) {
            o->fca = 0x1e;
        } else {
            o->fca = a4;
        }
    }
    if (!(a4 >= 0)) {
        o->fc8 = 0;
    } else {
        if (a4 >= 0xf) {
            o->fc8 = 0xe;
        } else {
            o->fc8 = a4;
        }
    }
    o->fcc = 0;
    o->f30 = 1.0f;
    o->f34 = 1.0f;
    o->f38 = 1.0f;
    o->f3c = 1.0f;
    o->f68 = 3.0f;
    o->f74 = 30.0f;
    o->f4c = v6;
    o->f50 = v10;
    o->f54 = v9;
    t2 = njScalor_8c37e480((void *)(&o->f4c));
    if (t2 != 0.0f) {
        njUnitVector_8c37b630((void *)(&o->f4c));
    }
    call_8c0c5094((void *)(&o->f4c), (void *)(&o->f58), (void *)(&o->f60));
    o->f118 = 0.0f;
    o->f11c = 0.0f;
    o->f120 = 0.0f;
    if ((unsigned int)4 > (unsigned int)o->f20->f20 && o->f20->f7b0 != 0) {
        o->f120 = -10.0f;
    }
    o->f124 = 5.0f;
    o->f128 = 1.0f;
    o->f12c = 1;
    if ((unsigned int)4 > (unsigned int)o->f20->f20) {
        if (o->f20->f7b0 != 0) {
            o->f130 = 0x80007;
            goto L_8c0b9c10;
        }
        o->f130 = 0x80207;
    } else {
        o->f130 = 0x80007;
    }
L_8c0b9c10:;
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xe4);
    if (t3 != 0) {
        operation_8c051eb8((void *)t3, o);
    }
    o->f144 = (Arg0_144 *)t3;
    if (o->f144 != 0) {
        copy_actor_records((void *)(o->f144), (void *)(&o->f118), 1);
    }
    return o;
}
