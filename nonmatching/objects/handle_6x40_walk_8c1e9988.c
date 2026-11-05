/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e9988
 * function: handle_6x40_walk_8c1e9988
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 10 of 83 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
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
    unsigned short f02;
    float f04;
    float f08;
    int f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
    char unknown314[0x84];
    float f398;
    char unknown39c[0x4];
    float f3a0;
    char unknown3a4[0x1cc];
    int f570;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a6d4(S_c8c021ef8 *);
extern int operation_8c01379c(void *);
extern void operation_8c1e8e60(int, int, int);
void handle_6x40_walk_8c1e9988(Object *o)
{
    int v2;
    int v5;
    int v8;
    int t2;
    int t3;
    int t4;
    {
        Object *base = o;
        S_c8c021ef8 *t1;
        t1 = lookup_low_id((int)(base->f02));
        t2 = operation_8c02a6d4(t1);
        if (t2 != 0) {
            int v1;
            v1 = (int)0;
            v5 = v1;
            if (g_8c4627c8 == 0) {
                if (base->f02 == g_8c418248) {
                    v5 = 1;
                }
            }
            if (v5 == 0) {
                t3 = operation_8c01379c((void *)(&base->f04));
                if (0 == t3) {
                    v1 = (int)1;
                }
            }
            if (0 != v1) {
                v8 = (int)(((t1->f310 & 0x1e)) != 0);
                if (v8 != 0) {
                    t4 = operation_8c01379c((void *)(&base->f04));
                    if (t4 == 0) {
                        t1->f398 = base->f04;
                        t1->f3a0 = base->f08;
                    }
                    t1->f570 = (int)(base->f0c);
                    operation_8c1e8e60((int)t1, 2, 0);
                }
            }
        }
    }
}
