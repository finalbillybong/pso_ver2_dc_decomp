/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1aa424
 * function: operation_8c1aa424
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 8 of 114 reference instruction lines
 * differing bytes: 7
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_8c Arg0_8c;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x5e];
    Arg0_64 *f64;
    char unknown68[0x4];
    float f6c;
    char unknown70[0x1c];
    Arg0_8c *f8c;
    int f90;
    char unknown94[0x50];
    unsigned short fe4;
    char unknowne6[0x2];
    Arg0_e8 *fe8;
    int fec;
};
struct S_c8c021ef8 {
    char unknown0[0x4];
    short f04;
    char unknown6[0xbbe];
    int fbc4;
};
extern int g_8c324e70;
extern S_g8c418248 *g_8c418248;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void operation_8c05426c(void *, int, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c1aa558(int, void *, void *, int, void *, void *, void *);
extern void operation_8c05428c(void *, int, int);
void operation_8c1aa424(Object *o)
{
    int v1;
    S_c8c021ef8 *t1;
    float t2;
    int t3;
    S_c8c021ef8 *t4;
    S_c8c021ef8 *t5;
    if (g_8c324e70 == o->f90) {
        o->f04 |= 1;
        return;
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)t1 + 0x3c)));
        if (!(t2 > (o->f6c * o->f6c))) {
            operation_8c05426c((void *)o, 0, 1);
            if (o->fec != 0) {
                return;
            }
            o->fec = 1;
            t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t3 == 0) {
                return;
            }
            call_8c1aa558(t3, (void *)(((char *)o + 0x3c)), (void *)(o->f64), (int)(o->fe4), (void *)(o->fe8), (void *)(o->f8c), g_8c44bea0);
            return;
        }
        t4 = lookup_low_id((int)(o->fe4 & 0xffff));
        if (t4 != 0 && o->fec == 1) {
            v1 = (int)(t4->fbc4 == 0);
            if (v1 == 1) {
                operation_8c05428c((void *)o, 0, 1);
                o->fec = 0;
                t5 = lookup_low_id((int)(o->fe4 & 0xffff));
                if (t5 != 0) {
                    t5->f04 |= 1;
                }
            }
        }
    }
}
