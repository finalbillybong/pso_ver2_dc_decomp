/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1721e4
 * function: quest_op_get_ba_record_8c1721e4
 * language: c
 * reference size: 188 bytes
 * compiled size: 192 bytes (+2.1%)
 * differing lines: 66 of 75 reference instruction lines
 * differing bytes: 165
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x11ac];
    unsigned short f11ac;
    unsigned short f11ae;
    unsigned short f11b0;
    unsigned short f11b2;
    unsigned short f11b4;
    unsigned short f11b6;
    unsigned short f11b8;
};
extern S_g8c4db408 *g_8c4db408;
extern S_g8c4db9e4 *g_8c4db9e4;
void quest_op_get_ba_record_8c1721e4(int a0)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)g_8c4db9e4;
    if (v1 != 0) {
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11ac & 0xffff;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11ae & 0xffff;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11b0 & 0xffff;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11b2 & 0xffff;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11b4 & 0xffff;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11b6 & 0xffff;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0++ << 2)) = v1->f11b8 & 0xffff;
    }
}
