/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10eee4
 * function: operation_8c10eee4
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 10 of 112 reference instruction lines
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct S_x21824 S_x21824;
typedef struct S_x84272 S_x84272;
struct Object {
    int tag;
};
struct S_x21824 {
    float f00;
};
struct S_c8c053d84 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xba];
    int fdc;
    int fe0;
};
struct S_x84272 {
    float f00;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int active_unflagged_8c05b2dc(void *);
extern float squared_distance_xz(void *, void *);
extern void call_8c10efe0(Object *, void *, int, int);
int operation_8c10eee4(Object *o, int a1, int a2, float f0)
{
    S_c8c053d84 *t1;
    int v7;
    int v1;
    float t3;
    v7 = 0;
    o->tag = v7;
    for (v1 = v7; v1 < 0xa; v1++) {
        *(int *)((char *)((char *)o + 0x4) + (v1 * 0xc)) = 0xffff;
        ((S_x21824 *)((char *)(int *)((char *)o + 0xc) + v1 * 0xc))->f00 = 0.0f;
    }
    t1 = lookup_object_by_id((unsigned short)a2);
    if (active_unflagged_8c05b2dc((void *)t1) != 0) {
        f0 *= f0;
        for (v1 = 0; v1 < t1->fe0; v1++) {
            if (t1->fdc == 0) {
                break;
            }
            t3 = squared_distance_xz((void *)a1, (void *)(t1->fdc + v1 * 0x2c + 0x1c));
            if (f0 > t3) {
                *(int *)((char *)((char *)o + 0x4) + (o->tag * 0xc)) = t1->f20;
                v7 = 1;
                ((S_x84272 *)((char *)(int *)((char *)o + 0xc) + o->tag * 0xc))->f00 = t3;
                *(int *)((char *)((char *)o + 0x8) + (o->tag * 0xc)) = v1;
                if (o->tag >= 9) {
                    break;
                }
                o->tag += 1;
            }
        }
    }
    call_8c10efe0(o, (void *)(((char *)o + 0x4)), 0, (int)((int)o->tag + -1));
    return v7;
}
