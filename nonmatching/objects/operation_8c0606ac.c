/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0606ac
 * function: operation_8c0606ac
 * language: c
 * reference size: 120 bytes
 * compiled size: 100 bytes (-16.7%)
 * differing lines: 44 of 39 reference instruction lines
 * differing bytes: 103
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -20 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c100b20(int);
void operation_8c0606ac(void)
{
    int v3;
    int v2;
    int v4;
    int v1;
    v3 = (int)*(int *)0x8c467a58;
    *(int *)0x8c467a68 = (int)(v3);
    *(int *)0x8c467a60 = 0;
    v2 = (int)*(int *)0x8c467a5c;
    *(int *)0x8c467a5c = (int)(v2);
    *(int *)0x8c467a64 = v3 + v2 + 0;
    v1 = (int)(int)((float)v2 * 2.36220479f);
    v4 = (int)*(int *)0x8c467a6c;
    *(int *)0x8c467a74 = v4 + v1;
    *(int *)0x8c467a70 = (int)(v1);
    operation_8c100b20((int)(v4 + v1));
}
