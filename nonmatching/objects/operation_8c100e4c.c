/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c100e4c
 * function: operation_8c100e4c
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 6 of 49 reference instruction lines
 * differing bytes: 3
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_vv4 S_vv4;
struct Object {
    Arg0_0 *tag;
    int f04;
};
struct Arg0_0 {
    char unknown0[0x4];
    int f04;
};
struct S_vv4 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
};
extern float g_8c30b048;
extern int g_8c41cb60;
extern void call_8c3a9436(Object *);
void operation_8c100e4c(Object *o, float f0)
{
    S_vv4 *v4;
    int v1;
    int v2;
    Arg0_0 *v7;
    v2 = (short)((unsigned int)o->tag->f04 >> 0x10);
    v4 = (S_vv4 *)g_8c41cb60;
    v1 = o->f04;
    o->f04 = 0;
    call_8c3a9436(o);
    do {
        v4->f08 = -v4->f08 / f0;
        if (g_8c30b048 > v4->f08) {
            v4->f08 = g_8c30b048;
        }
        v4++;
    } while (--v2);
    o->f04 = v1;
    v7 = o->tag;
    o->tag = 0;
    call_8c3a9436(o);
    o->tag = v7;
}
