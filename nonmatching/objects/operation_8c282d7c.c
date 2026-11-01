/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c282d7c
 * function: operation_8c282d7c
 * language: c
 * reference size: 324 bytes
 * compiled size: 320 bytes (-1.2%)
 * differing lines: 166 of 135 reference instruction lines
 * differing bytes: 260
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c31d6c0 S_L8c31d6c0;
typedef struct S_L8c31d740 S_L8c31d740;
typedef struct S_L8c31d760 S_L8c31d760;
struct S_L8c31d740 {
    Block16 f00;
    Block16 f10;
    Vector3 f20;
    char unknown2c[0x4];
    Block16 f30;
    Block16 f40;
    Block16 f50;
    Block16 f60;
    Block16 f70;
    Block16 f80;
    Block16 f90;
};
struct S_L8c31d760 {
    Vector3 f00;
    int f0c;
};
struct S_L8c31d6c0 {
    Vector3 f00;
    int f0c;
};
extern Block16 g_8c31d634;
extern Block16 g_8c31d650;
extern Block16 g_8c31d66c;
extern Block16 g_8c31d688;
extern Block16 g_8c31d6a4;
extern Block16 g_8c31d6dc;
extern Block16 g_8c31d6f8;
extern Block16 g_8c31d714;
extern Block16 g_8c31d730;
extern S_L8c31d6c0 g_8c31d6c0;
extern S_L8c31d740 g_8c31d740;
extern S_L8c31d760 g_8c31d760;
void operation_8c282d7c(void)
{
    *(Block16 *)&(&g_8c31d740)->f00 = *(Block16 *)&g_8c31d6a4;
    *(Block16 *)&(&g_8c31d740)->f10 = *(Block16 *)&g_8c31d66c;
    *(Vector3 *)&(&g_8c31d760)->f00 = *(Vector3 *)&(&g_8c31d6c0)->f00;
    (&g_8c31d760)->f0c = (int)((&g_8c31d6c0)->f0c);
    *(Block16 *)&(&g_8c31d740)->f30 = *(Block16 *)&g_8c31d634;
    *(Block16 *)&(&g_8c31d740)->f40 = *(Block16 *)&g_8c31d688;
    *(Block16 *)&(&g_8c31d740)->f50 = *(Block16 *)&g_8c31d714;
    *(Block16 *)&(&g_8c31d740)->f60 = *(Block16 *)&g_8c31d6dc;
    *(Block16 *)&(&g_8c31d740)->f70 = *(Block16 *)&g_8c31d730;
    *(Block16 *)&(&g_8c31d740)->f80 = *(Block16 *)&g_8c31d6f8;
    *(Block16 *)&(&g_8c31d740)->f90 = *(Block16 *)&g_8c31d650;
}
