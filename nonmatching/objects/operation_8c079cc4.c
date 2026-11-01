/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c079cc4
 * function: operation_8c079cc4
 * language: c
 * reference size: 1184 bytes
 * compiled size: 1184 bytes (+0.0%)
 * differing lines: 22 of 403 reference instruction lines
 * differing bytes: 18
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_40c Arg0_40c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x20e];
    short f30a;
    char unknown30c[0x28];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x3a];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x8];
    float f3b0;
    char unknown3b4[0x2];
    short f3b6;
    char unknown3b8[0x14];
    int f3cc;
};
struct S_g8c469a8c {
    char unknown0[0x18];
    int f18;
};
struct Arg0_40c {
    char unknown0[0x4];
    short f04;
};
extern S_g8c469a8c *g_8c469a8c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void play_se_8c05fbf8(int, void *, int, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TeneFakeTecThunderEff_ctor_8c08a590(void *, int, int, int, int);
extern void create_effect_777c(void *, int);
extern void call_8c0c3128(Object *, float);
extern void call_8c18f690(int, Object *, void *, int);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
extern void operation_8c027090(int);
void operation_8c079cc4(Object *o)
{
    int v8;
    char *v9;
    int t1;
    int v5;
    int v6;
    int v7;
    int v18;
    int v19;
    int v23;
    int v27;
    int v28;
    int v29;
    int v33;
    int v4;
    int t2;
    switch (o->f398) {
    case 0:
        o->f34 |= 0x200000;
        o->f3a4 &= -0x480001;
        o->f3cc = 0;
        o->ff0 = 3;
        play_se_8c05fbf8(0x3002f, (void *)(((char *)o + 0x3c)), 0, 0);
        play_se_8c05fbf8(0x30029, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f398 = 1;
        break;
    case 1:
        if (!(5.0f > o->ff8)) {
            o->f3b0 = 1.60888886f;
        }
        if (o->ff0 != 4) {
            goto L_8c07a104;
        }
        o->f3a4 |= 0x200000;
        o->f3b6 = g_8c469a8c->f18;
        o->f398 = 2;
        play_se_8c05fbf8(0x3002a, (void *)(((char *)o + 0x3c)), 0, 0);
        v4 = (int)0x34c;
        v5 = (int)0x3dc;
        v6 = (int)0x3d0;
        v7 = (int)0x40c;
        v8 = (int)0;
        goto L_8c079e5c;
        v9 = (char *)v8;
L_8c079e20:;
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v4);
        if (t1 != 0) {
            TeneFakeTecThunderEff_ctor_8c08a590((void *)t1, (int)o, (int)((int)o + v6), (int)((int)o + (int)(v9) * 0xc + v5), 2);
        }
        *(int *)((char *)((char *)((int)o + v7) + 0x0) + ((int)(v9) << 2)) = (int)(t1);
        v8 = (int)(v9 + 1);
L_8c079e5c:;
        v9 = (char *)v8;
        if (4 > v8) {
            goto L_8c079e20;
        }
        break;
    case 2:
        o->f3b0 = 1.60888886f;
        if ((short)--*(short *)((char *)o + 0x3b6) > 0) {
            goto L_8c07a104;
        }
        o->f3b6 = 4;
        *(int *)((char *)o + 0x3a4) &= -0x200001;
        v23 = (int)0;
        goto L_8c079ee4;
        v18 = (int)0;
L_8c079ecc:;
        v19 = (int)(v18 << 2);
        if (*(int *)((char *)((char *)o + 0x40c) + (v19)) != 0) {
            (*(Arg0_40c **)((char *)((char *)o + 0x40c) + (v19)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x40c) + (v19)) = 0;
        }
        v23 = (int)(v18 + 1);
L_8c079ee4:;
        v18 = (int)v23;
        if (4 > v23) {
            goto L_8c079ecc;
        }
        o->f398 = 3;
        if (((o->f3a4 & 0x4000000)) != 0) {
            create_effect_777c((void *)(((char *)o + 0x3d0)), 0xd8);
            goto L_8c07a104;
        }
        create_effect_777c((void *)(((char *)o + 0x3d0)), 0xd2);
        break;
    case 3:
        o->f3b0 = 1.60888886f;
        if ((short)--*(short *)((char *)o + 0x3b6) > 0) {
            goto L_8c07a104;
        }
        o->f3cc += 1;
        o->f3b6 = 0xf;
        o->f398 = 4;
        call_8c0c3128(o, 200.0f);
        if ((o->f354 & 0xffff) == 0xffff) {
            goto L_8c07a104;
        }
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x10c);
        if (t2 != 0) {
            call_8c18f690(t2, o, (void *)(((char *)o + 0x3d0)), (int)((int)o->f334 + 0x324));
        }
        play_se_8c05fbf8(0x3002b, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 4:
        o->f3b0 = 1.60888886f;
        if ((short)--o->f3b6 > 0) {
            goto L_8c07a104;
        }
        o->f398 = 5;
        o->ff0 = 0xd;
        o->f3b0 = 0.0f;
        break;
    case 5:
        if (o->ff0 != 0) {
            goto L_8c07a104;
        }
        if (2 > o->f3cc) {
            o->f398 = 1;
            o->ff0 = 3;
            goto L_8c07a104;
        }
        if (((o->f3a4 & 1)) != 0) {
            goto L_8c07a104;
        }
        v27 = (int)o->f30a;
        if (v27 == 1) {
            goto L_8c07a104;
        }
        o->f39c = (int)(v27);
        o->f390 = 1;
        break;
    case -1:
        o->f3a4 &= -0x200001;
        o->f34 &= -0x200001;
        v33 = (int)0;
        goto L_8c07a100;
        v28 = (int)0;
L_8c07a0e8:;
        v29 = (int)(v28 << 2);
        if (*(int *)((char *)((char *)o + 0x40c) + (v29)) != 0) {
            (*(Arg0_40c **)((char *)((char *)o + 0x40c) + (v29)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x40c) + (v29)) = 0;
        }
        v33 = (int)(v28 + 1);
L_8c07a100:;
        v28 = (int)v33;
        if (4 > v33) {
            goto L_8c07a0e8;
        }
    }
L_8c07a104:;
    o->f34 &= -0x40001;
    operation_8c01c5f0(o);
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    operation_8c027090((int)o);
}
