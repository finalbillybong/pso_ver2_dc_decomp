/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c7628
 * function: operation_8c0c7628
 * language: c
 * reference size: 168 bytes
 * compiled size: 172 bytes (+2.4%)
 * differing lines: 106 of 71 reference instruction lines
 * differing bytes: 142
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S98c {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
} S98c;
typedef struct S974 {
    int f00;
    S98c *f04;
    float f08;
    float f0c;
    float f10;
    float f14;
} S974;
typedef struct S940 {
    int f00;
    S974 *f04;
    Vector3 f08;
    int f14;
    int f18;
    int f1c;
    Vector3 f20;
    int f2c;
    int f30;
} S940;
extern S98c g_8c46f98c;
extern S974 g_8c46f974;
extern S940 g_8c46f940;
void operation_8c0c7628(void)
{
    short *p;
    p = (short *)&g_8c46f98c;
    *p++ = 0x2514;
    *p++ = 2;
    *p++ = g_8c46f974.f00 = 0;
    *p++ = 0xaff;
    *p++ = 0xff;
    *p = 0xff;
    g_8c46f974.f04 = &g_8c46f98c;
    g_8c46f974.f08 = 0.0f;
    g_8c46f974.f0c = 0.0f;
    g_8c46f974.f10 = 0.0f;
    g_8c46f974.f14 = 0.0f;
    g_8c46f940.f00 = 0x57;
    g_8c46f940.f04 = &g_8c46f974;
    g_8c46f940.f08.x = 0.0f;
    g_8c46f940.f08.y = 0.0f;
    g_8c46f940.f08.z = 0.0f;
    g_8c46f940.f14 = 0;
    g_8c46f940.f18 = 0;
    g_8c46f940.f1c = 0;
    g_8c46f940.f20.x = 0.0f;
    g_8c46f940.f20.y = 0.0f;
    g_8c46f940.f20.z = 0.0f;
    g_8c46f940.f2c = 0;
    g_8c46f940.f30 = 0;
}
