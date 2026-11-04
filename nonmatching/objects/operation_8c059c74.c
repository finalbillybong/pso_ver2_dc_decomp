/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c059c74
 * function: operation_8c059c74
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 12 of 73 reference instruction lines
 * differing bytes: 24
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x18];
    Vector3 f78;
    char unknown84[0xec];
    float f170;
    float f174;
    float f178;
    char unknown17c[0x19c];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    int f334;
};
extern void attach_and_insert_object(Object *);
void operation_8c059c74(Object *o)
{
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&o->f54 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f3c;
    attach_and_insert_object(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    o->f318 = 0.0f;
    o->f31c = 0.0f;
    o->f320 = 0.0f;
    o->f170 = 0.0f;
    o->f174 = 0.0f;
    o->f178 = 0.0f;
    o->f334 = 0;
}
