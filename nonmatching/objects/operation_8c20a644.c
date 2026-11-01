/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20a644
 * function: operation_8c20a644
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 2 of 53 reference instruction lines
 * differing bytes: 14
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
struct Frame {
    char unknown0[0x4];
    Block8 f04;
    int f0c;
    char unknown10[0xc];
    int f1c;
    char f20[0x4];
    char unknown24[0x8c];
    char fb0;
    char unknownb1[0x16f];
};
struct S_g8c418a00 {
    char unknown0[0xa6c];
    Block8 fa6c;
};
extern void strncpy_8c12b154(void *, int, int);
extern void operation_8c02f7c4(void *, void *);
void operation_8c20a644(int a0, int a1)
{
    Frame frame;
    if (*(int *)0x8c418a00 != 0) {
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&(*(S_g8c418a00 **)0x8c418a00)->fa6c;
        strncpy_8c12b154((void *)(&(&frame)->f0c), (int)(*(int *)0x8c4e2fa0 + 8), 0x17);
        (&frame)->f1c = a0;
        (&frame)->f20[3] = 0;
        strncpy_8c12b154((void *)((&frame)->f20), a1, 0x90);
        (&frame)->fb0 = 0;
        operation_8c02f7c4((void *)(*(S_g8c418a00 **)0x8c418a00), (void *)(&frame));
    }
}
