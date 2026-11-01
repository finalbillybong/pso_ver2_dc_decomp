/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c28431c
 * function: operation_8c28431c
 * language: c
 * reference size: 384 bytes
 * compiled size: 392 bytes (+2.1%)
 * differing lines: 128 of 115 reference instruction lines
 * differing bytes: 285
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c335fa0 S_L8c335fa0;
struct S_L8c335fa0 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
};
extern float g_8c2e1534;
extern float g_8c2e1550;
extern float g_8c2e1554;
extern float g_8c2e1558;
extern float g_8c2e155c;
extern float g_8c2e1560;
extern float g_8c2e1680;
extern float g_8c2e1684;
extern float g_8c2e1688;
extern float g_8c2e168c;
extern float g_8c2e1690;
extern float g_8c2e1704;
extern float g_8c2e1728;
extern float g_8c2e172c;
extern float g_8c2e1730;
extern float g_8c2e1734;
extern float g_8c2e1738;
extern float g_8c2e173c;
extern float g_8c2e1740;
extern float g_8c2e1744;
extern float g_8c2e1748;
extern float g_8c2e174c;
extern float g_8c2e1750;
extern float g_8c2e1754;
extern float g_8c2e1758;
extern float g_8c2e175c;
extern float g_8c2e1760;
extern float g_8c2e1764;
extern float g_8c2e1768;
extern S_L8c335fa0 g_8c335fa0;
void operation_8c28431c(void)
{
    float v1;
    float v7;
    float v4;
    float v5;
    float v3;
    float v6;
    float v2;
    float v8;
    float v9;
    v1 = (float)g_8c2e1690;
    v7 = (float)(v1 + 17.0f);
    g_8c2e1728 = v7;
    g_8c2e172c = v7 + 14.0f;
    v4 = (float)g_8c2e1550;
    v5 = (float)g_8c2e1534;
    g_8c2e1734 = v4 * v5;
    g_8c2e1738 = (v4 + g_8c2e1560) * v5;
    v3 = (float)g_8c2e1554;
    g_8c2e173c = v3 * v5;
    v6 = (float)g_8c2e155c;
    g_8c2e1740 = (v3 + v6) * v5;
    v2 = (float)g_8c2e1558;
    g_8c2e1748 = (v2 + v6) * v5;
    g_8c2e1744 = v2 * v5;
    g_8c2e1730 = v5;
    g_8c2e174c = v5 * 224.0f;
    g_8c2e1750 = v5 * 238.0f;
    g_8c2e1754 = v5 * 58.0f;
    v8 = (float)(v5 * 72.0f);
    g_8c2e1758 = v8;
    v9 = (float)(v5 * 86.0f);
    g_8c2e175c = v9;
    g_8c2e1764 = v8;
    g_8c2e1768 = v9;
    (&g_8c335fa0)->f00 = g_8c2e1688;
    g_8c2e1760 = v5 * 100.0f;
    (&g_8c335fa0)->f04 = g_8c2e168c;
    (&g_8c335fa0)->f08 = g_8c2e1680;
    (&g_8c335fa0)->f0c = g_8c2e1684;
    (&g_8c335fa0)->f10 = g_8c2e1704;
}
