/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ea80c
 * function: handle_6x43_first_attack_8c1ea80c
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 34 of 71 reference instruction lines
 * differing bytes: 22
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
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a6d4(S_c8c021ef8 *);
extern int object_ready(void *);
extern void operation_8c1e8e60(int, int, int);
void handle_6x43_first_attack_8c1ea80c(Object *o)
{
    int v4;
    int v7;
    int v8;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    unsigned short id;
    t1 = lookup_low_id((int)(o->f02));
    t2 = operation_8c02a6d4(t1);
    if (t2 != 0) {
        t3 = object_ready((void *)t1);
        if (t3 != 0) {
            v4 = 0;
            v7 = 0;
            id = o->f02;
            if (g_8c4627c8 == 0 && id == g_8c418248) {
                v4 = (int)1;
            }
            if (v4 == 0 && o->f06 >= 0) {
                v7 = (int)1;
            }
            if (v7 != 0) {
                v8 = (int)(((t1->f310 & 0x8200)) != 0);
                if (v8 == 0) {
                    t1->f754 = o->f06;
                    t1->f390 = o->f04;
                    operation_8c1e8e60((int)t1, 5, 0);
                }
            }
        }
    }
}
