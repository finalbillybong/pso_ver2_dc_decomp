/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17a6a4
 * function: TItemWpnPArms_v52_8c17a6a4
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 6 of 78 reference instruction lines
 * differing bytes: 20
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
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0x2];
    short f142;
    char unknown144[0x90];
    int f1d4;
    char unknown1d8[0x34];
    short f20c;
};
void TItemWpnPArms_v52_8c17a6a4(Object *o)
{
    int v2;
    char *v1;
    int t1;
    int t2;
    v1 = (char *)o->f38;
    v2 = (int)o->f20c;
    t1 = ((int (*)(void))0x8c17a760)();
    if (t1 == 0) {
        o->f20c = 8;
        *(int *)0x8c4689f4 |= 4;
    }
    ((void (*)(Object *, void *, int))0x8c075730)(o, o->f13c, o->f142);
    if (o->f20c != 8) {
        ((void (*)(Object *, int))0x8c076fc8)(o, 1);
    }
    o->f38 = (int)(o->f1d4);
    t2 = ((int (*)(Object *))0x8c17a760)(o);
    if (t2 == 0) {
        o->f20c = 8;
        *(int *)0x8c4689f4 |= 4;
    } else {
        o->f20c = v2;
    }
    ((void (*)(Object *, void *, int))0x8c075730)(o, o->f13c, 0x23);
    if (o->f20c != 8) {
        ((void (*)(Object *, int))0x8c076fc8)(o, 0);
    }
    o->f38 = (int)(v1);
    o->f20c = v2;
}
