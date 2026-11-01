/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c170900
 * function: quest_op_equip_item_8c170900
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 16 of 41 reference instruction lines
 * differing bytes: 15
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
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    char f00;
    char f01;
    char f02;
    char unknown3[0x11];
};
extern S_g8c4db408 *g_8c4db408;
extern void operation_1c7dd4(void *);
extern void operation_8c163e70(int, void *);
void quest_op_equip_item_8c170900(int a0)
{
    Frame frame;
    char *v3;
    char *v1;
    v1 = (char *)*(int *)((char *)g_8c4db408 + (a0++ << 2));
    operation_1c7dd4((void *)(&frame));
    v3 = (char *)g_8c4db408;
    (&frame)->f00 = *(int *)(v3 + (a0++ << 2));
    (&frame)->f01 = *(int *)(v3 + (a0++ << 2));
    (&frame)->f02 = *(int *)(v3 + (a0 << 2));
    operation_8c163e70((int)(v1), (void *)(&frame));
}
