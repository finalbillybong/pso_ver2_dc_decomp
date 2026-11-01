/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c282670
 * function: operation_8c282670
 * language: c
 * reference size: 764 bytes
 * compiled size: 760 bytes (-0.5%)
 * differing lines: 338 of 289 reference instruction lines
 * differing bytes: 589
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
typedef struct S_L8c310bd8 S_L8c310bd8;
struct S_L8c310bd8 {
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
};
extern Vector3 g_8c310a88;
extern Vector3 g_8c310a94;
extern Vector3 g_8c310aa0;
extern Vector3 g_8c310aac;
extern Vector3 g_8c310ab8;
extern Vector3 g_8c310ac4;
extern Vector3 g_8c310ad0;
extern Vector3 g_8c310adc;
extern Vector3 g_8c310ae8;
extern Vector3 g_8c310af4;
extern Vector3 g_8c310b00;
extern Vector3 g_8c310b0c;
extern Vector3 g_8c310b18;
extern Vector3 g_8c310b24;
extern Vector3 g_8c310b30;
extern Vector3 g_8c310b3c;
extern Vector3 g_8c310b48;
extern Vector3 g_8c310b54;
extern Vector3 g_8c310b60;
extern Vector3 g_8c310b6c;
extern Vector3 g_8c310b78;
extern Vector3 g_8c310b84;
extern Vector3 g_8c310b90;
extern Vector3 g_8c310b9c;
extern Vector3 g_8c310ba8;
extern Vector3 g_8c310bb4;
extern Vector3 g_8c310bc0;
extern Vector3 g_8c310bcc;
extern S_L8c310bd8 g_8c310bd8;
void operation_8c282670(void)
{
    *(Vector3 *)&(&g_8c310bd8)->f00 = *(Vector3 *)&g_8c310a88;
    *(Vector3 *)&(&g_8c310bd8)->f0c = *(Vector3 *)&g_8c310a94;
    *(Vector3 *)&(&g_8c310bd8)->f18 = *(Vector3 *)&g_8c310aa0;
    *(Vector3 *)&(&g_8c310bd8)->f24 = *(Vector3 *)&g_8c310aac;
    *(Vector3 *)&(&g_8c310bd8)->f30 = *(Vector3 *)&g_8c310ab8;
    {
        Vector3 *p_ = (Vector3 *)&g_8c310ac4;
        *(Vector3 *)&(&g_8c310bd8)->f3c = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c310ad0;
        *(Vector3 *)&(&g_8c310bd8)->f48 = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c310adc;
        *(Vector3 *)&(&g_8c310bd8)->f54 = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c310ae8;
        *(Vector3 *)&(&g_8c310bd8)->f60 = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c310af4;
        *(Vector3 *)&(&g_8c310bd8)->f6c = *p_;
    }
    *(Vector3 *)&(&g_8c310bd8)->f78 = *(Vector3 *)&g_8c310b00;
    *(Vector3 *)&(&g_8c310bd8)->f84 = *(Vector3 *)&g_8c310b0c;
    *(Vector3 *)&(&g_8c310bd8)->f90 = *(Vector3 *)&g_8c310b18;
    *(Vector3 *)&(&g_8c310bd8)->f9c = *(Vector3 *)&g_8c310b24;
    *(Vector3 *)&(&g_8c310bd8)->fa8 = *(Vector3 *)&g_8c310b30;
    *(Vector3 *)&(&g_8c310bd8)->fb4 = *(Vector3 *)&g_8c310b3c;
    *(Vector3 *)&(&g_8c310bd8)->fc0 = *(Vector3 *)&g_8c310b48;
    *(Vector3 *)&(&g_8c310bd8)->fcc = *(Vector3 *)&g_8c310b54;
    *(Vector3 *)&(&g_8c310bd8)->fd8 = *(Vector3 *)&g_8c310b60;
    *(Vector3 *)&(&g_8c310bd8)->fe4 = *(Vector3 *)&g_8c310b6c;
    {
        Vector3 *p_ = (Vector3 *)&g_8c310b78;
        *(Vector3 *)&(&g_8c310bd8)->ff0 = *p_;
    }
    *(Vector3 *)&(&g_8c310bd8)->ffc = *(Vector3 *)&g_8c310b84;
    *(Vector3 *)&(&g_8c310bd8)->f108 = *(Vector3 *)&g_8c310b90;
    *(Vector3 *)&(&g_8c310bd8)->f114 = *(Vector3 *)&g_8c310b9c;
    *(Vector3 *)&(&g_8c310bd8)->f120 = *(Vector3 *)&g_8c310ba8;
    *(Vector3 *)&(&g_8c310bd8)->f12c = *(Vector3 *)&g_8c310bb4;
    *(Vector3 *)&(&g_8c310bd8)->f138 = *(Vector3 *)&g_8c310bc0;
    *(Vector3 *)&(&g_8c310bd8)->f144 = *(Vector3 *)&g_8c310bcc;
}
