/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07d900
 * function: operation_8c07d900
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 2 of 57 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
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
typedef struct Arg0_218 Arg0_218;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x4];
    int fec;
    char unknownf0[0x4c];
    int f13c;
    char unknown140[0xd8];
    Arg0_218 *f218;
    int f21c;
};
extern void call_8c07d9a8(Object *);
extern void operation_8c07da88(void *);
extern void operation_8c07da28(void *);
extern void operation_8c07dac0(void *, int);
extern int call_8c18e8a0(void *, int);
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
void operation_8c07d900(Object *o)
{
    int t1;
    int t2;
    if (o->f218 == 0) {
        call_8c07d9a8(o);
    }
    operation_8c07da88((void *)o);
    if (o->f21c <= (int)(o->f218)) {
        operation_8c07da28((void *)o);
        operation_8c07dac0((void *)o, 1);
    }
    t1 = call_8c18e8a0((void *)(o->f218), 0x3c);
    if (t1 == 0 && ((o->fec & 0x40)) == 0) {
        t2 = create_effect((void *)((int)o->f13c + 0x324), 0x6c, 0x10);
        if (t2 != 0) {
            bind_id((void *)t2, (unsigned short)(o->fe6));
        }
    }
}
