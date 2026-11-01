/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c128a48
 * function: operation_8c128a48
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 8 of 98 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x1c];
    Vector3 f54;
    char unknown60[0x90];
    short ff0;
    char unknownf2[0x66];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x1ac];
    float f31c;
    char unknown320[0x4];
    Vector3 f324;
    char unknown330[0x3c];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    int f08;
};
extern void call_8c044320(Object *, Vector3, Vector3, float);
extern void operation_43fb4(void *, int, void *);
extern void apply_object_velocity(void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
void operation_8c128a48(Object *o)
{
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->f34 &= -0x101;
        o->ff0 = 1;
        *(Vector3 *)&o->f164 = *(Vector3 *)&o->f54;
        o->f398 = 1;
    case 1:
        o->f31c = 0.0f;
        *(Vector3 *)&o->f158 = *(Vector3 *)&o->f324;
        call_8c044320(o, o->f158, o->f164, o->f36c->f04);
        operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        apply_object_velocity((void *)o);
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
}
