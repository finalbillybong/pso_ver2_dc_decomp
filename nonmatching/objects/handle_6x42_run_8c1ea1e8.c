/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ea1e8
 * function: handle_6x42_run_8c1ea1e8
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 22 of 73 reference instruction lines
 * differing bytes: 15
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
    float f04;
    float f08;
};
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
    char unknown314[0x84];
    float f398;
    char unknown39c[0x4];
    float f3a0;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a6d4(S_c8c021ef8 *);
extern int operation_8c01379c(void *);
extern void operation_8c1e8e60(int, int, int);
void handle_6x42_run_8c1ea1e8(Object *o)
{
    int v1;
    int v2;
    int v5;
    int v8;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    unsigned short id;
    t1 = lookup_low_id((int)(o->f02));
    t2 = operation_8c02a6d4(t1);
    if (t2 != 0) {
        v1 = (int)0;
        v5 = (int)v1;
        id = o->f02;
        if (g_8c4627c8 == 0) {
            v2 = (int)v1;
            if (id == g_8c418248) {
                v2 = (int)1;
            }
            v5 = (int)v2;
        }
        if (v5 == 0) {
            t3 = operation_8c01379c((void *)(&o->f04));
            if (t3 == 0) {
                v1 = (int)1;
            }
        }
        if (v1 != 0) {
            v8 = (int)(((t1->f310 & 0x1e)) != 0);
            if (v8 != 0) {
                t1->f398 = o->f04;
                t1->f3a0 = o->f08;
                operation_8c1e8e60((int)t1, 4, 0);
            }
        }
    }
}
