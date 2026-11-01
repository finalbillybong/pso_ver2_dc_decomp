/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c188c4c
 * function: operation_8c188c4c
 * language: c
 * reference size: 676 bytes
 * compiled size: 676 bytes (+0.0%)
 * differing lines: 44 of 291 reference instruction lines
 * differing bytes: 9
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct S_g8c4dbc20_0_10 S_g8c4dbc20_0_10;
typedef struct S_g8c4dbc20_0_14 S_g8c4dbc20_0_14;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_bc8 Arg0_28_bc8;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_40 Arg0_40;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_90 S_vv21_90;
typedef struct S_vv25 S_vv25;
typedef struct S_vv38 S_vv38;
typedef struct S_vv38_90 S_vv38_90;
typedef struct S_vv52 S_vv52;
typedef struct S_vv53 S_vv53;
typedef struct S_vv53_90 S_vv53_90;
typedef struct S_x8064 S_x8064;
typedef struct Block_frame_8 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    char unknown30[0x4];
    Arg0_34 *f34;
    Arg0_38 *f38;
    char unknown3c[0x4];
    Arg0_40 *f40;
    char unknown44[0x8];
    int f4c;
    int f50;
};
struct Arg0_38 {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0xa];
    int f74;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x10];
    S_g8c4dbc20_0_10 *f10;
    S_g8c4dbc20_0_14 *f14;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv21 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv21_90 *f90;
};
struct S_vv25 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_x8064 {
    Block20 f00;
};
struct Arg0_28 {
    char unknown0[0xbc8];
    Arg0_28_bc8 *fbc8;
};
struct S_vv38 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv38_90 *f90;
};
struct S_vv52 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv53 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv53_90 *f90;
};
extern Block8 g_8c319e2c;
extern S_g8c418248 *g_8c418248;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_34 *, void *, int, int);
extern void operation_8c156f50(Arg0_34 *);
extern void operation_8c157138(void *);
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern int operation_8c1571f4(void *);
extern int operation_8c1cdc80(void *);
extern int operation_194d60(unsigned short);
extern int operation_8c1ccb10(void *);
extern void operation_8c1c74a8(void *, int);
extern void operation_8c023a44(void *, void *);
extern int operation_8c16a50c(void *, int);
extern void operation_8c1ca234(void *, int);
extern int operation_8c1ccb64(void *);
extern void operation_8c18fb68(int);
extern void operation_8c1cdcdc(void *);
void operation_8c188c4c(Object *o)
{
    Frame frame;
    int v9;
    S_vv21 *v21;
    S_vv25 *v25;
    int v95;
    S_vv38 *v38;
    S_vv52 *v52;
    S_vv53 *v53;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    switch (o->f4c) {
    case 0:
        if (o->f38 != 0) {
            if (((o->f38->f68 & 2)) != 0) {
                if (o->f34 == 0) {
                    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c319e2c;
                    t1 = operation_8c156c24((int)(&frame), 2);
                    o->f34 = (Arg0_34 *)t1;
                    operation_8c156d30((Arg0_34 *)(o->f34), (void *)(g_8c4dbc20->f00->f10), 6, 0);
                    operation_8c156d30((Arg0_34 *)(o->f34), (void *)(g_8c4dbc20->f00->f14), 6, 1);
                    operation_8c156f50((Arg0_34 *)(o->f34));
                    operation_8c157138((void *)(o->f34));
                    o->f34->f80 = (o->f34->f80 & 0xffff) | 1;
                }
                o->f50 = (int)(o->f38->f74);
                request_resource_release((void *)(o->f38));
                o->f38 = (Arg0_38 *)0;
                v9 = (int)1;
                o->f4c = (int)(v9);
            }
        }
        if (o->f38 == 0) {
            return;
        }
        if (((o->f38->f68 & 4)) == 0) {
            return;
        }
        request_resource_release((void *)(o->f38));
        o->f38 = (Arg0_38 *)0;
        v21 = (S_vv21 *)o->f2c;
        if (v21 != 0) {
            v21->f80 = (v21->f80 & 0xffff) & -3;
            if (v21->f90 != 0) {
                operation_8c19a044((void *)(v21->f90), 1);
            }
        }
        o->f24 = 1;
        return;
    case 1:
        v25 = (S_vv25 *)o->f34;
        if (v25 != 0) {
            if (((v25->f80 & 0xffff & 2)) != 0) {
                t2 = operation_8c1571f4((void *)v25);
                if (t2 == 0) {
                    if (o->f2c != 0) {
                        t3 = operation_8c1cdc80((void *)(o->f2c));
                        v95 = (int)(t3 * 0x14);
                        *(Block20 *)&(&frame)->f08 = *(Block20 *)&((S_x8064 *)((char *)(int *)((char *)o + 0x58) + v95))->f00;
                        t4 = operation_194d60((unsigned short)g_8c418248);
                        (&frame)->f08.f0c = (int)(t4);
                        t5 = operation_8c1ccb10((void *)(&(&frame)->f08));
                        if (t5 != 0) {
                            operation_8c1c74a8((void *)(&(&frame)->f08), (int)(o->f50));
                        }
                        operation_8c023a44((void *)(o->f28), (void *)(&(&frame)->f08));
                        if (o->f40 != 0) {
                            t6 = operation_8c16a50c((void *)(o->f28->fbc8), (int)((int)o + v95 + 0x58));
                            operation_8c1ca234((void *)(o->f40), t6);
                        }
                        t7 = operation_8c1ccb64((void *)((int)o + v95 + 0x58));
                        if (t7 != 0) {
                            operation_8c18fb68(t3);
                        }
                        operation_8c1cdcdc((void *)(o->f2c));
                    }
                    request_resource_release((void *)(o->f34));
                    o->f34 = (Arg0_34 *)0;
                    o->f24 = 0;
                }
                if (t2 == 1) {
                    request_resource_release((void *)(o->f34));
                    o->f34 = (Arg0_34 *)0;
                    v38 = (S_vv38 *)o->f2c;
                    if (v38 != 0) {
                        v38->f80 = (v38->f80 & 0xffff) & -3;
                        if (v38->f90 != 0) {
                            operation_8c19a044((void *)(v38->f90), 1);
                        }
                    }
                    o->f24 = 1;
                }
            }
        }
        v52 = (S_vv52 *)o->f34;
        if (v52 != 0) {
            if (((v52->f80 & 0xffff & 4)) != 0) {
                request_resource_release((void *)v52);
                o->f34 = (Arg0_34 *)0;
                v53 = (S_vv53 *)o->f2c;
                if (v53 != 0) {
                    v53->f80 = (v53->f80 & 0xffff) & -3;
                    if (v53->f90 != 0) {
                        operation_8c19a044((void *)(v53->f90), 1);
                    }
                }
                o->f24 = 1;
            }
        }
    }
}
