/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11a920
 * function: operation_8c11a920
 * language: c
 * reference size: 184 bytes
 * compiled size: 188 bytes (+2.2%)
 * differing lines: 32 of 78 reference instruction lines
 * differing bytes: 111
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
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    int f14;
    int f18;
    void *f1c;
};
extern int g_8c4d8340;
extern void call_8c380ab8(int, int);
extern void reset_state_8c391c94(void);
extern void call_8c37ebdc(Frame *, int, int);
extern void reset_state_8c391cc4(void);
void operation_8c11a920(void)
{
    Frame frame;
    int v1;
    int v2;
    (&frame)->f00 = -5.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f0c = 1.0f;
    (&frame)->f10 = 1.0f;
    (&frame)->f14 = 0;
    (&frame)->f18 = (int)(g_8c4d8340);
    (&frame)->f1c = (void *)0x8c3108d0;
    v1 = (int)0;
    v2 = (int)8;
    call_8c380ab8(v1, v2);
    call_8c380ab8(1, 6);
    reset_state_8c391c94();
    call_8c37ebdc((Frame *)&(&frame)->f00, 0, 0x20);
    (&frame)->f00 = 0.0f;
    (&frame)->f04 = 0.0f;
    call_8c37ebdc((Frame *)&(&frame)->f00, 0, 0x24);
    (&frame)->f00 = -5.0f;
    (&frame)->f04 = -5.0f;
    call_8c37ebdc((Frame *)&(&frame)->f00, 0, 0x28);
    (&frame)->f00 = 0.0f;
    (&frame)->f04 = -5.0f;
    call_8c37ebdc((Frame *)&(&frame)->f00, 0, 0x2c);
    reset_state_8c391cc4();
}
