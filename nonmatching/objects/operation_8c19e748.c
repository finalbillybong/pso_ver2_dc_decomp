/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19e748
 * function: operation_8c19e748
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 4 of 56 reference instruction lines
 * differing bytes: 4
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
typedef struct Object Object;
struct Object {
    int tag;
};
extern void operator_delete_8c18de08(int);
extern int operation_8c257e2c(int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(int, int, int);
int operation_8c19e748(Object *o, int a1, int a2, int a3, int a4)
{
    int t1;
    if (a2 != 0 && ((o->tag & a3)) != 0) {
        o->tag &= ~a3;
        operator_delete_8c18de08(a2);
    }
    if (a1 != 0 && a4 != 0) {
        t1 = operation_8c257e2c(a1);
        a2 = operator_new_8c18de4c((int)(t1 + 1));
        strncpy_8c12b154(a2, a1, (int)(t1 + 1));
        o->tag |= a3;
    } else {
        a2 = (int)a1;
    }
    return a2;
}
