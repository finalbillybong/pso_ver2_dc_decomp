/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f44dc
 * function: TObjEneRe7BeruraPunch_v17_8c0f44dc
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 2 of 44 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneRe7BeruraPunch.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x20];
    short f20;
};
struct Object {
    char unknown0[0xe8];
    unsigned short fe8;
};
extern void operation_8c0f3884(void *, void *, void *);
extern int operation_8c05bbf8(void);
extern int operation_8c05b228(short);
extern int lookup_object_by_id(unsigned short);
extern float object_random_fraction(void *);
extern void operation_8c05b5b4(int, void *);
void TObjEneRe7BeruraPunch_v17_8c0f44dc(Object *o, Arg1 *a1, int a2)
{
    int t1;
    int t2;
    int t3;
    float t4;
    operation_8c0f3884((void *)o, (void *)a1, (void *)a2);
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c05b228(a1->f20);
        if (t2 != 0) {
            t3 = lookup_object_by_id((unsigned short)(o->fe8));
            if (t3 != 0) {
                t4 = object_random_fraction((void *)t3);
                if (0.1f > t4) {
                    operation_8c05b5b4(t3, (void *)a1);
                }
            }
        }
    }
}
