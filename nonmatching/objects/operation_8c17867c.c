/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17867c
 * function: operation_8c17867c
 * language: c
 * reference size: 184 bytes
 * compiled size: 180 bytes (-2.2%)
 * differing lines: 2 of 69 reference instruction lines
 * differing bytes: 159
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x34a];
    int f350;
    char unknown354[0x20];
    int f374;
    unsigned short f378;
};
extern int lookup_object_by_id(unsigned short);
extern int hierarchy_is_active(void *);
extern void call_8c178734(Object *);
extern void operation_8c17882c(void *);
extern void operation_8c178878(void *);
extern void operation_8c1788ac(void *);
void operation_8c17867c(Object *o)
{
    int v1;
    char *v28;
    int t1;
    int t2;
    v1 = (int)(unsigned short)o->f378;
    if (v1 != 0xffff && (unsigned int)0x4000 > v1) {
        t1 = lookup_object_by_id((unsigned short)(o->f378));
        o->f374 = (int)(t1);
    } else {
        o->f374 = 0;
    }
    v28 = (char *)o->f374;
    if (v28 != 0) {
        t2 = hierarchy_is_active((void *)v28);
        if (t2 != 0) {
            goto L_8c1786c4;
        }
    }
    o->f04 |= 1;
    return;
L_8c1786c4:;
    if (o->f350 != 0) {
        if (o->f350 == 1) {
            goto L_8c1786e6;
        }
        if (o->f350 == 2) {
            goto L_8c1786f0;
        }
        if (o->f350 == 3) {
            goto L_8c1786fa;
        }
        return;
    }
    call_8c178734(o);
    return;
L_8c1786e6:;
    operation_8c17882c((void *)o);
    return;
L_8c1786f0:;
    operation_8c178878((void *)o);
    return;
L_8c1786fa:;
    operation_8c1788ac((void *)o);
}
