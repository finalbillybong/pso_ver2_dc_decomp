/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e2278
 * function: operation_8c0e2278
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 4 of 73 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2;
 *   offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B: RAM, trace and sampled
 *   call I/O); not proof
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
    int tag;
    char unknown4[0x18];
    float f1c;
    Arg0_20 *f20;
    char unknown24[0x4];
    float f28;
};
extern void operator_delete_8c18de08(void *);
extern int operation_8c257e3c(int, unsigned int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(void *, int, int);
void operation_8c0e2278(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    if (o->f20 != 0 && ((o->tag & 0x20)) != 0) {
        o->tag &= -0x21;
        operator_delete_8c18de08((void *)(o->f20));
    }
    if (a1 != 0 && ((a2 & 0x20)) != 0) {
        t1 = operation_8c257e3c(a1, (unsigned int)0x400);
        t2 = operator_new_8c18de4c((int)(t1 + 1));
        o->f20 = (Arg0_20 *)t2;
        strncpy_8c12b154((void *)(o->f20), a1, (int)(t1 + 1));
        o->tag |= 0x20;
    } else {
        o->f20 = (Arg0_20 *)a1;
    }
    if (o->f28 > 0.0f) {
        o->f1c = 0.0f;
    }
    o->tag &= -0xd2;
    o->tag |= a2 & 0xc1;
}
