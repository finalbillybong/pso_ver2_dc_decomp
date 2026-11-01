/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c023f3c
 * function: operation_8c023f3c
 * language: c
 * reference size: 436 bytes
 * compiled size: 432 bytes (-0.9%)
 * differing lines: 72 of 182 reference instruction lines
 * differing bytes: 404
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct S_vv16 S_vv16;
typedef struct S_vv18 S_vv18;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x362];
    short f384;
    char unknown386[0x842];
    Arg0_bc8 *fbc8;
};
struct Frame {
    int f00;
    char unknown4[0x348];
};
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_bc8 {
    char unknown0[0x1ac];
    int f1ac;
    int f1b0;
};
struct S_vv16 {
    int f00;
};
struct S_vv18 {
    char unknown0[0x14];
    int f14;
};
extern S_g8c4d97e0 *g_8c4d97e0;
void operation_8c023f3c(Object *o)
{
    Frame frame;
    int v2;
    S_vv3 *v3;
    int v1;
    S_vv6 *v6;
    int v15;
    S_vv16 *v16;
    int v17;
    int v19;
    short v20;
    S_vv18 *v18;
    int v23;
    int v24;
    int v25;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (o->fbc8 == 0) {
    } else {
        (&frame)->f00 = 0;
        v2 = (int)0;
        v1 = (int)-1;
        while (0x1e > v2) {
            v3 = (S_vv3 *)((char *)(v2 * 0x1c + (int)(&frame)) + 4);
            v3->f00 = 0;
            v3->f01 = v1;
            v3->f04 = 0;
            v3->f03 = 0;
            v3->f02 = 0;
            ((void (*)(void *))0x8c1c7dd4)((void *)((int)v3 + 8));
            v2 = (int)(v2 + 1);
        }
        (&frame)->f00 = o->fbc8 == 0 ? 0 : ((int (*)(Arg0_bc8 *, void *))0x8c16ac98)(o->fbc8, ((char *)(&frame) + 0x4));
        ((void (*)(Arg0_bc8 *, Object *))0x8c16a2fc)(o->fbc8, o);
        v6 = (S_vv6 *)o->fbc8;
        v6->f04 |= 1;
        o->fbc8 = (Arg0_bc8 *)0;
        if (o->fbc8 == 0) {
            t1 = ((int (*)(void *, int))0x8c122700)(g_8c4d97e0, 0x1b4);
            if (t1 != 0) {
                ((void (*)(int, Object *))0x8c16a014)(t1, o);
            }
            o->fbc8 = (Arg0_bc8 *)t1;
        }
        t2 = ((int (*)(void *, int))0x8c122700)(g_8c4d97e0, 0x24);
        if (t2 != 0) {
            ((void (*)(int, Arg0_bc8 *))0x8c1694cc)(t2, o->fbc8);
        }
        o->fbc8->f1ac = (int)(t2);
        t3 = ((int (*)(void *, int))0x8c122700)(g_8c4d97e0, 0x20);
        if (t3 != 0) {
            ((void (*)(int, Object *))0x8c0330e4)(t3, o);
        }
        o->fbc8->f1b0 = (int)(t3);
        v15 = (int)0;
        v16 = (S_vv16 *)((char *)o + 0xbcc);
        while (0xd > v15) {
            v16->f00 = 0;
            v15 = (int)(v15 + 1);
            v16 = (S_vv16 *)((char *)v16 + 4);
        }
        v17 = (int)(&frame)->f00;
        if (((char *)(&frame) + 0x4) != 0) {
            v18 = (S_vv18 *)((char *)(&frame) + 0x4);
            v19 = (int)0;
            while (v17 > v19) {
                v20 = (short)o->f20;
                t4 = ((int (*)(int))0x8c194d60)(v20);
                v18->f14 = (int)(t4);
                v19 = (int)(v19 + 1);
                v18 = (S_vv18 *)((char *)v18 + 28);
            }
            v1 = (int)v20;
            v2 = (int)v19;
        }
        v23 = (int)(&frame)->f00;
        if (((char *)(&frame) + 0x4) != 0) {
            o->f384 = 0;
            v24 = (int)0;
            v25 = (int)((char *)(&frame) + 0x4);
            while (v23 > v24) {
                ((void (*)(Object *, int))0x8c023e44)(o, v25);
                v25 = (int)(v25 + 0x1c);
                v24 = (int)(v24 + 1);
            }
            t5 = ((int (*)(void))0x8c032ad0)();
            if (t5 == 0) {
                o->f384 = 0;
            }
            v1 = (int)v24;
        }
    }
}
