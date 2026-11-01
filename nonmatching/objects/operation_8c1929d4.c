/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1929d4
 * function: operation_8c1929d4
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 30 of 68 reference instruction lines
 * differing bytes: 70
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_vv2_0 S_vv2_0;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    int f08;
};
extern int g_8c418248;
extern int g_8c418258;
extern int g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern void operation_8c0368a8(void *);
void operation_8c1929d4(int a0)
{
    Frame frame;
    int v2;
    int v5;
    int v4;
    unsigned short v6;
    int v3;
    int v7;
    int v1;
    int v32;
    if (g_8c418248 == g_8c418258) {
        v1 = (int)(a0 << 2);
        v2 = (int)g_8c4dc2c4;
        v3 = (int)*(int *)((char *)((char *)g_8c4dc2c8 + 0x0) + (v1));
        v7 = 0;
        v4 = (int)0;
        v5 = (int)0xffff;
        while (v4 != v3) {
            v6 = (unsigned short)*(unsigned short *)((char *)((char *)*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + (v1)) + 0xe) + (v4 * 0x24));
            if ((unsigned int)(unsigned short)v5 > (unsigned int)(unsigned short)v6) {
                v7 = (int)v4;
                v5 = (int)v6;
            }
            v4 = (int)(v4 + 1);
        }
        v32 = (int)*(int *)((char *)((char *)*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + (v1)) + 0x1c) + (v7 * 0x24));
        (&frame)->f04 = -1;
        (&frame)->f00 = 0x63;
        (&frame)->f01 = 3;
        (&frame)->f04 = (int)(v32);
        (&frame)->f08 = a0;
        operation_8c0368a8((void *)(&frame));
    }
}
