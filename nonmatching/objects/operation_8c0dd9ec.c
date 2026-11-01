/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dd9ec
 * function: operation_8c0dd9ec
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 2 of 63 reference instruction lines
 * differing bytes: 30
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
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x44];
    int f7c;
};
extern int get_current_area_8c032b10(void);
extern int lookup_low_id(int);
int operation_8c0dd9ec(int a0)
{
    int v2;
    int v1;
    S_vv4 *v4;
    int v5;
    int v3;
    int t1;
    int t2;
    if (*(int *)0x8c46fe20 == 0) {
        return 0;
    }
    t1 = get_current_area_8c032b10();
    if (t1 == 0xf) {
        return 0;
    }
    v1 = (int)0;
    v2 = (int)(*(int *)0x8c46fe20 + 0x38);
    v3 = (int)a0;
    while (3 > v1) {
        v4 = (S_vv4 *)*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + (v1 << 2));
        if (v4 != 0) {
            v5 = !(v4->f34 & 1);
            if (v5 == 0) {
                if (v3-- == 0) {
                    t2 = lookup_low_id((int)(*(int *)0x8c418248 + v4->f7c + 1 & 3));
                    if (t2 == 0) {
                        return 0;
                    }
                    if ((t2 + 0x7e4) == 0) {
                        return 0;
                    }
                    return t2 + 0x7e4;
                }
            }
        }
        v1 = (int)(v1 + 1);
    }
    return 0;
}
