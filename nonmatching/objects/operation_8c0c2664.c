/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c2664
 * function: operation_8c0c2664
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 2 of 75 reference instruction lines
 * differing bytes: 6
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
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x242];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
};
struct Arg0_36c {
    float f00;
    float f04;
    Arg0_36c_8 *f08;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
extern void operation_8c01c5f0(Object *);
extern float call_8c0444f8(Object *, float, Vector3);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c0c2664(Object *o)
{
    float t1;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->ff0 = 1;
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        if (o->f334 != 0) {
            t1 = call_8c0444f8(o, o->f36c->f04, *(Vector3 *)&o->f334->f324);
            if (!(t1 > o->f36c->f00)) {
                if (!(o->f36c->f04 > t1)) {
                    goto L_8c0c26d2;
                }
            }
            o->f334 = (Arg0_334 *)0;
L_8c0c26d2:;
            operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        }
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
    }
}
