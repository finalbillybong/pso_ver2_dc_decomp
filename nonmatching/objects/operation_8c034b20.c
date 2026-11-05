/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c034b20
 * function: operation_8c034b20
 * language: c
 * reference size: 348 bytes
 * compiled size: 316 bytes (-9.2%)
 * differing lines: 102 of 166 reference instruction lines
 * differing bytes: 308
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, stack frame and spills; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -32 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg3_0 Arg3_0;
typedef struct Arg3_0_0 Arg3_0_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct Arg3 {
    Arg3_0 *f00;
    int f04;
};
struct Object {
    char unknown0[0x124];
    int f124;
    int f128;
};
struct Arg3_0 {
    Arg3_0_0 *f00;
};
struct Arg2 {
    short f00;
    short f02;
    short f04;
};
struct S_vv3 {
    char unknown0[0x4];
    char f04;
    char unknown5[0x2];
    char f07;
    char f08;
};
struct Arg1 {
    char unknown0[0x30];
    char f30;
    char unknown31[0x1];
    char f32;
    char unknown33[0x5];
    short f38;
    short f3a;
    short f3c;
};
struct S_vv2 {
    S_vv3 *f00;
    int f04;
    int f08;
};
extern void strncpy_8c12b154(S_vv3 *, void *, int);
void operation_8c034b20(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    Arg2 **home2 = &a2;
    S_vv2 *v2;
    S_vv3 *v3;
    char v13;
    int v1;
    Arg3_0 *p;
    (void)home2;
    if (!(a3->f04 > 8)) {
    o->f124 = (int)(((char *)o + 0xc4));
    o->f128 = (int)(a3->f04);
    v1 = (int)0;
    v2 = (S_vv2 *)((char *)o + 0xc4);
    p = a3->f00;
    while (a3->f04 > v1) {
        v3 = (S_vv3 *)((int)o + v1 * 0x18 + 4);
        strncpy_8c12b154(v3, (void *)p->f00, 0x17);
        if (a2->f00 > 0 && v3->f07 != 0x30) {
            switch (v3->f04) {
            case 98:
            case 116:
                v3->f07 = a1->f38 + 0x31;
            }
        }
        if (a2->f02 > 0 && v3->f08 != 0x7a) {
            switch (v3->f04) {
            case 98:
            case 102:
            case 116:
                v3->f08 = a1->f3a + 0x61;
            }
        }
        if (a2->f04 > 0 && v3->f07 != 0x30) {
            switch (v3->f04) {
            case 102:
                v3->f07 = a1->f3c + 0x31;
            }
        }
        if (v3->f04 == 0x63) {
            if (((a1->f32 & 1)) == 0) {
                v13 = (char)-1;
                if (a1->f30 != v13) {
                    goto L_8c034c3c;
                }
            }
            v3->f08 = 0x7a;
            goto L_8c034c40;
L_8c034c3c:;
            v3->f08 = a1->f30 + 0x61;
        }
L_8c034c40:;
        v2->f00 = v3;
        v2->f08 = 0;
        v2->f04 = 0;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 12);
        p++;
    }
    }
}
