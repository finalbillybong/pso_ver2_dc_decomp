/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c234bf0
 * function: operation_8c234bf0
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 12 of 77 reference instruction lines
 * differing bytes: 10
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_0 S_vv6_0;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv6_4_0 S_vv6_4_0;
struct Object {
    char unknown0[0x3c];
    char f3c;
    char f3d;
};
struct S_vv6 {
    S_vv6_0 *f00;
    S_vv6_4 *f04;
};
extern char g_8c339168[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void operation_8c234bf0(Object *o)
{
    int v2;
    S_vv6 *v6;
    int v1;
    int v7;
    int v4;
    int v5;
    int v3;
    v7 = o->f3c;
    v5 = o->f3d;
    v1 = (int)0;
    v2 = (int)(void *)0x8c2e1db8;
    v3 = (int)0x180000;
    v6 = (S_vv6 *)v2;
    v4 = (int)-0xf0f10;
    while (v5 > v1) {
        if (v7 == v1) {
            njPrintColor_8c38c5b6(-0x100);
        }
        debug_print_at_8c38cf80((int)(v1 + 0xa | 0xa0000), (void *)((g_8c339168 + 0xd6)), v6->f00);
        debug_print_at_8c38cf80((int)(v1 + 0xa | v3), (void *)((g_8c339168 + 0xd6)), *(S_vv6_4_0 **)((char *)((char *)v6->f04 + 0x0) + (*(char *)((char *)((char *)o + 0x3e) + (v1)) << 2)));
        njPrintColor_8c38c5b6(v4);
        v6 = (S_vv6 *)((char *)v6 + 8);
        v1 = (int)(v1 + 1);
    }
}
