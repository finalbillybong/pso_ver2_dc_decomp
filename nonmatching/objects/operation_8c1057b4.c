/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1057b4
 * function: operation_8c1057b4
 * language: c
 * reference size: 436 bytes
 * compiled size: 436 bytes (+0.0%)
 * differing lines: 52 of 178 reference instruction lines
 * differing bytes: 26
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
typedef struct S_vv59_34 S_vv59_34;
typedef struct S_vv59_38 S_vv59_38;
typedef struct S_vv65 S_vv65;
typedef struct S_x83792 S_x83792;
typedef struct S_x84176 S_x84176;
struct Object {
    char unknown0[0x44];
    int f44;
};
struct Frame {
    Block20 f00;
};
struct S_x83792 {
    Block20 f00;
};
struct S_x84176 {
    Block20 f00;
};
struct S_vv58 {
    char unknown0[0x10];
    int f10;
};
struct S_vv59 {
    char unknown0[0x34];
    S_vv59_34 *f34;
    S_vv59_38 *f38;
    char unknown3c[0x8];
    int f44;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x94];
    int f94;
};
struct S_vv65 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    int f90;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int g_8c4dbdc8;
extern char g_8c4dbc84[];
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
void operation_8c1057b4(Object *o)
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
    o->f44 = (int)(g_8c4dbdc8);
    v34 = (int)((char *)o + 0x50);
    v36 = (int)0;
    while (o->f44 > v36) {
        v66 = v36 * 0x14;
        *(Block20 *)&(&frame)->f00 = *(Block20 *)&((S_x83792 *)(v66 + g_8c4dbc84))->f00;
        *(Block20 *)&((S_x84176 *)(v34 + v66))->f00 = *(Block20 *)&(&frame)->f00;
        v36 = (int)(v36 + 1);
    }
    v55 = (int)((char *)(&frame) + 0x10);
    v57 = (int)0;
    v58 = (S_vv58 *)((char *)o + 0x50);
    v60 = (int)-1;
    v56 = (int)v60;
    goto L_8c105846;
L_8c10582a:;
    v61 = (int)v58->f10;
    if (v61 != v56) {
        if (v58 == 0) {
            goto L_8c10583e;
        }
        t3 = operation_8c1c7e08(v58);
        v51 = (int)t3;
        goto L_8c105840;
L_8c10583e:;
        v51 = (int)0;
L_8c105840:;
        v58->f10 = (int)(v51);
    }
    v57 = (int)(v57 + 1);
    v58 = (S_vv58 *)((char *)v58 + 20);
L_8c105846:;
    v62 = (int)((S_vv59 *)o)->f44;
    v53 = (int)v62;
    if (v53 > v57) {
        goto L_8c10582a;
    }
    v52 = (int)((S_vv59 *)o)->f34;
    if (v52 == 0) {
        v67 = (char *)g_8c4dbc20->f00->f94;
        t1 = operation_8c19fb24((int)(v67), v53);
        ((S_vv59 *)o)->f34 = (S_vv59_34 *)t1;
        goto L_8c105874;
    }
    operation_8c1cdcdc((void *)v52);
    operation_8c1cdc94((void *)(((S_vv59 *)o)->f34));
L_8c105874:;
    if (((S_vv59 *)o)->f34 != 0) {
        v63 = (int)-1;
        v56 = (int)v63;
        v57 = (int)0;
        goto L_8c1058a2;
L_8c105880:;
        v64 = (int)*(int *)((char *)((char *)o + 0x60) + (v57 * 0x14));
        if (v64 == v56) {
            goto L_8c1058a0;
        }
        operation_8c1cd674((void *)(((S_vv59 *)o)->f34), (int)((int)o + v57 * 0x14 + 0x50), v57);
L_8c1058a0:;
        v57 = (int)(v57 + 1);
L_8c1058a2:;
        if (((S_vv59 *)o)->f44 > v57) {
            goto L_8c105880;
        }
        operation_8c1cdc30((void *)(((S_vv59 *)o)->f34));
        v65 = (S_vv65 *)((S_vv59 *)o)->f34;
        v65->f80 = (v65->f80 & 0xffff) & -3;
        v66 = (int)v65->f90;
        if (v66 == 0) {
            goto L_8c1058ce;
        }
        operation_8c19a044((void *)v66, 1);
L_8c1058ce:;
        operation_8c1cdd08((void *)(((S_vv59 *)o)->f34));
    }
    if (((S_vv59 *)o)->f38 == 0) {
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        v55 = (int)t2;
        if (t2 == 0) {
            goto L_8c1058f4;
        }
        TWindowHelpItem_ctor_8c1d5b24((void *)t2);
L_8c1058f4:;
        ((S_vv59 *)o)->f38 = (S_vv59_38 *)v55;
        operation_8c1d5dfc((void *)(((S_vv59 *)o)->f38), (int)((int)o + 0x50));
    }
    call_8c220b80(0xa, 1);
}
