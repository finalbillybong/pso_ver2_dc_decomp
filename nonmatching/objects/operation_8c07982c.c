/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07982c
 * function: operation_8c07982c
 * language: c
 * reference size: 1176 bytes
 * compiled size: 1176 bytes (+0.0%)
 * differing lines: 26 of 407 reference instruction lines
 * differing bytes: 21
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
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct Object Object;
typedef struct Arg0_3c4 Arg0_3c4;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    int f68;
    char unknown6c[0x70];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x42];
    float f134;
    float f138;
    float f13c;
    char unknown140[0x1d8];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x74];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0xc];
    short f3b4;
    char unknown3b6[0x4];
    short f3ba;
    float f3bc;
    float f3c0;
    Arg0_3c4 *f3c4;
    int f3c8;
};
struct S_vv4 {
    char unknown0[0x18];
    int f18;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_g8c469a8c {
    float f00;
    float f04;
};
extern int g_8c418244;
extern S_g8c469a8c *g_8c469a8c;
extern void operation_8c04a43c(void *, float, void *);
extern void call_8c07a87c(Object *, int, int, float);
extern void operation_8c01c5f0(Object *);
extern void call_8c044410(Object *, void *, float);
extern void call_8c07aff0(Object *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void refresh_follow_effect_8c052180(void *);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
extern void operation_8c027090(int);
void operation_8c07982c(Object *o)
{
    S_vv4 *v4;
    float v5;
    float v6;
    o->f34 &= -0x40001;
    switch (o->f398) {
    case 0:
        *(int *)((char *)o + 0x3a4) &= -0x200001;
        o->f3a4 |= 0x400000;
        if (((o->f3a4 & 0x10000)) != 0) {
            o->f3a4 &= -0x30001;
            o->f13c = 0.0f;
            o->f138 = 0.0f;
            o->f134 = 0.0f;
            o->f320 = 0.0f;
            o->f31c = 0.0f;
            o->f318 = 0.0f;
            o->f398 = 1;
            goto L_8c079c4e;
        }
        o->f34 &= -0x4040001;
        o->f398 = 3;
        break;
    case 1:
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        o->f68 -= 0x1000;
        if (!(o->f68 >= 0)) {
            o->f68 = 0;
        }
        if (((o->f34 & 0x800000)) == 0) {
            goto L_8c079c4e;
        }
        o->f68 = 0;
        o->ff0 = 2;
        o->f398 = 2;
        o->f34 &= -0x4040001;
        v4 = (S_vv4 *)o->fdc;
        v4->f18 &= -5;
        o->fdc->f18 |= 2;
        call_8c07a87c(o, 0xf, 0, 2.2f);
        call_8c07a87c(o, 0xf, 3, 2.0f);
        call_8c07a87c(o, 0xf, 6, 1.8f);
        break;
    case 2:
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        if (o->ff0 != 0) {
            goto L_8c079c4e;
        }
        o->f398 = 3;
        break;
    case 3:
        o->f68 = 0;
        o->fdc->f18 &= -5;
        o->fdc->f18 |= 2;
        operation_8c01c5f0(o);
        if (((o->f3a4 & 0x20000)) != 0) {
            o->f3a4 &= -0x20001;
            o->f3a4 |= 0x80000;
            if (((o->f3a4 & 0x40000)) != 0) {
                o->f3a4 &= -0x40001;
                o->f398 = 4;
                goto L_8c079c4e;
            }
            o->f3b4 = 0;
            o->f398 = 6;
            goto L_8c079c4e;
        }
        o->f3a4 &= -0x80001;
        break;
    case 6:
        o->f64 += 0x555;
        *(short *)((char *)o + 0x3b4) += 1;
        if (!(o->f3b4 >= 4)) {
            goto L_8c079c4e;
        }
        o->f398 = 4;
        break;
    case 4:
        o->f3c4 = (Arg0_3c4 *)o->f64;
        o->f3bc = g_8c469a8c->f00;
        o->f3c0 = 0.0f;
        o->f3c8 = 0;
        o->f3ba = 0;
        o->ff0 = 1;
        o->f398 = 5;
        o->f68 = 0;
        o->fdc->f18 &= -5;
        o->fdc->f18 |= 2;
    case 5:
        operation_8c01c5f0(o);
        call_8c044410(o, (void *)(o->f3c4), o->f3bc);
        call_8c07aff0(o);
        o->f3c0 += o->f3bc;
        v5 = (float)(o->f3bc + -0.2f);
        if (v5 > 0.5f) {
            v6 = (float)v5;
        } else {
            v6 = (float)0.5f;
        }
        o->f3bc = v6;
        if (!(o->f3c0 < g_8c469a8c->f04)) {
            o->f3a4 &= -0x80001;
            o->f398 = 3;
        }
        call_8c05fd7c(0x30028, o, (void *)(((char *)o + 0x3c)), 0, 0);
        if (o->f3c8 > 0) {
            o->f3c8 -= 1;
            if (((o->fdc->f18 & 0x600000)) != 0) {
                o->f3c4 = (Arg0_3c4 *)((int)o->f3c4 + 0x4000);
                o->f3c8 = 5;
            }
        }
        if (((g_8c418244 & 2)) == 0) {
            call_8c07a87c(o, 0xf, 0, 1.5f);
        }
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    case -1:
        break;
    }
L_8c079c4e:;
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    operation_8c027090((int)o);
}
