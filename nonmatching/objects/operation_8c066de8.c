/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c066de8
 * function: operation_8c066de8
 * language: c
 * reference size: 72 bytes
 * compiled size: 76 bytes (+5.6%)
 * differing lines: 8 of 28 reference instruction lines
 * differing bytes: 43
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x36a];
    short f69c;
};
extern int call_8c18e768(int, int);
void operation_8c066de8(Object *o)
{
    int v1;
    int t1;
    v1 = (int)o->f198;
    t1 = call_8c18e768(v1, 0xa);
    v1 = v1 - t1;
    t1 = t1 + t1;
    {
        int lim = o->f330;
        while ((short)v1 >= (short)lim) {
            v1 = v1 - t1;
        }
    }
    o->f69c = v1;
}
