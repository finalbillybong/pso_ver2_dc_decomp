/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c170074
 * function: quest_op_nop_F821_8c170074
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 20 of 52 reference instruction lines
 * differing bytes: 28
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    char f02;
    char f03;
    char f04;
    char f05;
    char unknown6[0x6];
    int f0c;
    char unknown10[0x4];
};
extern int g_8c418248;
extern int *g_8c4db408;
extern void operation_1c7dd4(void *);
extern int operation_194d60(unsigned short);
void quest_op_nop_F821_8c170074(int a0)
{
    Frame frame;
    int *t;
    a0 += 3;
    operation_1c7dd4(&frame);
    t = g_8c4db408;
    frame.f00 = *(int *)((char *)t + ((unsigned char)a0++ << 2));
    frame.f01 = *(int *)((char *)t + ((unsigned char)a0++ << 2));
    frame.f02 = *(int *)((char *)t + ((unsigned char)a0++ << 2));
    frame.f03 = *(int *)((char *)t + ((unsigned char)a0++ << 2));
    frame.f04 = *(int *)((char *)t + ((unsigned char)a0++ << 2));
    frame.f05 = *(int *)((char *)t + ((unsigned char)a0++ << 2));
    frame.f0c = operation_194d60(g_8c418248);
}
