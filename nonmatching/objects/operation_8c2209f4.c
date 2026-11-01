/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2209f4
 * function: operation_8c2209f4
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 108 of 125 reference instruction lines
 * differing bytes: 109
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
typedef struct S_g8c505a00 S_g8c505a00;
struct S_g8c505a00 {
    char unknown0[0x64];
    int f64;
};
extern char g_8c336bb8[];
extern char g_8c336cd8[];
extern char g_8c336df8[];
extern void set_position_8c21f054(void *, void *);
extern void call_8c21f170(S_g8c505a00 *, int);
void operation_8c2209f4(int a0, int a1)
{
    int c;
    int off;
    switch (a0) {
    case 0:
        c = (char)a1;
        off = c * 0xc;
        set_position_8c21f054((void *)(*(S_g8c505a00 **)0x8c505a00), (void *)(off + 0x8c336b28));
        (*(S_g8c505a00 **)0x8c505a00)->f64 = (int)((float)*(int *)((char *)(int *)(g_8c336bb8 + 4) + off) * 65536.0f / 360.0f);
        call_8c21f170(*(S_g8c505a00 **)0x8c505a00, c);
        return;
    case 1:
        c = (char)a1;
        off = c * 0xc;
        set_position_8c21f054((void *)(*(S_g8c505a00 **)0x8c505a00), (void *)(off + 0x8c336c48));
        (*(S_g8c505a00 **)0x8c505a00)->f64 = (int)((float)*(int *)((char *)(int *)(g_8c336cd8 + 4) + off) * 65536.0f / 360.0f);
        call_8c21f170(*(S_g8c505a00 **)0x8c505a00, c);
        return;
    case 2:
        c = (char)a1;
        off = c * 0xc;
        set_position_8c21f054((void *)(*(S_g8c505a00 **)0x8c505a00), (void *)(off + 0x8c336d68));
        (*(S_g8c505a00 **)0x8c505a00)->f64 = (int)((float)*(int *)((char *)(int *)(g_8c336df8 + 4) + off) * 65536.0f / 360.0f);
        call_8c21f170(*(S_g8c505a00 **)0x8c505a00, c);
        return;
    }
}
