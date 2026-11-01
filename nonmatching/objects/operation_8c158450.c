/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c158450
 * function: operation_8c158450
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 4 of 43 reference instruction lines
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
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_24 S_g8c4daaa4_24;
typedef struct S_g8c4daaa4_28 S_g8c4daaa4_28;
typedef struct S_x18064 S_x18064;
struct S_g8c4daaa4 {
    char unknown0[0x24];
    S_g8c4daaa4_24 *f24;
    S_g8c4daaa4_28 *f28;
};
struct S_x18064 {
    float f00;
};
struct S_g8c4daaa4_28 {
    char unknown0[0xc];
    float f0c;
};
float operation_8c158450(int a0, int a1)
{
    switch ((unsigned char)a0) {
    case 0:
        if ((unsigned int)0x89 > (unsigned int)(unsigned char)a1) {
            return *(float *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f24 + 0x0) + ((unsigned char)a1 << 2));
        }
        break;
    case 1:
        if ((unsigned char)a1 != 0 && (unsigned int)4 > (unsigned int)(unsigned char)a1) {
            return ((S_x18064 *)(((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f28 - 0x4) + ((unsigned char)a1 << 2)))->f00;
        }
        break;
    case 2:
        return (*(S_g8c4daaa4 **)0x8c4daaa4)->f28->f0c;
    }
    return 0.0f;
}
