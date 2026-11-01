/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e630
 * function: operation_8c18e630
 * language: c
 * reference size: 180 bytes
 * compiled size: 176 bytes (-2.2%)
 * differing lines: 62 of 79 reference instruction lines
 * differing bytes: 128
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_4 Arg1_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv7 S_vv7;
typedef struct S_x59888 S_x59888;
struct Object {
    char unknown0[0x14];
    int f14;
    int dispatch;
    char unknown1c[0x84];
    int fa0;
    char unknowna4[0x8];
    int fac;
    int fb0;
};
struct Arg1 {
    char unknown0[0x4];
    Arg1_4 *f04;
};
struct Arg1_4 {
    char f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv7 {
    int f00;
};
struct S_x59888 {
    int f00;
};
int operation_8c18e630(Object *o, Arg1 *a1)
{
    int v1;
    int v2;
    int v3;
    int v5;
    S_vv4 *v4;
    int v17;
    int v18;
    int v19;
    S_vv7 *v7;
    int v13;
    int v21;
    int v22;
    v1 = (int)o->fa0;
    if (o->fb0 != 0) {
        v2 = (int)0x10;
    } else {
        v2 = (int)0;
    }
    v7 = (S_vv7 *)((int)o->dispatch + v1 - v2 + -4);
    if (((a1->f04->f00 & 0x40)) != 0) {
        v4 = (S_vv4 *)((int)o->dispatch + v1 - v2 + -4);
        v5 = (int)0;
        v3 = (int)0xac;
        while (*(int *)((char *)((char *)o + 0x0) + (v3)) > v5) {
            *(int *)((char *)((char *)o + 0x5c) + (0xf - v5 << 2)) = (int)(v4->f00);
            v5 = (int)(v5 + 1);
            v4--;
        }
        v7 = (S_vv7 *)v4;
    }
    v13 = (int)0xa8;
    v17 = (int)0;
    v18 = (int)((char *)o + 0x1c);
    v19 = (int)0xe;
    goto L_8c18e69e;
L_8c18e690:;
    v17 = (int)(v17 + 1);
    *(int *)((char *)((char *)v18 + 0x0) + (v19 - v17 << 2)) = (int)(v7->f00);
    v7--;
L_8c18e69e:;
    v21 = (int)*(int *)((char *)((char *)o + 0x0) + (v13));
    if (v21 > v17) {
        goto L_8c18e690;
    }
    v22 = (int)((S_x59888 *)((int)o->dispatch + v1 - v2 + -4 - (o->fac << 2) - (v21 << 2)))->f00;
    o->f14 = (int)o->dispatch + v1;
    return (int)(v22);
}
