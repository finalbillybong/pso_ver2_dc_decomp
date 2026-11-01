/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e9a58
 * function: operation_8c1e9a58
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 14 of 63 reference instruction lines
 * differing bytes: 32
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
typedef struct S_x79216 S_x79216;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x16];
    float f108;
    char unknown10c[0x4];
    int f110;
    char unknown114[0x1f6];
    short f30a;
    char unknown30c[0x260];
    float f56c;
};
struct S_x79216 {
    float f00;
};
extern void operation_8c1e8e60(int, short, int);
extern short operation_8c1e9dc0(void *);
extern int operation_8c0257ec(void *, int);
extern void store_default_actor_scale(void *, void *);
extern void operation_021f88(void *, int, short);
void operation_8c1e9a58(Object *o)
{
    int t2;
    int t1;
    operation_8c1e8e60((int)o, (int)o->f30a, 6);
    t1 = (int)operation_8c1e9dc0((void *)o);
    t2 = operation_8c0257ec((void *)o, t1);
    if (!(0 == t2)) {
        t2 = o->fe8;
        o->fe8 = t2 | 0x80;
    }
    store_default_actor_scale((void *)(((char *)o + 0x564)), (void *)o);
    operation_021f88((void *)o, 2, (short)t1);
    o->f108 = ((S_x79216 *)(o->f110 + 8 + (o->ff0 << 4)))->f00 * o->f56c;
    o->fe8 |= 0x100;
}
