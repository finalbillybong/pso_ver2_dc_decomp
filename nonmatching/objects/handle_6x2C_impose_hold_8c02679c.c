/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02679c
 * function: handle_6x2C_impose_hold_8c02679c
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 36 of 97 reference instruction lines
 * differing bytes: 36
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv19 S_vv19;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    float f08;
    float f0c;
    float f10;
};
struct S_vv19 {
    char unknown0[0x350];
    int f350;
    char unknown354[0x35c];
    short f6b0;
    short f6b2;
    char unknown6b4[0x4];
    float f6b8;
    float f6bc;
    float f6c0;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern int operation_8c01379c(void *);
static inline int check_8c02679c(Object *o)
{
    int r;
    int rb;
    int ra;
    r = 0;
    rb = 0;
    ra = 0;
    if (g_8c4627c8 == 0) {
        if (o->f02 == g_8c418248) {
            ra = 1;
        }
    }
    if (ra == 0) {
        if (operation_8c01379c((void *)(&o->f08)) == 0) {
            rb = 1;
        }
    }
    if (rb != 0) {
        if (!(0.0f > o->f10)) {
            r = 1;
        }
    }
    return r;
}
static inline S_vv19 *lookup_8c02679c(int id)
{
    S_vv19 *p;
    if (id == 0xffff) {
        p = 0;
    } else if (id >= 0xc) {
        p = 0;
    } else {
        p = *(S_vv19 **)((char *)0x8c41ce2c + (id << 2));
    }
    return p;
}
void handle_6x2C_impose_hold_8c02679c(Object *o)
{
    S_vv19 *p;
    float y;
    if (check_8c02679c(o) != 0) {
        p = lookup_8c02679c(o->f02);
        if (p != 0) {
            p->f6b2 = o->f06;
            p->f6b0 = o->f04;
            y = o->f0c;
            p->f6bc = o->f08;
            p->f6c0 = y;
            p->f6b8 = o->f10;
            p->f350 |= 1;
        }
    }
}
