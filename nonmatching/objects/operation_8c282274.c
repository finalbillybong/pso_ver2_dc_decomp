/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c282274
 * function: operation_8c282274
 * language: c
 * reference size: 820 bytes
 * compiled size: 816 bytes (-0.5%)
 * differing lines: 354 of 309 reference instruction lines
 * differing bytes: 634
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
typedef struct S_L8c30a484 S_L8c30a484;
struct S_L8c30a484 {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    Vector3 f60;
    Vector3 f6c;
    Vector3 f78;
    Vector3 f84;
    Vector3 f90;
    Vector3 f9c;
    Vector3 fa8;
    Vector3 fb4;
    Vector3 fc0;
    Vector3 fcc;
    Vector3 fd8;
    Vector3 fe4;
    Vector3 ff0;
    Vector3 ffc;
    Vector3 f108;
    Vector3 f114;
    Vector3 f120;
    Vector3 f12c;
    Vector3 f138;
    Vector3 f144;
    Vector3 f150;
    Vector3 f15c;
};
extern Vector3 g_8c30a31c;
extern Vector3 g_8c30a328;
extern Vector3 g_8c30a334;
extern Vector3 g_8c30a340;
extern Vector3 g_8c30a34c;
extern Vector3 g_8c30a358;
extern Vector3 g_8c30a364;
extern Vector3 g_8c30a370;
extern Vector3 g_8c30a37c;
extern Vector3 g_8c30a388;
extern Vector3 g_8c30a394;
extern Vector3 g_8c30a3a0;
extern Vector3 g_8c30a3ac;
extern Vector3 g_8c30a3b8;
extern Vector3 g_8c30a3c4;
extern Vector3 g_8c30a3d0;
extern Vector3 g_8c30a3dc;
extern Vector3 g_8c30a3e8;
extern Vector3 g_8c30a3f4;
extern Vector3 g_8c30a400;
extern Vector3 g_8c30a40c;
extern Vector3 g_8c30a418;
extern Vector3 g_8c30a424;
extern Vector3 g_8c30a430;
extern Vector3 g_8c30a43c;
extern Vector3 g_8c30a448;
extern Vector3 g_8c30a454;
extern Vector3 g_8c30a460;
extern Vector3 g_8c30a46c;
extern Vector3 g_8c30a478;
extern S_L8c30a484 g_8c30a484;
void operation_8c282274(void)
{
    *(Vector3 *)&(&g_8c30a484)->f00 = *(Vector3 *)&g_8c30a31c;
    *(Vector3 *)&(&g_8c30a484)->f0c = *(Vector3 *)&g_8c30a328;
    *(Vector3 *)&(&g_8c30a484)->f18 = *(Vector3 *)&g_8c30a334;
    *(Vector3 *)&(&g_8c30a484)->f24 = *(Vector3 *)&g_8c30a340;
    *(Vector3 *)&(&g_8c30a484)->f30 = *(Vector3 *)&g_8c30a34c;
    {
        Vector3 *p_ = (Vector3 *)&g_8c30a358;
        *(Vector3 *)&(&g_8c30a484)->f3c = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c30a364;
        *(Vector3 *)&(&g_8c30a484)->f48 = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c30a370;
        *(Vector3 *)&(&g_8c30a484)->f54 = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c30a37c;
        *(Vector3 *)&(&g_8c30a484)->f60 = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c30a388;
        *(Vector3 *)&(&g_8c30a484)->f6c = *p_;
    }
    *(Vector3 *)&(&g_8c30a484)->f78 = *(Vector3 *)&g_8c30a394;
    *(Vector3 *)&(&g_8c30a484)->f84 = *(Vector3 *)&g_8c30a3a0;
    *(Vector3 *)&(&g_8c30a484)->f90 = *(Vector3 *)&g_8c30a3ac;
    *(Vector3 *)&(&g_8c30a484)->f9c = *(Vector3 *)&g_8c30a3b8;
    *(Vector3 *)&(&g_8c30a484)->fa8 = *(Vector3 *)&g_8c30a3c4;
    *(Vector3 *)&(&g_8c30a484)->fb4 = *(Vector3 *)&g_8c30a3d0;
    *(Vector3 *)&(&g_8c30a484)->fc0 = *(Vector3 *)&g_8c30a3dc;
    *(Vector3 *)&(&g_8c30a484)->fcc = *(Vector3 *)&g_8c30a3e8;
    *(Vector3 *)&(&g_8c30a484)->fd8 = *(Vector3 *)&g_8c30a3f4;
    *(Vector3 *)&(&g_8c30a484)->fe4 = *(Vector3 *)&g_8c30a400;
    {
        Vector3 *p_ = (Vector3 *)&g_8c30a40c;
        *(Vector3 *)&(&g_8c30a484)->ff0 = *p_;
    }
    *(Vector3 *)&(&g_8c30a484)->ffc = *(Vector3 *)&g_8c30a418;
    *(Vector3 *)&(&g_8c30a484)->f108 = *(Vector3 *)&g_8c30a424;
    *(Vector3 *)&(&g_8c30a484)->f114 = *(Vector3 *)&g_8c30a430;
    *(Vector3 *)&(&g_8c30a484)->f120 = *(Vector3 *)&g_8c30a43c;
    *(Vector3 *)&(&g_8c30a484)->f12c = *(Vector3 *)&g_8c30a448;
    *(Vector3 *)&(&g_8c30a484)->f138 = *(Vector3 *)&g_8c30a454;
    *(Vector3 *)&(&g_8c30a484)->f144 = *(Vector3 *)&g_8c30a460;
    *(Vector3 *)&(&g_8c30a484)->f150 = *(Vector3 *)&g_8c30a46c;
    *(Vector3 *)&(&g_8c30a484)->f15c = *(Vector3 *)&g_8c30a478;
}
