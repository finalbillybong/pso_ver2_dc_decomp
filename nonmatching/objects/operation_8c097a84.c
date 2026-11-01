/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c097a84
 * function: operation_8c097a84
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 38 of 104 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    void *f00;
    void *f04;
    int f08;
    int f0c;
    void *f10;
    void *f14;
    int f18;
    int f1c;
} Frame;
typedef struct Row {
    int f00;
    float f04;
    int f08;
    float f0c;
    int f10;
    float f14;
    int f18;
    float f1c;
} Row;
extern Row g_8c30111c[];
extern void set_elems_8c3806f6(int, int, int);
extern void operation_195978(int, void *, float);
extern void call_8c38ef2c(void *, int, int, float);
void operation_8c097a84(void)
{
    Frame frame;
    int v1;
    float v2;
    float w;
    int v3;
    int off;
    set_elems_8c3806f6(0, 0, 0);
    for (v1 = 0; 6 > v1; v1++) {
        operation_195978(v1 + 0x20, (void *)((char *)0x8c30109c + (v1 << 3)), -65535.0f);
    }
    frame.f14 = (void *)0x8c3010cc;
    frame.f18 = 0;
    frame.f1c = 4;
    frame.f10 = (void *)0x8c3010dc;
    call_8c38ef2c((void *)&frame.f10, 4, 0x60, -65534.0f);
    v2 = *(float *)0x8c31bf88;
    v2 = v2 * 416.0f;
    w = v2 + *(float *)0x8c31bf88 * 3.0f;
    frame.f08 = 0;
    frame.f0c = 4;
    for (v3 = 0; 2 > v3; v3++) {
        off = v3 << 5;
        *(float *)((char *)&g_8c30111c->f0c + off) = v2;
        *(float *)((char *)&g_8c30111c->f04 + off) = v2;
        *(float *)((char *)&g_8c30111c->f14 + off) = *(float *)((char *)&g_8c30111c->f1c + off) = w;
        frame.f00 = (char *)g_8c30111c + off;
        frame.f04 = (char *)0x8c3010fc + (v3 << 4);
        call_8c38ef2c(&frame, 4, 0x60, -4.0f);
    }
}
