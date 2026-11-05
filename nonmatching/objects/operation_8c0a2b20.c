/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a2b20
 * function: operation_8c0a2b20
 * language: c
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 12 of 104 reference instruction lines
 * differing bytes: 34
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
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
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Frame Frame;
struct Frame {
    Block16 f00;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    char unknown34[0x8];
};
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
extern Block16 g_8c303334;
extern S_L8c46efc8 g_8c46efc8;
extern void call_8c380c5a(int, Frame *);
extern void call_8c384504(void *);
extern void set_1c_8c37e76c(void *, int);
extern void call_8c382a24(void *, float, float, float);
extern void call_8c38abb8(void *, float, float, float);
extern void copy_vector_8c37e990(void *);
extern void call_8c37e4c0(void *);
void operation_8c0a2b20(void)
{
    Frame frame;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c303334;
    if ((((&g_8c46efc8)->f08 & 0x200)) != 0) {
        (&g_8c46efc8)->f08 |= -0x201;
    }
    call_8c380c5a(0, (Frame *)((&frame)));
    call_8c384504((void *)((void *)0x8c46ee84));
    set_1c_8c37e76c((void *)((void *)0x8c46ee84), 0x2e38);
    call_8c382a24((void *)((void *)0x8c46ee84), 0.0f, 0.0f, 0.0f);
    call_8c38abb8((void *)((void *)0x8c46ee84), 0.0f, 0.0f, -1.0f);
    (&frame)->f1c = 320.0f;
    (&frame)->f20 = 240.0f;
    (&frame)->f14 = 640.0f;
    (&frame)->f18 = 480.0f;
    (&frame)->f10 = 250.0f;
    (&frame)->f24 = 0.0f;
    (&frame)->f28 = 0.0f;
    (&frame)->f2c = 20.0f;
    *(float *)0x8c57555c = 1.0f;
    (&frame)->f30 = 15.0f;
    *(float *)0x8c575560 = 0.85f;
    copy_vector_8c37e990((void *)(&(&frame)->f10));
    call_8c37e4c0((void *)((void *)0x8c46ee84));
}
