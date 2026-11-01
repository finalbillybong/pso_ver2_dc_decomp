/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c294c
 * function: operation_8c0c294c
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 20 of 80 reference instruction lines
 * differing bytes: 22
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
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x226];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0xc];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
extern void operation_8c01c5f0(Object *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c0c294c(Object *o)
{
    float pm2;
    switch (o->f398) {
        case 0:
        o->f34 &= -0x200001;
        o->ff0 = (short)3;
        o->f398 = 1;
        case 1:
        operation_8c01c5f0(o);
        apply_object_velocity((void *)o);
        pm2 = 0.5f;
        o->f318 = o->f318 * 0.5f;
        o->f320 = pm2 * o->f320;
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        if (o->fec == 8) {
            return;
        }
        o->f398 = -1;
        return;
        case -1:
        o->f34 = -0x201 & o->f34;
        o->f3a4 = (int)(((unsigned int)o->f3a4 >> 1 << 1));
        o->f35a = (int)o->f330;
        o->f390 = 1;
    }
}
