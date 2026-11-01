/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ef420
 * function: handle_6x4E_player_can_be_revived_8c1ef420
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 18 of 109 reference instruction lines
 * differing bytes: 17
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
struct S_c8c021ef8 {
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
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a6d4(S_c8c021ef8 *);
extern int operation_02c350(void *);
extern void call_8c01c838(S_c8c021ef8 *, short);
extern void call_8c02aecc(S_c8c021ef8 *, float);
extern void operation_8c03bfa0(void *, void *);
extern int spawn_actor_child_if_allowed(void *);
void handle_6x4E_player_can_be_revived_8c1ef420(Object *o)
{
    int v1;
    unsigned short v2;
    int v3;
    int v4;
    int v7;
    int v8;
    S_c8c021ef8 *t1;
    int v13;
    int v9;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)o->f02;
    v7 = (int)0;
    if (v1 == 0) {
        v4 = (int)0;
        if ((unsigned short)v2 == (int)g_8c418248) {
            v4 = (int)1;
        }
        v7 = (int)v4;
    }
    v8 = (int)(v7 == 0);
    if (v8 != 0) {
        t1 = lookup_low_id((int)((unsigned short)v2));
        t2 = operation_8c02a6d4(t1);
        v13 = (int)t2;
        if (t2 != 0) {
            v9 = (int)(((t1->f7e0 & 1)) != 0);
            if (v9 != 0) {
                t3 = operation_02c350((void *)t1);
                t1->ff0 = *(short *)((char *)0x8c2e7432 + ((short)t3 << 1));
            } else {
                t4 = operation_02c350((void *)t1);
                t1->ff0 = *(short *)((char *)0x8c2e748c + ((short)t4 << 1));
            }
            call_8c01c838(t1, t1->ff0);
            t1->ff8 = t1->ffc - 1.0f;
            call_8c02aecc(t1, t1->ff8);
            t1->f580 = 0.0f;
            t1->f584 = 0.0f;
            t1->f588 = 0.0f;
            operation_8c03bfa0((void *)(&t1->f580), (void *)t1);
            t1->fe8 |= 0x40;
            t1->fe8 &= -0x21;
            spawn_actor_child_if_allowed((void *)t1);
        }
    }
}
