/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16d30c
 * function: quest_op_message_8c16d30c
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 92 of 112 reference instruction lines
 * differing bytes: 92
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_vv16_0 S_vv16_0;
typedef struct S_vv21 S_vv21;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_vv21 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c467870;
extern int g_8c467874;
extern S_g8c46fe20 *g_8c46fe20;
extern int g_8c4db428;
extern int g_8c4db430;
extern void operation_8c0ddbd0(int, int, int);
extern void operation_8c0dddec(int);
void quest_op_message_8c16d30c(int a0, int a1)
{
    int v14;
    int v15;
    int v18;
    int v16;
    S_vv21 *v21;
    int v17;
    int v22;
    int v19;
    int v20;
    int v23;
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 2;
    }
    if (g_8c46fe20 != 0 && g_8c46fe20->f54 != 0) {
        g_8c46fe20->f54->f22 |= 8;
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 0x10;
    }
    g_8c4db430 = a0;
    if (0x64 > a0) {
        operation_8c0ddbd0(a0, a1, 0x2d);
        operation_8c0dddec(a0);
        g_8c4db428 = 4;
        return;
    }
    v15 = (int)g_8c467874;
    v14 = (int)0x4000;
    v17 = (int)v14;
    v18 = (int)v15;
    v19 = (int)0x3c8;
    v20 = (int)0x10c;
    v16 = (int)(void *)0x8c467240;
    while ((v15 + g_8c467870) > v18) {
        v21 = (S_vv21 *)*(S_vv16_0 **)((char *)((char *)v16 + 0x0) + (v18 << 2));
        if (v21 != 0) {
            v22 = (int)v21->f20;
            if (v17 > v22) {
                v23 = (int)*(int *)((char *)((char *)v21 + 0x0) + (v19));
            } else {
                v23 = (int)*(int *)((char *)((char *)v21 + 0x0) + (v20));
            }
            if (v23 == a0) {
                operation_8c0ddbd0(v22, a1, 0x2d);
                operation_8c0dddec(v22);
                g_8c4db428 = 4;
                return;
            }
        }
        v18 = (int)(v18 + 1);
    }
}
