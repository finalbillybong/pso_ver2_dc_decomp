/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c119770
 * function: operation_8c119770
 * language: c
 * reference size: 536 bytes
 * compiled size: 536 bytes (+0.0%)
 * differing lines: 36 of 234 reference instruction lines
 * differing bytes: 16
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
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_90 Arg0_90;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    int f34;
    char unknown38[0x18];
    float f50;
    float f54;
    char unknown58[0x24];
    float f7c;
    char unknown80[0x4];
    int f84;
    int f88;
    float f8c;
    Arg0_90 *f90;
    float f94;
    int f98;
    int f9c;
};
struct S_vv1 {
    int f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
    char unknown18[0x8];
    int f20;
    int f24;
};
struct S_vv2 {
    int f00;
    int f04;
};
extern void remove_pair_grid_node(void *, void *);
extern void call_8c0e2278(S_vv1 *, int, int);
extern void operation_8c0e2328(S_vv1 *, float);
int operation_8c119770(Object *o, int a1, int a2, int a3)
{
    S_vv1 *v1;
    S_vv2 *v2;
    float v48;
    float v26;
    float v29;
    float v49;
    int v17;
    int v32;
    float v36;
    float v35;
    if (a1 == 0) {
        return 0;
    }
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f98 << 2));
    v2 = (S_vv2 *)&*(int *)((char *)((char *)o->f90 + 0x0) + (o->f98 << 3));
    if (v1->f20 != 0) {
        remove_pair_grid_node((void *)o, (void *)v1);
    }
    if (((a2 & 0x80)) != 0) {
        o->f8c = o->f7c;
    }
    if (((a2 & 0x10)) != 0 && o->f8c < (o->f7c + o->f54 - 26.0f)) {
        o->f8c = o->f7c + o->f54 - 26.0f;
    }
    v17 = (int)a2;
    if (((a2 & 8)) != 0) {
        if (o->f84 == o->f98) {
            v17 = (int)(a2 & -9);
        } else {
            v1->f00 |= 8;
            v17 = (int)a2;
        }
    }
    v1->f0c = o->f8c;
    v1->f24 = a3;
    if (((v17 & 2)) != 0) {
        call_8c0e2278(v1, a1, 0x20);
    } else {
        call_8c0e2278(v1, a1, 0);
    }
    if (((v17 & 0x20)) != 0) {
        v1->f00 |= 1;
    }
    if (((v17 & 0x40)) != 0) {
        v1->f00 |= 0x40;
    }
    if (((v17 & 0x100)) != 0) {
        v1->f00 |= 0x80;
    }
    v48 = (float)(o->f50 - 18.0f);
    v29 = (float)v48;
    if (((o->f34 & 0x80)) != 0) {
        v26 = (float)(v48 - 15.0f);
        v29 = (float)v26;
    }
    operation_8c0e2328(v1, v29);
    if (((v17 & 0x200)) != 0) {
        v49 = (float)(v29 - v1->f10);
        v1->f08 = v49;
        v29 = (float)v49;
    } else {
        v1->f08 = 0.0f;
    }
    v2->f00 = (int)(v17);
    v2->f04 = (int)(o->f88);
    v32 = (int)((int)o->f98 + 1);
    o->f98 = (int)(v32);
    if (v32 >= o->f9c) {
        o->f98 = 0;
    }
    o->f8c += v1->f14 + 2.0f;
    if (((v17 & 1)) != 0) {
        o->f94 = o->f8c - v1->f14 - 2.0f;
    } else {
        v35 = (float)o->f54;
        v36 = (float)o->f8c;
        if (v36 > (o->f7c + v35 - 26.0f) && (v36 - (v35 - 26.0f)) > o->f94) {
            o->f94 = v36 - (v35 - 26.0f);
        }
    }
    return 1;
}
