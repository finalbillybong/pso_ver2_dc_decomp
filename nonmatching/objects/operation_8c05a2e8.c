/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05a2e8
 * function: operation_8c05a2e8
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 126 of 148 reference instruction lines
 * differing bytes: 92
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
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv16 S_vv16;
typedef struct S_vv21 S_vv21;
typedef struct S_vv4 S_vv4;
typedef struct S_x2960 S_x2960;
typedef struct S_x60560 S_x60560;
struct S_vv4 {
    char unknown0[0x20];
    short f20;
};
struct S_x2960 {
    float f00;
};
struct S_vv10 {
    char unknown0[0x20];
    short f20;
};
struct S_x60560 {
    float f00;
};
struct S_vv16 {
    float f00;
};
struct S_vv21 {
    float f00;
};
struct Frame {
    int f00;
    int f04;
};
extern int g_8c467874;
extern int active_unflagged_8c05b2dc(void *);
extern float squared_distance_xz(void *, void *);
typedef struct Pair { int f00; int f04; } Pair;
int operation_8c05a2e8(int a0, Arg1 *a1, float f0)
{
    Pair tmp;
    Pair *pm;
    Pair *pj;
    int v2;
    int v1;
    S_vv4 *v4;
    S_vv10 *v10;
    int v20;
    int v3;
    int v9;
    S_vv16 *v16;
    int v17;
    float v18;
    int v15;
    S_vv21 *v21;
    float v22;
    float v19;
    int v23;
    int v28;
    int v29;
    int t1;
    float t2;
    int t3;
    float t4;
    v1 = (int)g_8c467874;
    v2 = (int)0;
    if (f0 > 0.0f) {
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
            t1 = active_unflagged_8c05b2dc((void *)v4);
            if (t1 != 0) {
                t2 = squared_distance_xz((void *)(a0 + 0x3c), (void *)((int)v4 + 0x3c));
                if (f0 > t2) {
                    *(short *)((char *)((char *)a1 + 0x0) + (v2 << 3)) = v4->f20;
                    ((S_x2960 *)((int)a1 + 4 + (v2 << 3)))->f00 = t2;
                    v2 = (int)(v2 + 1);
                }
            }
            v3 = (int)(v3 + 1);
        }
        v15 = (int)v3;
    } else {
        v9 = (int)0;
        while (v1 > v9) {
            v10 = (S_vv10 *)*(S_g8c467240 **)((char *)0x8c467240 + (v9 << 2));
            t3 = active_unflagged_8c05b2dc((void *)v10);
            if (t3 != 0) {
                t4 = squared_distance_xz((void *)(a0 + 0x3c), (void *)((int)v10 + 0x3c));
                *(short *)((char *)((char *)a1 + 0x0) + (v2 << 3)) = v10->f20;
                ((S_x60560 *)((int)a1 + 4 + (v2 << 3)))->f00 = t4;
                v2 = (int)(v2 + 1);
            }
            v9 = (int)(v9 + 1);
        }
        v15 = (int)v9;
    }
    v23 = (int)v15;
    if (v2 > 1) {
        v16 = (S_vv16 *)((int)a1 + 4);
        for (v17 = v2 + -1; v17 >= 1; v17--) {
            v19 = v16->f00;
            v23 = 0;
            for (v20 = 1; v17 >= v20; v20++) {
                v22 = ((S_vv21 *)((int)v16 + (v20 << 3)))->f00;
                if (v22 > v19) {
                    v19 = v22;
                    v23 = v20;
                }
            }
            if (v23 != v17) {
                pm = (Pair *)((int)a1 + (v23 << 3));
                pj = (Pair *)((int)a1 + (v17 << 3));
                tmp = *pm;
                *pm = *pj;
                *pj = tmp;
            }
        }
    }
    return (int)(v2);
}
