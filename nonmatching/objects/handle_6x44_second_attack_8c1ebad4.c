/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ebad4
 * function: handle_6x44_second_attack_8c1ebad4
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 30 of 76 reference instruction lines
 * differing bytes: 18
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
    unsigned short f02;
    short f04;
    short f06;
};
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
    char unknown314[0x7c];
    int f390;
    char unknown394[0x3c0];
    short f754;
    short f756;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a6d4(S_c8c021ef8 *);
extern int object_ready(void *);
extern void operation_8c1e8e60(int, int, int);
static inline int is_local_owner(Object *o)
{
    int r;
    unsigned short id;
    r = 0;
    id = o->f02;
    if (g_8c4627c8 == 0 && id == g_8c418248) {
        r = 1;
    }
    return r;
}
void handle_6x44_second_attack_8c1ebad4(Object *o)
{
    int v7;
    int v8;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(o->f02));
    t2 = operation_8c02a6d4(t1);
    if (t2 != 0) {
        t3 = object_ready((void *)t1);
        if (t3 != 0) {
            v7 = 0;
            if (is_local_owner(o) == 0 && o->f06 >= 0) {
                v7 = (int)1;
            }
            if (v7 != 0) {
                v8 = (int)(((t1->f310 & 0x8200)) != 0);
                if (v8 == 0) {
                    t1->f754 = o->f06;
                    t1->f756 = o->f06;
                    t1->f390 = o->f04;
                    operation_8c1e8e60((int)t1, 6, 0);
                }
            }
        }
    }
}
