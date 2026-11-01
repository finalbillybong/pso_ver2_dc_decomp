/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1caad0
 * function: operation_8c1caad0
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 38 of 46 reference instruction lines
 * differing bytes: 51
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
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
    char unknown30[0x18];
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    int f5c;
};
struct Arg0_2c {
    char unknown0[0x5c];
    float f5c;
};
extern void operation_8c04b244(float, int, float, int, float);
void operation_8c1caad0(Object *o)
{
    operation_8c04b244(o->f48, -1, o->f4c, (int)(o->f58), -1.0f / (o->f2c->f5c + 0.1495f));
    operation_8c04b244(o->f50, -1, o->f54, (int)(o->f5c), -1.0f / (o->f2c->f5c + 0.1495f));
}
