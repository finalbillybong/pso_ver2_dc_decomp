/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20af34
 * function: operation_8c20af34
 * language: c
 * reference size: 268 bytes
 * compiled size: 204 bytes (-23.9%)
 * differing lines: 70 of 109 reference instruction lines
 * differing bytes: 264
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -64 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505204 S_g8c505204;
extern int g_8c5051e0;
extern int g_8c5051f4;
extern S_g8c505204 *g_8c505204;
extern int g_8c505210;
extern int hs_8c20af70(void);
int operation_8c20af34(int a0)
{
    int t1;
    if (a0 == -1) {
        return 0;
    }
    if (a0 == -0x32) {
        if (!(g_8c5051e0 > 4) && g_8c5051e0 >= 0) {
            t1 = hs_8c20af70();
            return (int)(t1);
        }
        return (int)g_8c505204 + 0x488;
    }
    if (a0 >= 0 && g_8c505210 > a0) {
        return (int)(&*(int *)((char *)((char *)g_8c505204 + 0x0) + (a0 << 3)));
    }
    if (!(a0 > -0x46)) {
        if (a0 >= -0x46) {
            goto L_8c20b004;
        }
        if (!(a0 > -0x5a)) {
            if (a0 == -0x5a) {
                goto L_8c20b01a;
            }
            goto L_8c20aff8;
        }
        if (a0 == -0x50) {
            goto L_8c20b012;
        }
    } else {
        if (!(a0 > -0x3c)) {
            if (a0 == -0x3c) {
                goto L_8c20affc;
            }
        } else {
            if (a0 == -0x28) {
                goto L_8c20b00c;
            }
        }
    }
L_8c20aff8:;
    return 0;
L_8c20affc:;
    return g_8c5051f4 + 8;
L_8c20b004:;
    return g_8c5051f4 + 0x10;
L_8c20b00c:;
    return (int)(g_8c5051f4);
L_8c20b012:;
    return g_8c5051f4 + 0x18;
L_8c20b01a:;
    return g_8c5051f4 + 0x20;
}
