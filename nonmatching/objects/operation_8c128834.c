/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c128834
 * function: operation_8c128834
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 8 of 94 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode switch2)
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
typedef struct S_c8c012a14 S_c8c012a14;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x27a];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x34];
    float f3dc;
    char unknown3e0[0x2];
    unsigned short f3e2;
};
struct S_c8c012a14 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
};
extern S_c8c012a14 *operation_8c012a14(int);
extern void clear_flag29_request_8c128a2c(void *);
extern void call_8c0441d8(Object *, Vector3);
extern float call_8c0444f8(Object *, float, Vector3);
extern void call_8c044018(Object *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
extern void operation_8c0521a0(void *);
void operation_8c128834(Object *o)
{
    S_c8c012a14 *t1;
    float t2;
    t1 = operation_8c012a14((int)(o->f3e2));
    if (t1 == 0 || ((t1->f34 & 0x800)) != 0) {
        clear_flag29_request_8c128a2c((void *)o);
        return;
    }
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->ff0 = 1;
        o->f3a4 &= -0x10001;
        o->f398 = 1;
    case 1:
        call_8c0441d8(o, *(Vector3 *)&t1->f3c);
        t2 = call_8c0444f8(o, o->f36c->f04, *(Vector3 *)&t1->f3c);
        o->f3dc = t2;
        call_8c044018(o);
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        operation_8c0521a0((void *)o);
    }
}
