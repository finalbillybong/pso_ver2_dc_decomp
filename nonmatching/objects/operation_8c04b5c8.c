/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04b5c8
 * function: operation_8c04b5c8
 * language: c
 * reference size: 208 bytes
 * compiled size: 204 bytes (-1.9%)
 * differing lines: 72 of 88 reference instruction lines
 * differing bytes: 162
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct S_vv8 S_vv8;
struct Arg1 {
    short f00;
    char f02;
    char unknown3[0x1];
    unsigned short f04;
    unsigned short f06;
};
struct Frame {
    int f00;
};
struct S_vv8 {
    unsigned char f00;
    char unknown1[0x4];
    unsigned char f05;
};
extern int g_8c467120;
extern int g_8c467124;
extern int g_8c46712c;
extern int operation_8c04b8b0(int);
extern int operation_8c04b698(int, int);
extern void call_8c04b6e0(int, int);
void operation_8c04b5c8(int a0, Arg1 *a1)
{
    Frame frame;
    int v9;
    unsigned int v7;
    unsigned int v5;
    unsigned short v4;
    int v6;
    S_vv8 *v8;
    int v10;
    int v2;
    int v3;
    int t1;
    int t2;
    a1->f00 = a0;
    v2 = (int)a0;
    if ((unsigned int)(unsigned short)a0 >= (unsigned int)0xe000) {
        v2 = (int)(a0 - 0xdf20);
    }
    t1 = operation_8c04b8b0(v2);
    a1->f02 = t1;
    v3 = (int)a1->f04;
    v4 = (unsigned short)a1->f06;
    (&frame)->f00 = (int)(g_8c467124);
    v5 = (unsigned int)0;
    v6 = (int)(g_8c467120 + (unsigned short)(v2 + -0x20) * 0x5a);
    while ((unsigned int)9 > v5) {
        v7 = (unsigned int)0;
        v8 = (S_vv8 *)v6;
        while ((unsigned int)5 > v7) {
            v9 = (int)(v8->f00 | v8->f05 << 8);
            v10 = (int)v3;
            v10 = (int)(v10 + (v7 << 2));
            t2 = operation_8c04b698((int)(v10 + 3), (int)((v4 >> 1) + v5));
            call_8c04b6e0((int)((&frame)->f00 + t2), v9);
            v8 = (S_vv8 *)((char *)v8 + 1);
            v7 = (unsigned int)(v7 + 1);
        }
        v6 = (int)((int)v8 + 5);
        v5 = (unsigned int)(v5 + 1);
    }
    g_8c46712c |= 1;
}
