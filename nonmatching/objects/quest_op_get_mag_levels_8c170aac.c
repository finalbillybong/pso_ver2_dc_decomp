/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c170aac
 * function: quest_op_get_mag_levels_8c170aac
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 6 of 80 reference instruction lines
 * differing bytes: 6
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
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db408 S_g8c4db408;
struct S_c8c03b55c {
    char unknown0[0x1e8];
    short f1e8;
    short f1ea;
    short f1ec;
    short f1ee;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4db408 *g_8c4db408;
extern int lookup_low_id(int);
extern S_c8c03b55c *operation_8c03b55c(void *, int);
extern int call_8c18e768(int, int);
void quest_op_get_mag_levels_8c170aac(int a0)
{
    int v1;
    S_c8c03b55c *t2;
    int t1;
    t1 = lookup_low_id((int)g_8c418248);
    if (!(t1 == 0)) {
        t2 = operation_8c03b55c((void *)(t1 + 0xbcc), 1);
        if (t2 != 0) {
            v1 = a0 + 1;
            *(int *)((char *)((char *)g_8c4db408 + 0x0) + (a0 << 2)) = (short)call_8c18e768((int)(t2->f1e8), 0x64);
            a0 = v1 + 1;
            *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1 << 2)) = (short)call_8c18e768((int)(t2->f1ea), 0x64);
            v1 = a0 + 1;
            *(int *)((char *)((char *)g_8c4db408 + 0x0) + (a0 << 2)) = (short)call_8c18e768((int)(t2->f1ec), 0x64);
            *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1 << 2)) = (short)call_8c18e768((int)(t2->f1ee), 0x64);
        }
    }
}
