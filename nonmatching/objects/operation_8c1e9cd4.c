/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e9cd4
 * function: operation_8c1e9cd4
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 20 of 91 reference instruction lines
 * differing bytes: 22
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
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2f6];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x3c];
    Arg0_390 *f390;
    char unknown394[0x31c];
    short f6b0;
    char unknown6b2[0x512];
    int fbc4;
};
extern int g_8c418248;
extern float compute_default_scale(void *, void *);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern int call_8c025c50(Object *, void *);
int operation_8c1e9cd4(Object *o)
{
    int t4;
    void *pm3;
    int pm5;
    float pm7;
    float pm9;
    float t2;
    float t1;
    float pm6;
    if (!(0 != (o->fbc4 == 0))) {
        return 0;
    }
    pm3 = (void *)((0x564 + (char *)o));
    pm7 = compute_default_scale(pm3, (void *)o);
    t1 = pm7;
    pm9 = njSin_8c37eb0c((void *)(o->f390));
    t2 = pm9;
    pm6 = t1 * t2;
    o->f318 = pm6;
    o->f31c = 0.0f;
    t2 = njCos_8c38c154((void *)(o->f390));
    t2 = t2 * t1;
    pm3 = (void *)(&o->f318);
    o->f320 = t2;
    t4 = call_8c025c50(o, pm3);
    if (t4 == 0) {
        return 1;
    }
    pm5 = (int)o->f20 == g_8c418248;
    if (!((pm5) == 0)) {
        if ((((o->f350 & 1)) != 0) != 0) {
            pm5 = (int)(int)o->f6b0;
            if (pm5 == -1) {
                return 0;
            }
            goto L_8c1e9d7e;
        }
        if (!(t4 != 4)) {
            return 1;
        }
    }
L_8c1e9d7e:
    ;
    return 0;
}
