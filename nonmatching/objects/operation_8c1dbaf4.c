/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1dbaf4
 * function: operation_8c1dbaf4
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 38 reference instruction lines
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
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x8];
    float f08;
    char unknownc[0x14];
    Arg0_20 *f20;
};
extern void operator_delete_8c18de08(void *);
extern int operation_8c257e2c(int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(void *, int, int);
void operation_8c1dbaf4(Object *o, int a1)
{
    int t1;
    operator_delete_8c18de08((void *)(o->f20));
    o->f20 = 0;
    if (!(a1 == 0)) {
        o->f08 = 11.0f;
        t1 = operation_8c257e2c(a1);
        o->f20 = (Arg0_20 *)operator_new_8c18de4c(t1 + 1);
        t1++;
        strncpy_8c12b154((void *)(o->f20), a1, t1);
    }
}
