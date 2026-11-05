/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a4964
 * function: operation_8c0a4964
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 4 of 39 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
};
extern int g_8c46f0a0;
extern char g_8c285108[];
extern void adjust_vector_scaled(void *, void *, float);
extern void operation_8c0a237c(void *, void *);
void operation_8c0a4964(Object *o)
{
    adjust_vector_scaled((void *)(((char *)o + 0x20)), (void *)(o->f38 * 0x18 + g_8c285108), 0.725f);
    adjust_vector_scaled((void *)(((char *)o + 0x2c)), (void *)((int)(o->f38 * 0x18 + g_8c285108) + 0xc), 0.725f);
    g_8c46f0a0 = 1;
    operation_8c0a237c((void *)(((char *)o + 0x20)), (void *)(((char *)o + 0x2c)));
}
