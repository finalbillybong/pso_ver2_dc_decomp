/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ec4a4
 * function: handle_6x47_cast_technique_8c1ec4a4
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 120 of 170 reference instruction lines
 * differing bytes: 198
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
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct S_vv33 S_vv33;
typedef struct S_vv34 S_vv34;
struct Object {
    char unknown0[0x2];
    short f02;
    char f04;
    char unknown5[0x1];
    char f06;
    char f07;
};
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
    char unknown314[0xa9];
    char f3bd;
    char unknown3be[0x2];
    short f3c0;
};
struct S_vv34 {
    char f00;
};
struct S_vv33 {
    char f00;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int object_ready(void *);
extern char operation_8c247844(void *);
extern void operation_8c24770c(void *, int);
extern void operation_8c1e8e60(int, int, int);
void handle_6x47_cast_technique_8c1ec4a4(Object *o)
{
    unsigned short v1;
    int v5;
    S_c8c021ef8 *t1;
    int ok;
    int v9;
    int v18;
    char v4;
    int v21;
    int v22;
    char v23;
    int v26;
    char t3;
    int v30;
    int v31;
    char v27;
    int v32;
    int v35;
    S_vv33 *v33;
    S_vv34 *v34;
    v1 = o->f02;
    v5 = 0;
    if (g_8c4627c8 == 0 && v1 == g_8c418248) {
        v5 = 1;
    }
    if ((v5 == 0) == 0) {
        return;
    }
    t1 = lookup_low_id(v1);
    if (t1 == 0) {
        return;
    }
    if (object_ready((void *)t1) == 0) {
        return;
    }
    v4 = o->f04;
    ok = 0;
    v9 = 0;
    if (v4 >= 0 && o->f06 >= 0) {
        v9 = 1;
    }
    if (v9 != 0) {
        v9 = 0;
        if (o->f07 >= 0 && 0xa >= o->f07) {
            v9 = 1;
        }
        if (v9 != 0) {
            ok = 1;
        }
    }
    if (ok == 0) {
        return;
    }
    v18 = (t1->f310 & 0x8200) != 0;
    if (v18 != 0) {
        return;
    }
    v22 = v4;
    v21 = 0;
    if ((short)v4 >= 0 && 0x13 > (short)v4) {
        v21 = 1;
    }
    if (v21 == 0) {
        v22 = 0;
    }
    t1->f3c0 = v4;
    v23 = o->f06;
    t3 = operation_8c247844((char *)t1 + 0x3bc);
    v26 = 0;
    if (v23 >= -1 && 0x1d >= v23) {
        v26 = 1;
    }
    v27 = v23;
    if (v26 == 0) {
        v27 = 0;
    }
    v30 = 0;
    if (t3 >= 0 && 0xf >= t3) {
        v30 = 1;
    }
    v31 = t3;
    if (v30 == 0) {
        v31 = 0;
    }
    if (v27 == 0xe) {
        v27 = v27 + v31;
    }
    t1->f3bd = v27;
    *((char *)t1 + 0x404 + (short)v22) = v27;
    v32 = o->f07;
    operation_8c24770c((char *)t1 + 0x3bc, v32);
    v33 = (S_vv33 *)((char *)o + 0x8);
    v34 = (S_vv34 *)((char *)t1 + 0x3bc + 0x20);
    v35 = 0;
    while (v32 > v35) {
        *(SBlock4 *)&v34->f00 = *(SBlock4 *)&v33->f00;
        v34 = (S_vv34 *)((char *)v34 + 4);
        v33 = (S_vv33 *)((char *)v33 + 4);
        v35 = v35 + 1;
    }
    operation_8c1e8e60((int)t1, 8, 0);
}
