/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e1020
 * function: TWindowKeyBoardBase_dtor_8c1e1020
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 42 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * class header: src/include/classes/TWindowKeyBoardBase.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_a4 Arg0_a4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x88];
    Arg0_a4 *fa4;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operator_delete_8c18de08(void *);
extern void operation_8c04bc10(void *, int);
extern void destroy_context_8c0db244(Object *, int);
extern void operation_8c122774(void *, Object *);
Object *TWindowKeyBoardBase_dtor_8c1e1020(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c277474;
        operator_delete_8c18de08(o->fa4);
        operation_8c04bc10(((char *)o + 0x8c), -1);
        operation_8c04bc10(((char *)o + 0x74), -1);
        destroy_context_8c0db244(o, 0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
