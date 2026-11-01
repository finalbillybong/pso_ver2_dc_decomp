/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ed3ec
 * function: handle_6x49_execute_photon_blast_8c1ed3ec
 * language: c
 * reference size: 600 bytes
 * compiled size: 584 bytes (-2.7%)
 * differing lines: 298 of 263 reference instruction lines
 * differing bytes: 449
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv30 S_vv30;
typedef struct S_vv41 S_vv41;
typedef struct S_vv42 S_vv42;
typedef struct S_x26992 S_x26992;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    char f04;
    char f05;
    short f06;
    short f08;
    short f0a;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2ee];
    int f310;
    char unknown314[0x68];
    int f37c;
    char unknown380[0x9c];
    short f41c;
    char unknown41e[0x3a];
    float f458;
};
struct S_vv30 {
    unsigned short f00;
};
struct S_x26992 {
    char unknown0[0x48];
    int f48;
};
struct S_vv41 {
    char f00;
};
struct S_vv42 {
    char f00;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a70c(void *);
extern int operation_8c02a930(void *);
extern int current_mode_active(void);
extern int operation_8c01d728(void *);
extern void operation_8c184ba4(int, short, int);
extern void operation_8c185320(void *, int);
extern void operation_8c1e8e60(int, int, int);
extern void call_8c168e70(void *, S_c8c021ef8 *);
void handle_6x49_execute_photon_blast_8c1ed3ec(Object *o)
{
    S_c8c021ef8 *t1;
    int v2;
    int v5;
    int v6;
    int v9;
    int v12;
    int v15;
    int v19;
    int v22;
    S_vv42 *v42;
    int v28;
    S_vv30 *v30;
    unsigned short v44;
    int v31;
    S_c8c021ef8 *t2;
    int v1;
    int v29;
    int v35;
    int v43;
    S_vv41 *v41;
    int v39;
    int v27;
    int v40;
    S_c8c021ef8 *t6;
    int t7;
    int t8;
    v1 = (int)0;
    t1 = lookup_low_id((int)(o->f02));
    t2 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        v5 = (int)v1;
        if (g_8c4627c8 == 0) {
            v2 = (int)v1;
            if (o->f02 == (int)(g_8c418248)) {
                v2 = (int)1;
            }
            v5 = (int)v2;
        }
        v6 = (int)(v5 == 0);
        if (v6 == 0) {
            v9 = (int)0;
            if (o->f04 >= 0 && o->f05 >= 0) {
                v9 = (int)1;
            }
            v12 = (int)0;
            if (v9 != 0 && o->f06 >= 0) {
                v12 = (int)1;
            }
            v15 = (int)0;
            if (v12 != 0 && 0xa >= o->f06) {
                v15 = (int)1;
            }
            v19 = (int)0;
            if (v15 != 0 && o->f08 >= 0) {
                v19 = (int)1;
            }
            v22 = (int)0;
            if (v19 != 0 && o->f0a >= 0) {
                v22 = (int)1;
            }
            if (v22 == 0) {
                return;
            }
        }
    }
    v27 = (int)(((t1->f310 & 0x8000)) != 0);
    if (v27 != 0 || operation_8c02a70c((void *)t2) == 0 || operation_8c02a930((void *)t2) != 0 || current_mode_active() == 0 || t1->f37c != t2->f37c) {
        return;
    }
    v35 = (int)(v1 | 4);
    if (t2->f20 == t1->f20) {
        v29 = (int)(v1 | 4 | 1);
        v30 = (S_vv30 *)((int)((char *)t2 + 0x418) + 0x78);
        v28 = (int)0xffff;
        v31 = (int)(unsigned short)v28;
        while (4 > 1) {
            v44 = (unsigned short)v30->f00;
            if (v44 != v31) {
                t6 = ((S_c8c021ef8 * (*)(int, int))lookup_low_id)(v44, 0);
                if (t6 == 0) {
                    goto L_8c1ed54a;
                }
                t7 = operation_8c01d728((void *)t6);
                t8 = operation_8c01d728((void *)t2);
                if ((short)t7 == (short)t8) {
                    goto L_8c1ed54a;
                }
                v29 = (int)(v29 | 8);
                goto L_8c1ed54a;
            }
        }
        v35 = (int)v29;
    }
    v29 = (int)v35;
L_8c1ed54a:;
    *(int *)((char *)((char *)(int *)((char *)t2 + 0x418) + (o->f02 << 2)) + 0x48) |= 4;
    operation_8c184ba4((int)(((char *)t2 + 0x418)), o->f02, (int)(o->f04));
    v39 = (int)(((v29 & 4)) != 0);
    if (v39 != 0) {
        if (t1 == 0) {
            return;
        }
        t1->f41c = o->f04;
        v40 = (int)o->f06;
        operation_8c185320((void *)(((char *)t1 + 0x418)), v40);
        t1->f458 = (float)o->f08;
        v41 = (S_vv41 *)((int)((char *)t1 + 0x418) + 0x14);
        v42 = (S_vv42 *)((char *)o + 0xc);
        v43 = (int)0;
        while (v40 > v43) {
            *(SBlock4 *)&v41->f00 = *(SBlock4 *)&v42->f00;
            v41 = (S_vv41 *)((char *)v41 + 4);
            v42 = (S_vv42 *)((char *)v42 + 4);
            v43 = (int)(v43 + 1);
        }
        operation_8c1e8e60((int)t1, 9, 0);
        return;
    }
    call_8c168e70((void *)((int)((char *)t2 + 0x418) + 0x78), t2);
}
