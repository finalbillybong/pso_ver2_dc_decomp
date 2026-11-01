/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09e920
 * function: operation_8c09e920
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 20 of 53 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order; review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2ebec8 S_g8c2ebec8;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
struct Arg1 {
    short f00;
};
struct S_vv1 {
    char unknown0[0xc];
    int f0c;
};
struct S_vv10 {
    short f00;
    char unknown2[0xa];
    int f0c;
};
int operation_8c09e920(int a0, Arg1 *a1, int a2)
{
    short end;
    short v;
    switch ((short)a2) {
    case 0:
        a2 = *(int *)((char *)0x8c2ebec8 + (a0 << 2));
        end = -1;
        a0 = a2;
        while (a2 != 0 && (v = ((S_vv10 *)a0)->f00) != end) {
            if (v == a1->f00) {
                return ((S_vv10 *)a0)->f0c;
            }
            a0 += 16;
        }
        break;
    case 1:
        a2 = *(int *)((char *)0x8c2ee8b8 + (a0 << 2));
        end = -1;
        a0 = a2;
        while (a2 != 0 && (v = ((S_vv10 *)a0)->f00) != end) {
            if (v == a1->f00) {
                return ((S_vv10 *)a0)->f0c;
            }
            a0 += 16;
        }
        break;
    }
    return 0;
}
