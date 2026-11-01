/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13a470
 * function: handle_6x84_vol_opt_boss_actions_8c13a470
 * language: c
 * reference size: 140 bytes
 * compiled size: 136 bytes (-2.9%)
 * differing lines: 16 of 57 reference instruction lines
 * differing bytes: 92
 * provenance: generator draft (mode switch2)
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
    char unknown0[0xa];
    short f0a;
    short f0c;
};
extern void call_8c3889a4(void *, void *, int);
extern int lookup_object_by_id(unsigned short);
extern void operation_8c13d638(void *, int);
void handle_6x84_vol_opt_boss_actions_8c13a470(Object *o)
{
    int v1;
    int v4;
    int t1;
    int t2;
    call_8c3889a4((void *)((void *)0x8c4d9ba4), (void *)(((char *)o + 0x4)), 6);
    *(int *)0x8c4d9ba0 = o->f0c;
    if (o->f0a != 0) {
        v1 = (int)o->f0a;
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (*(char *)0x8c4d9ba4 << 1))));
        if (t1 != 0) {
            operation_8c13d638((void *)t1, 1);
        }
        v4 = (int)1;
        while (v1 > v4) {
            t2 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (*(char *)((char *)((char *)v4 + 0x0) + ((int)((void *)0x8c4d9ba4))) << 1))));
            if (t2 != 0) {
                operation_8c13d638((void *)t2, 0);
            }
            v4 = (int)(v4 + 1);
        }
    }
}
