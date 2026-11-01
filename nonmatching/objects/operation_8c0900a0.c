/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0900a0
 * function: operation_8c0900a0
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 8 of 40 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
struct Object {
    char unknown0[0x108];
    int f108;
};
extern int get_current_area_8c032b10(void);
int operation_8c0900a0(Object *o, int a1)
{
    int v1;
    short *v4;
    short *v2;
    short v6;
    short v3;
    int t1;
    v1 = 0;
    t1 = get_current_area_8c032b10();
    v2 = *(short **)((t1 << 2) + 0x8c2ee8b8);
    v3 = (short)-1;
    v4 = v2;
    while (v2 != 0 && (v6 = *v4) != v3) {
        if (v6 == (short)a1) {
            o->f108 = (short)v1;
            return (int)v4;
        }
        v1++;
        v4 += 8;
    }
    return 0;
}
