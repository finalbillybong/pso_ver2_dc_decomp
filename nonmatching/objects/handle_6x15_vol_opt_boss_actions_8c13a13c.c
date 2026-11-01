/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13a13c
 * function: handle_6x15_vol_opt_boss_actions_8c13a13c
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 2 of 145 reference instruction lines
 * differing bytes: 2
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
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
};
extern int lookup_object_by_id(unsigned short);
extern void begin_action_8c13b5d0(void *, int, int, int);
extern void interrupt_state_8c13be60(int);
extern void call_8c150ce0(int);
extern void operation_8c13d46c(void *);
extern void operation_8c15281c(void *, short);
extern void request_motion_8c1526f8(void *, short);
extern void operation_8c152754(void *);
extern void operation_8c1527ac(void *, short);
extern void operation_8c154ea4(void *, float);
void handle_6x15_vol_opt_boss_actions_8c13a13c(Object *o)
{
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    switch (o->f04) {
    case 0:
        t1 = lookup_object_by_id((unsigned short)(*(short *)0x8c313128));
        if (t1 == 0) {
            return;
        }
        begin_action_8c13b5d0((void *)t1, (int)(o->f08), (int)(o->f0a), 0x258);
        return;
    case 1:
        interrupt_state_8c13be60(0);
        return;
    case 2:
        t2 = lookup_object_by_id((unsigned short)(*(short *)0x8c31311a));
        if (t2 != 0) {
            call_8c150ce0(t2);
        }
        v3 = (int)0;
        while (6 > v3) {
            t3 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (v3 << 1))));
            if (t3 != 0) {
                operation_8c13d46c((void *)t3);
            }
            v3 = (int)(v3 + 1);
        }
        return;
    case 3:
        t4 = lookup_object_by_id((unsigned short)(*(short *)0x8c313118));
        if (t4 == 0) {
            return;
        }
        operation_8c15281c((void *)t4, o->f06);
        return;
    case 4:
        t5 = lookup_object_by_id((unsigned short)(*(short *)0x8c313118));
        if (t5 == 0) {
            return;
        }
        request_motion_8c1526f8((void *)t5, o->f06);
        return;
    case 5:
        t6 = lookup_object_by_id((unsigned short)(*(short *)0x8c313118));
        if (t6 == 0) {
            return;
        }
        operation_8c152754((void *)t6);
        return;
    case 6:
        t7 = lookup_object_by_id((unsigned short)(*(short *)0x8c313118));
        if (t7 == 0) {
            return;
        }
        operation_8c1527ac((void *)t7, o->f06);
        return;
    case 7:
        t8 = lookup_object_by_id((unsigned short)(*(short *)0x8c313118));
        if (t8 != 0) {
            operation_8c154ea4((void *)t8, (float)o->f08);
        }
        return;
    }
}
