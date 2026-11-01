/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c035ca0
 * function: operation_8c035ca0
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 16 of 97 reference instruction lines
 * differing bytes: 25
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
typedef struct S_L8c461c04 S_L8c461c04;
typedef struct Frame Frame;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    char unknown1c[0x7c];
};
struct S_L8c461c04 {
    char unknown0[0x360];
    int f360;
    int f364;
};
extern int g_8c462004;
extern S_L8c461c04 g_8c461c04;
extern char g_8c2ed2b4[];
extern void call_8c12b0b8(void *, void *);
extern void call_8c1ff584(void *, void *, void *, void *, void *, Frame *);
extern void call_8c1fba58(void *, int, int);
void operation_8c035ca0(void)
{
    Frame frame;
    int v1;
    int v3;
    int v6;
    int v7;
    int v2;
    int v10;
    (&frame)->f00 = 0;
    (&frame)->f04 = 0;
    (&frame)->f08 = 0;
    (&frame)->f0c = 0;
    (&frame)->f10 = 0;
    (&frame)->f14 = 0;
    call_8c12b0b8((void *)(&(&frame)->f18), (void *)((g_8c2ed2b4 + 0xe6)));
    v1 = (int)(&g_8c461c04)->f360;
    v2 = (int)(&g_8c461c04)->f364;
    call_8c1ff584((void *)(&(&frame)->f14), (void *)(&(&frame)->f10), (void *)(&(&frame)->f0c), (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
    v3 = (int)(&frame)->f0c;
    v6 = (int)v1;
    if (v3 != 0) {
        v6 = (int)((unsigned char)v3 << 0x18 | (v3 & 0xff00) << 8 | (unsigned int)(v3 & 0xff0000) >> 8 | (unsigned int)(unsigned int)(v3 & -0x1000000) >> 0x10 >> 8);
    }
    v7 = (int)(&frame)->f08;
    v10 = (int)v2;
    if (v7 != 0) {
        v10 = (int)((unsigned char)v7 << 0x18 | (v7 & 0xff00) << 8 | (unsigned int)(v7 & 0xff0000) >> 8 | (unsigned int)(unsigned int)(v7 & -0x1000000) >> 0x10 >> 8);
    }
    call_8c1fba58((void *)(&(&frame)->f18), v6, v10);
    g_8c462004 = 1;
}
