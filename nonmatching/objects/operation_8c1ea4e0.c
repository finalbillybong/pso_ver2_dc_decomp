/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ea4e0
 * function: operation_8c1ea4e0
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 8 of 43 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
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
typedef struct Arg0_390 Arg0_390;
struct Object {
    char unknown0[0x318];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x6c];
    Arg0_390 *f390;
};
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern int call_8c025c50(Object *, void *);
int operation_8c1ea4e0(Object *o)
{
    int v1;
    float t1;
    float t2;
    int t3;
    t1 = njSin_8c37eb0c((void *)(o->f390));
    o->f318 = t1 * 1.5f;
    o->f31c = 0.0f;
    t2 = njCos_8c38c154((void *)(o->f390));
    o->f320 = 1.5f * t2;
    t3 = call_8c025c50(o, (void *)(&o->f318));
    v1 = (int)(t3 == 0);
    return (int)(v1);
}
