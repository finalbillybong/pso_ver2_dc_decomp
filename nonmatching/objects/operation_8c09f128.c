/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09f128
 * function: operation_8c09f128
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 8 of 76 reference instruction lines
 * differing bytes: 14
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a99c0_4 S_c8c1a99c0_4;
typedef struct Frame Frame;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    char unknown10[0x1c];
};
extern int g_8c46ed80;
extern int g_8c46ed84;
extern int get_current_area_8c032b10(void);
extern int operation_8c1a99c0(int);
extern void operation_8c03ef04(int, int, int);
extern int call_8c36a7b2(void *, int);
extern void call_8c369ed0(int);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d360(int, int, void *, Frame *, int, int, int);
void operation_8c09f128(void)
{
    Frame frame;
    char *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = get_current_area_8c032b10();
    v1 = (char *)*(int *)((char *)0x8c4e18c0 + (t1 << 3));
    t2 = operation_8c1a99c0(t1);
    operation_8c03ef04((int)(&(&frame)->f0c), (int)(*(S_c8c1a99c0_4 **)((char *)((char *)t2 + 0x4) + ((int)(v1) << 3))), (int)((void *)0x8c302074));
    t3 = call_8c36a7b2((void *)(&(&frame)->f0c), 0);
    if (t3 != 0) {
        call_8c369ed0(t3);
    } else {
        g_8c46ed84 = 0;
        return;
    }
    (&frame)->f04 = (int)(&(&frame)->f0c);
    (&frame)->f08 = 0;
    (&frame)->f00 = 0;
    t4 = game_malloc_8c011ecc(0x440);
    if (t4 != 0) {
        call_8c03d360(t4, 1, (void *)(&(&frame)->f04), (Frame *)((&frame)), 0, 0, 0);
    }
    g_8c46ed84 = (int)(t4);
    g_8c46ed80 = 0;
}
