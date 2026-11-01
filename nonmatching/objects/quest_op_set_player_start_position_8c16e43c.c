/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16e43c
 * function: quest_op_set_player_start_position_8c16e43c
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 18 of 67 reference instruction lines
 * differing bytes: 82
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
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern void operation_8c02a438(int, void *, int);
extern int lookup_low_id(int);
extern void operation_8c0a1b78(void *);
void quest_op_set_player_start_position_8c16e43c(int a0, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    v1 = (char *)*(int *)0x8c4db408;
    (&frame)->f00 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a1++ << 2));
    (&frame)->f04 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a1++ << 2));
    (&frame)->f08 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a1++ << 2));
    operation_8c02a438(a0, (void *)(&frame), (int)((float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a1 << 2)) * 65536.0f / 360.0f));
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0 && (unsigned short)a0 == *(int *)0x8c418248) {
        operation_8c0a1b78((void *)t1);
    }
}
