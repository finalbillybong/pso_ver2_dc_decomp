/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16d2b4
 * function: quest_op_switch_call_8c16d2b4
 * language: c
 * reference size: 84 bytes
 * compiled size: 80 bytes (-4.8%)
 * differing lines: 8 of 31 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db404 S_g8c4db404;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct Arg2 Arg2;
extern S_g8c4db404 *g_8c4db404;
extern S_g8c4db408 *g_8c4db408;
extern int g_8c4db41c;
extern int g_8c4db420;
void quest_op_switch_call_8c16d2b4(int a0, int a1, Arg2 *a2)
{
    int v1;
    int v2;
    unsigned short k;
    v1 = (int)*(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0 << 2));
    if (v1 < (unsigned char)a1 && v1 >= 0) {
        k = *(unsigned short *)((char *)a2 + (v1 << 1));
        v2 = (int)g_8c4db41c;
        g_8c4db41c = v2 + 1;
        *(int *)((char *)0x8c4db434 + (v2 << 2)) = (int)(g_8c4db420);
        g_8c4db420 = (int)(*(int *)((char *)((char *)g_8c4db404 + 0x0) + ((unsigned short)k << 2)));
    }
}
