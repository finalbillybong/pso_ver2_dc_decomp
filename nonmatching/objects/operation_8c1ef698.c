/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ef698
 * function: operation_8c1ef698
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 20 of 91 reference instruction lines
 * differing bytes: 21
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
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    float ffc;
    char unknown100[0x480];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x254];
    int f7e0;
};
extern void operation_8c1e8e60(Object *, int, int);
extern int operation_02c350(Object *);
extern void hs_8c01c838(Object *, short);
extern void hs_8c02aecc(Object *, float);
extern void operation_8c03bfa0(void *, Object *);
void operation_8c1ef698(Object *o)
{
    int v1;
    int t1;
    int t2;
    if (o != 0) {
        operation_8c1e8e60(o, 0xf, 0);
        v1 = (int)(((o->f7e0 & 1)) != 0);
        if (v1 != 0) {
            t1 = operation_02c350(o);
            o->ff0 = *(short *)((char *)0x8c2e7432 + ((short)t1 << 1));
        } else {
            t2 = operation_02c350(o);
            o->ff0 = *(short *)((char *)0x8c2e748c + ((short)t2 << 1));
        }
        hs_8c01c838(o, o->ff0);
        o->ff8 = o->ffc - 1.0f;
        hs_8c02aecc(o, o->ff8);
        o->f580 = 0.0f;
        o->f584 = 0.0f;
        o->f588 = 0.0f;
        operation_8c03bfa0(&o->f580, o);
        o->fe8 |= 0x40;
        o->fe8 &= -0x21;
        o->f588 = 1.0f;
    }
}
