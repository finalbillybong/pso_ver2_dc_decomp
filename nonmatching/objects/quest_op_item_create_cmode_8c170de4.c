/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c170de4
 * function: quest_op_item_create_cmode_8c170de4
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 8 of 72 reference instruction lines
 * differing bytes: 20
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
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db408 S_g8c4db408;
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
extern void operation_1c7dd4(void *);
extern int operation_194d60(unsigned short);
extern int operation_8c2481b4(int);
void quest_op_item_create_cmode_8c170de4(int a0, int a1)
{
    Frame *pm5;
    int t1;
    int t2;
    Frame frame;
    char *v1;
    char *pm3;
    S_g8c418248 **pm4;
    pm5 = &frame;
    operation_1c7dd4((void *)(pm5));
    v1 = (char *)*(int *)0x8c4db408;
    (&frame)->f00 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f01 = *(int *)(((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f02 = *(int *)(((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f03 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    pm4 = (S_g8c418248 **)0x8c418248;
    (&frame)->f04 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f05 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2));
    t1 = operation_194d60((unsigned short)(*pm4));
    (&frame)->f0c = (int)(t1);
    t2 = operation_8c2481b4((int)(&frame));
    if (!(0 == t2)) {
        pm3 = (char *)*(S_g8c4db408 **)0x8c4db408 + 0x0;
        v1 = (char *)(pm3);
        *(int *)(v1 + ((unsigned char)a1 << 2)) = 1;
        return;
    }
    t1 = (unsigned char)a1 << 2;
    *(int *)((0x0 + (char *)*(S_g8c4db408 **)0x8c4db408) + (t1)) = 0;
}
