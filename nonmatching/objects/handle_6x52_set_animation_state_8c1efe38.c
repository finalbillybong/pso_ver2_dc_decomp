/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1efe38
 * function: handle_6x52_set_animation_state_8c1efe38
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 98 of 110 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
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
    int f08;
};
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
    char unknown314[0x260];
    short f574;
    char unknown576[0x2];
    int f578;
    short f57c;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a6d4(S_c8c021ef8 *);
extern void operation_8c1e8e60(int, int, int);
static inline int check(Object *o, unsigned short id)
{
    int c;
    int b;
    int a;
    c = 0;
    b = 0;
    a = 0;
    if (g_8c4627c8 == 0 && id == g_8c418248) {
        a = 1;
    }
    if (a == 0 && o->f04 >= 0) {
        b = 1;
    }
    if (b != 0 && 0x154 > o->f04) {
        c = 1;
    }
    return c;
}
void handle_6x52_set_animation_state_8c1efe38(Object *o)
{
    int v23;
    S_c8c021ef8 *t1;
    unsigned short id;
    id = o->f02;
    if (check(o, id)) {
        t1 = lookup_low_id((int)id);
        if (operation_8c02a6d4(t1) != 0) {
            if (check(o, o->f02)) {
                v23 = (int)(((t1->f310 & 0x8000)) != 0);
                if (v23 == 0) {
                    t1->f57c = o->f04;
                    t1->f578 = (int)(o->f08);
                    t1->f574 = o->f06;
                    operation_8c1e8e60((int)t1, 0x10, 0);
                }
            }
        }
    }
}
