/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c055170
 * function: operation_8c055170
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 10 of 96 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode switch2ext)
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
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x8a];
    unsigned short f434;
    char unknown436[0x3a];
    int f470;
};
struct Frame {
    char unknown0[0x20];
};
extern int lookup_object_by_id(unsigned short);
extern void operation_8c059ea4(void *, int);
extern int call_8c05939c(int, int);
extern int call_8c05a2e8(Object *, Frame *, float);
extern void call_8c05be98(Object *, int);
void operation_8c055170(Object *o)
{
    Frame frame;
    int v5;
    int t1;
    int t3;
    int v4;
    int t2;
    int v3;
    int t4;
    t1 = lookup_object_by_id((unsigned short)(o->f434));
    if (t1 == 0) {
        operation_8c059ea4((void *)o, 4);
        o->f470 = 0;
    }
    t2 = call_8c05939c(t1, (int)(o->f3a8));
    if (t2 != 0) {
        operation_8c059ea4((void *)o, 3);
        return;
    }
    t3 = call_8c05a2e8(o, (Frame *)((&frame)), 10000.0f);
    v3 = (int)0x3a8;
    v4 = (int)0;
    while (t3 > v4) {
        v5 = (int)*(unsigned short *)((char *)((char *)(&frame) + 0x0) + (v4 << 3));
        if ((*(unsigned short *)((char *)((char *)o + 0x0) + (v3)) & 0xffff) != (unsigned short)v5) {
            t4 = call_8c05939c(t1, v5);
            if (t4 != 0) {
                call_8c05be98(o, v5);
                operation_8c059ea4((void *)o, 3);
                return;
            }
        }
        v4 = (int)(v4 + 1);
    }
    operation_8c059ea4((void *)o, 4);
    o->f470 = 0;
}
