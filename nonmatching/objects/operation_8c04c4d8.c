/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04c4d8
 * function: operation_8c04c4d8
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 8 of 102 reference instruction lines
 * differing bytes: 8
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
typedef struct S_c8c03ed10 S_c8c03ed10;
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
struct Frame {
    int f00;
    unsigned short f04;
    char unknown6[0x4];
    short f0a;
};
extern S_g8c467184 *g_8c467184;
extern char g_8c2f2aac[];
extern int operation_8c03ed10(int);
extern void call_8c38ab0c(void *, Frame *);
extern void call_8c38a9e2(int);
extern void call_8c38aa5c(int, int, int);
extern void operation_8c03ed70(int);
extern int load_pvm_file_tls_8c118528(void *);
extern void call_8c3827d8(void *);
extern void call_8c38a984(int, int);
void operation_8c04c4d8(int a0)
{
    Frame frame;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    frame.f00 = operation_8c03ed10((int)(g_8c2f2aac + 0x3b));
    call_8c38ab0c((void *)((g_8c2f2aac + 0x45)), (Frame *)((&frame)));
    call_8c38a9e2((int)((unsigned short)(&frame)->f04));
    call_8c38aa5c(0x200, (int)((&frame)->f0a), frame.f00);
    operation_8c03ed70((int)(g_8c2f2aac + 0x3b));
    switch (a0) {
    case 0:
        t2 = load_pvm_file_tls_8c118528((void *)((g_8c2f2aac + 0x57)));
        g_8c467184 = (S_g8c467184 *)(int)(t2);
        break;
    case 2:
        t3 = load_pvm_file_tls_8c118528((void *)((g_8c2f2aac + 0x6b)));
        g_8c467184 = (S_g8c467184 *)(int)(t3);
        break;
    case 3:
        t4 = load_pvm_file_tls_8c118528((void *)((g_8c2f2aac + 0x7d)));
        g_8c467184 = (S_g8c467184 *)(int)(t4);
        break;
    case 4:
        t5 = load_pvm_file_tls_8c118528((void *)((g_8c2f2aac + 0x8f)));
        g_8c467184 = (S_g8c467184 *)(int)(t5);
        break;
    case 1:
    default:
        t6 = load_pvm_file_tls_8c118528((void *)((g_8c2f2aac + 0xa2)));
        g_8c467184 = (S_g8c467184 *)(int)(t6);
    }
    call_8c3827d8(g_8c467184);
    call_8c38a984(0, 0x20);
    call_8c38a984(1, 0x20);
    call_8c38a984(2, 0x20);
    call_8c38a984(3, 0x20);
}
