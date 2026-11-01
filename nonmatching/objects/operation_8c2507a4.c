/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2507a4
 * function: operation_8c2507a4
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 4 of 88 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
struct Arg0_20 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void request_resource_release(void *);
extern int operation_8c1d0224(int, int);
extern int lookup_low_id(int);
extern void call_8c18e720(int, int);
extern void operation_8c1d02c0(int, int, int);
void operation_8c2507a4(Object *o)
{
    int v6;
    char *v8;
    int v7;
    int v9;
    int t1;
    int t2;
    if (o->f20 != 0) {
        request_resource_release((void *)(o->f20));
        o->f20 = (Arg0_20 *)0;
    }
    t1 = operation_8c1d0224((int)((void *)0x8c33f834), (int)((void *)0x8c33f83c));
    o->f20 = (Arg0_20 *)t1;
    if (o->f20 != 0) {
        v6 = (int)0;
        v7 = (int)0x7e4;
        o->f20->f80 = (o->f20->f80 & 0xffff) | 0x40;
        o->f20->f80 = (o->f20->f80 & 0xffff) | 0x80;
        goto L_8c250842;
        v8 = (char *)v6;
L_8c2507f2:;
        t2 = lookup_low_id((int)(v8));
        if (t2 != 0) {
            v9 = (int)((int)o + (int)(v8) * 0x18 + 0x24);
            call_8c18e720(v9, (int)(t2 + v7));
            operation_8c1d02c0((int)(o->f20), v9, (int)(v8));
        } else {
            *(char *)((char *)((char *)o + 0x24) + ((int)(v8) * 0x18)) = 0;
            operation_8c1d02c0((int)(o->f20), (int)((int)o + (int)(v8) * 0x18 + 0x24), (int)(v8));
        }
        v6 = (int)(v8 + 1);
L_8c250842:;
        v8 = (char *)v6;
        if (4 > v6) {
            goto L_8c2507f2;
        }
    }
}
