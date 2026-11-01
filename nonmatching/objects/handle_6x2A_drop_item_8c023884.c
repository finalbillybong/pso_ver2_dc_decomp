/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c023884
 * function: handle_6x2A_drop_item_8c023884
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 60 of 85 reference instruction lines
 * differing bytes: 50
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
typedef struct Object Object;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_bc8 S_vv21_bc8;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    int f08;
};
struct S_vv21 {
    char unknown0[0xbc8];
    S_vv21_bc8 *fbc8;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern int call_8c0c4f08(void *);
extern int operation_8c02c1ac(void *);
extern int operation_8c16ab90(void *, int, int, int, int, int);
static inline int check_8c023884(Object *o)
{
    int r;
    int rc;
    int rb;
    int ra;
    r = 0;
    rc = 0;
    rb = 0;
    ra = 0;
    if (g_8c4627c8 == 0) {
        if (o->f02 == g_8c418248) {
            ra = 1;
        }
    }
    if (ra == 0) {
        if (o->f04 >= 0) {
            rb = 1;
        }
    }
    if (rb != 0) {
        if (o->f06 >= 0) {
            rc = 1;
        }
    }
    if (rc != 0) {
        if (call_8c0c4f08((void *)(((char *)o + 0xc))) == 0) {
            r = 1;
        }
    }
    return r;
}
static inline S_vv21 *lookup_8c023884(int id)
{
    S_vv21 *p;
    if (id == 0xffff) {
        p = 0;
    } else if (id >= 0xc) {
        p = 0;
    } else {
        p = *(S_vv21 **)((char *)0x8c41ce2c + (id << 2));
    }
    return p;
}
void handle_6x2A_drop_item_8c023884(Object *o)
{
    S_vv21 *p;
    if (check_8c023884(o) != 0) {
        p = lookup_8c023884(o->f02);
        if (p != 0) {
            if (operation_8c02c1ac((void *)p) == 0) {
                operation_8c16ab90((void *)(p->fbc8), (int)p, o->f08, (int)(((char *)o + 0xc)), o->f04, o->f06);
            }
        }
    }
}
