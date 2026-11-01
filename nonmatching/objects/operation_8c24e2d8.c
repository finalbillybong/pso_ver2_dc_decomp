/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24e2d8
 * function: operation_8c24e2d8
 * language: c
 * reference size: 600 bytes
 * compiled size: 600 bytes (+0.0%)
 * differing lines: 6 of 243 reference instruction lines
 * differing bytes: 201
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33f498 S_L8c33f498;
typedef struct S_L8c33f498_10 S_L8c33f498_10;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_g8c33f498 S_g8c33f498;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv12 S_vv12;
typedef struct S_vv20 S_vv20;
typedef struct S_vv23 S_vv23;
typedef struct S_vv24 S_vv24;
typedef struct S_vv25 S_vv25;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    int f00;
    char unknown4[0x44];
    int f48;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x2b0];
    int f2b0;
    char unknown2b4[0x10];
    int f2c4;
};
struct S_vv12 {
    unsigned short f00;
    short f02;
};
struct Frame {
    S_frame_0 *f00;
    char unknown4[0x4];
};
struct S_vv20 {
    unsigned short f00;
    short f02;
    int f04;
};
struct S_vv23 {
    int f00;
};
struct S_frame_0 {
    int f00;
};
struct S_vv24 {
    int f00;
};
struct S_vv25 {
    int f00;
    char unknown4[0x4];
    float f08;
    char unknownc[0x4];
    float f10;
};
struct S_L8c33f498 {
    char unknown0[0x10];
    S_L8c33f498_10 *f10;
};
extern S_g8c467180 *g_8c467180;
extern void *g_8c511004;
extern char g_8c511008;
extern void *g_8c51100c;
extern char g_8c511010;
extern void *g_8c511014;
extern char g_8c511018;
extern S_L8c33f498 g_8c33f498;
extern char g_8c33f4ac[];
extern void call_8c0e196c(void *, void *);
extern void operation_8c0e226c(int, int);
extern int lookup_low_id(int);
extern int operation_239288(void *);
extern void call_8c0e2278(S_vv24 *, int, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18eb44(int);
extern void operation_8c18ea4c(int);
extern void operation_8c0e2328(S_vv25 *, float);
void operation_8c24e2d8(Object *o)
{
    int v18;
    S_vv23 *v23;
    int v14;
    int pm12;
    int v13;
    int pm2;
    S_vv25 *v25;
    S_vv20 *v20;
    int v10;
    S_vv12 *v12;
    int v22;
    int pm5;
    int v21;
    int v27;
    S_frame_0 *vf;
    int t1;
    int v11;
    int pm4;
    void *pm6;
    int *pm11;
    int pm13;
    S_vv24 *v24;
    unsigned short pm3;
    int pm8;
    if (0 == g_8c511008) {
        g_8c511004 = (g_8c33f4ac + 0x29);
        g_8c511008 = 1;
    }
    if ((int)g_8c511010 == 0) {
        g_8c51100c = (g_8c33f4ac + 0x2b);
        g_8c511010 = 1;
    }
    if (!(g_8c511018 != 0)) {
        int pm9;
        g_8c511014 = (g_8c33f4ac + 0x2f);
        pm9 = (short)((signed char)(1));
        pm4 = (int)(int)pm9;
        g_8c511018 = pm4;
    }
    call_8c0e196c((void *)(((char *)o + 0x2c)), ((void *)0x8c33f00c));
    operation_8c0e226c((o->f30->f00), (g_8c467180->f2c->f2b0));
    operation_8c0e226c((int)(o->f30->f48), (g_8c467180->f2c->f2c4));
    pm6 = (void *)0x8c510c9c;
    v10 = (int)pm6;
    v12 = (S_vv12 *)v10;
    v10 = 1;
    v13 = 0;
    v18 = v10;
    pm2 = 0xffff;
    v11 = pm2;
    for (; 4 > v13; v12 = (S_vv12 *)(((char *)v12 + 8))) {
        if ((int)(int)(int)v12->f00 == (unsigned short)v11) {
            v14 = 0;
        } else {
            pm2 = (int)(int)(v12->f00);
            pm5 = lookup_low_id(((int)(int)pm2));
            v14 = pm5;
        }
        if (0 != v14 && !((int)(int)(int)v12->f02 == 0)) {
            v18 = 0;
        }
        v13 += 1;
    }
    v21 = 0;
    v10 = (int)(void *)0x8c510c9c;
    v14 = v10;
    v20 = (S_vv20 *)v14;
    for (; 4 > v21; ) {
        v22 = (v21 << 2);
        v23 = (S_vv23 *)*(Arg0_30_0 **)((1 + v22 << 2) + (char *)&o->f30->f00);
        pm2 = v22 + 2 << 2;
        vf = (S_frame_0 *)*(int *)((pm2) + (char *)&o->f30->f00);
        pm13 = v22 + 3 << 2;
        pm11 = &o->f30->f00;
        pm5 = pm13;
        v24 = (S_vv24 *)*(Arg0_30_0 **)((char *)&o->f30->f00 + (pm5));
        v13 = v22 + 4;
        v25 = (S_vv25 *)*(Arg0_30_0 **)((v13 << 2) + (char *)pm11);
        if (!(v20->f00 != (int)((unsigned short)0xffff))) {
            v27 = (int)0;
        } else {
            pm4 = (int)v20->f00;
            v27 = lookup_low_id((pm4));
        }
        if (!(0 != v27)) {
            v23->f00 |= 2;
            vf->f00 = 2 | vf->f00;
            v24->f00 = v24->f00 | 2;
            v25->f00 |= 2;
        } else {
            if (0 != v18) {
                v11 = (int)((&g_8c33f498)->f10);
                operation_8c0e226c((int)v23, v11);
            } else {
                t1 = operation_239288((void *)((void *)0x8c41ce5c));
                if (!((unsigned char)t1 != 1)) {
                    if (!(0 != (int)v20->f02)) {
                        operation_8c0e226c((int)v23, (int)g_8c51100c);
                        goto L_8c24e454;
                    }
                    pm12 = (int)v23;
                    v14 = pm12;
                    v10 = (int)g_8c511014;
                    operation_8c0e226c(v14, v10);
                } else {
                    S_g8c33f498 *pm7;
                    pm7 = *(S_g8c33f498 **)(((int)(v20->f02) << 2) + (char *)&g_8c33f498);
                    pm8 = (int)v23;
                    operation_8c0e226c(pm8, (int)(pm7));
                }
            }
        L_8c24e454:
            ;
            v27 = v27 + 0x7e4;
            call_8c0e2278(v24, v27, 0x20);
            reset_text_cursor_8c18ea38();
            operation_8c18eb44((int)(v20->f04));
            operation_8c18ea4c((int)g_8c511004);
            pm6 = (void *)0x8c4dbe40;
            pm3 = 0x20;
            call_8c0e2278((S_vv24 *)v25, (int)(pm6), pm3);
            operation_8c0e2328(v25, 1000000.0f);
            v25->f08 = 372.0f - v25->f10;
        }
        v21 = v21 + 1;
        v20 = (S_vv20 *)(8 + (char *)v20);
    }
}
