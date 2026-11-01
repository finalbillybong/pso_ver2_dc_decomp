/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1890e0
 * function: operation_8c1890e0
 * language: c
 * reference size: 436 bytes
 * compiled size: 440 bytes (+0.9%)
 * differing lines: 132 of 178 reference instruction lines
 * differing bytes: 399
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct Object Object;
typedef struct S_vv58 S_vv58;
typedef struct S_vv59 S_vv59;
typedef struct S_vv59_30 S_vv59_30;
typedef struct S_vv59_38 S_vv59_38;
typedef struct S_vv65 S_vv65;
typedef struct S_x47696 S_x47696;
typedef struct S_x93360 S_x93360;
struct Object {
    char unknown0[0x44];
    int f44;
};
struct Frame {
    Block20 f00;
};
struct S_x93360 {
    Block20 f00;
};
struct S_x47696 {
    Block20 f00;
};
struct S_vv58 {
    char unknown0[0x10];
    int f10;
};
struct S_vv59 {
    char unknown0[0x30];
    S_vv59_30 *f30;
    char unknown34[0x4];
    S_vv59_38 *f38;
    char unknown3c[0x8];
    int f44;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0xa4];
    int fa4;
};
struct S_vv65 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    int f90;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int g_8c4dbf60;
extern char g_8c4dbf68[];
extern int operation_8c1c7e08(S_vv58 *);
extern int operation_8c19fb24(int, int);
extern void operation_8c1cdcdc(void *);
extern void operation_8c1cdc94(void *);
extern void operation_8c1cd674(void *, int, int);
extern void operation_8c1cdc30(void *);
extern void operation_8c19a044(void *, int);
extern void operation_8c1cdd08(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowHelpItem_ctor_8c1d5b24(void *);
extern void operation_8c1d5dfc(void *, int);
extern void call_8c220b80(int, int);
void operation_8c1890e0(Object *o)
{
    Frame frame;
    int v36;
    int v34;
    int v60;
    S_vv58 *v58;
    int v61;
    int v56;
    int v51;
    int v57;
    S_vv59 *v59;
    int v62;
    int v53;
    int v52;
    char *v67;
    int v63;
    int v64;
    S_vv65 *v65;
    int v66;
    int v55;
    int t1;
    int t2;
    int t3;
    o->f44 = (int)(g_8c4dbf60);
    v34 = (int)((char *)o + 0x4c);
    v36 = (int)0;
    while (o->f44 > v36) {
        *(Block20 *)&(&frame)->f00 = *(Block20 *)&((S_x93360 *)(v36 * 0x14 + g_8c4dbf68))->f00;
        *(Block20 *)&((S_x47696 *)(v34 + v36 * 0x14))->f00 = *(Block20 *)&(&frame)->f00;
        v36 = (int)(v36 + 1);
    }
    v55 = (int)((char *)(&frame) + 0x10);
    v57 = (int)0;
    v58 = (S_vv58 *)((char *)o + 0x4c);
    v59 = (S_vv59 *)o;
    v60 = (int)-1;
    v56 = (int)v60;
    goto L_8c189172;
L_8c189156:;
    v61 = (int)v58->f10;
    if (v61 != v56) {
        if (v58 == 0) {
            goto L_8c18916a;
        }
        t3 = operation_8c1c7e08(v58);
        v51 = (int)t3;
        goto L_8c18916c;
L_8c18916a:;
        v51 = (int)0;
L_8c18916c:;
        v58->f10 = (int)(v51);
    }
    v57 = (int)(v57 + 1);
    v58 = (S_vv58 *)((char *)v58 + 20);
L_8c189172:;
    v62 = (int)v59->f44;
    v53 = (int)v62;
    if (v53 > v57) {
        goto L_8c189156;
    }
    v52 = (int)v59->f30;
    if (v52 == 0) {
        v67 = (char *)g_8c4dbc20->f00->fa4;
        t1 = operation_8c19fb24((int)(v67), v53);
        v59->f30 = (S_vv59_30 *)t1;
        goto L_8c1891a0;
    }
    operation_8c1cdcdc((void *)v52);
    operation_8c1cdc94((void *)(v59->f30));
L_8c1891a0:;
    if (v59->f30 != 0) {
        v63 = (int)-1;
        v56 = (int)v63;
        v57 = (int)0;
        goto L_8c1891ce;
L_8c1891ac:;
        v64 = (int)*(int *)((char *)((char *)v59 + 0x5c) + (v57 * 0x14));
        if (v64 == v56) {
            goto L_8c1891cc;
        }
        operation_8c1cd674((void *)(v59->f30), (int)((int)v59 + v57 * 0x14 + 0x4c), v57);
L_8c1891cc:;
        v57 = (int)(v57 + 1);
L_8c1891ce:;
        if (v59->f44 > v57) {
            goto L_8c1891ac;
        }
        operation_8c1cdc30((void *)(v59->f30));
        v65 = (S_vv65 *)v59->f30;
        v65->f80 = (v65->f80 & 0xffff) & -3;
        v66 = (int)v65->f90;
        if (v66 == 0) {
            goto L_8c1891fa;
        }
        operation_8c19a044((void *)v66, 1);
L_8c1891fa:;
        operation_8c1cdd08((void *)(v59->f30));
    }
    if (v59->f38 == 0) {
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        v55 = (int)t2;
        if (t2 == 0) {
            goto L_8c189220;
        }
        TWindowHelpItem_ctor_8c1d5b24((void *)t2);
L_8c189220:;
        v59->f38 = (S_vv59_38 *)v55;
        operation_8c1d5dfc((void *)(v59->f38), (int)((int)v59 + 0x4c));
    }
    call_8c220b80(0xa, 1);
}
