/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c217c08
 * function: operation_8c217c08
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 4 of 33 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c41c634 S_L8c41c634;
typedef struct S_g8c418a00 S_g8c418a00;
struct S_L8c41c634 {
    char unknown0[0x10];
    char f10;
};
extern S_g8c418a00 *g_8c418a00;
extern S_L8c41c634 g_8c41c634;
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, int, int);
extern void operation_8c02e324(void *, void *, void *);
void operation_8c217c08(int a0)
{
    if (!(g_8c418a00 == 0)) {
        memset_8c12b880(((void *)&g_8c41c634), 0, 0x11);
        strncpy_8c12b154((void *)((void *)&g_8c41c634), (int)(0x19 + a0), 0x10);
        (&g_8c41c634)->f10 = (char)0;
        operation_8c02e324(g_8c418a00, (void *)(a0 + 0x4c), (void *)(a0 + 0x58));
    }
}
