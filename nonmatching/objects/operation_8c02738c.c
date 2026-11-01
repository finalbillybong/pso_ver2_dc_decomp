/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02738c
 * function: operation_8c02738c
 * language: c
 * reference size: 452 bytes
 * compiled size: 448 bytes (-0.9%)
 * differing lines: 106 of 185 reference instruction lines
 * differing bytes: 175
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_vv115 S_vv115;
typedef struct S_vv18 S_vv18;
typedef struct S_vv30 S_vv30;
typedef struct S_x3696 S_x3696;
struct S_vv115 {
    char unknown0[0x48];
    int f48;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x300];
    Arg0_338 *f338;
    char unknown33c[0x7c];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x98];
    volatile unsigned short f454;
    char unknown456[0x52];
    int f4a8;
};
struct S_x3696 {
    char unknown0[0x48];
    int f48;
};
struct Arg0_338 {
    char unknown0[0x8];
    int f08;
};
struct S_vv18 {
    char unknown0[0x350];
    int f350;
};
struct Arg0_3b8 {
    char unknown0[0x20];
    int f20;
};
struct S_vv30 {
    char unknown0[0x350];
    int f350;
};
extern int g_8c418248;
extern void create_bound_effect_8c02a728(void *, int);
extern void operation_8c02a764(int, int);
extern int operation_8c184c80(void *, void *);
extern void operation_8c185000(void *);
extern int operation_8c185030(void *);
extern void operation_8c184d2c(void *, void *, int);
void operation_8c02738c(Object *o)
{
    S_vv115 *v115;
    int v1;
    int v2;
    int v19;
    int v13;
    int v14;
    int v16;
    S_vv18 *v18;
    int v22;
    int v31;
    int v23;
    int v24;
    int v26;
    int v28;
    S_vv30 *v30;
    int v34;
    int v12;
    int t1;
    int t2;
    v1 = (int)(((v115->f48 & -0x80000000)) != 0);
    if (v1 != 0) {
        v115 = (S_vv115 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2));
        *(int *)((char *)v115 + 0x48) &= 0x7fffffff;
        v2 = (int)(((((S_x3696 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)))->f48 & 1)) != 0);
        if (v2 != 0) {
            create_bound_effect_8c02a728((void *)o, 5);
            create_bound_effect_8c02a728((void *)o, 0x2c);
            create_bound_effect_8c02a728((void *)o, 0x3b);
            operation_8c02a764((int)o, 0x20021);
        }
    }
    t1 = operation_8c184c80((void *)(((char *)o + 0x418)), (void *)o);
    if ((unsigned short)t1 == 0xffff) {
        operation_8c185000((void *)(((char *)o + 0x418)));
        return;
    }
    o->f4a8 -= 1;
    v12 = (int)(((o->f338->f08 & 0x200)) != 0);
    if (v12 != 0) {
        v13 = (int)g_8c418248;
        if (v13 == 0xffff) {
            v18 = (S_vv18 *)0;
        } else {
            if (v13 >= 0xc) {
                v16 = (int)0;
            } else {
                v14 = (int)*(int *)((char *)0x8c41ce2c + (v13 << 2));
                v16 = (int)v14;
            }
            v18 = (S_vv18 *)v16;
        }
        if (v18 != 0) {
            v19 = (int)(((v18->f350 & 0x200)) != 0);
            v22 = (int)v19;
        } else {
            v22 = (int)0;
        }
        if (v22 == 0) {
            if (o->f3b8 != 0) {
                v23 = (int)(((o->f3b8->f20 & 1)) == 0);
                v24 = (int)v23;
            } else {
                v24 = (int)0;
            }
            if (v24 != 0) {
                goto L_8c0274d0;
            }
        }
        if (v13 == 0xffff) {
            v30 = (S_vv30 *)0;
        } else {
            if (v13 >= 0xc) {
                v28 = (int)0;
            } else {
                v26 = (int)*(int *)((char *)0x8c41ce2c + (v13 << 2));
                v28 = (int)v26;
            }
            v30 = (S_vv30 *)v28;
        }
        if (v30 != 0) {
            v31 = (int)(((v30->f350 & 0x200)) != 0);
            v34 = (int)v31;
        } else {
            v34 = (int)0;
        }
        if (v34 != 0 && ((o->f34 & 0x800)) != 0) {
L_8c0274d0:;
            t2 = operation_8c185030((void *)(((char *)o + 0x418)));
            if (t2 != 0) {
                operation_8c184d2c((void *)(((char *)o + 0x418)), (void *)o, t1);
            }
        }
    }
}
