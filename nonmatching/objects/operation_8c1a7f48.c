/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a7f48
 * function: operation_8c1a7f48
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 16 of 118 reference instruction lines
 * differing bytes: 45
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4df860 S_g8c4df860;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern S_g8c4df860 *g_8c4df860;
extern int g_8c4df894;
extern int g_8c4df898;
extern int g_8c4df89c;
extern int g_8c4df8a0;
extern int call_8c18e768(int, int);
extern void operation_8c1a8088(int, int, void *);
extern void call_8c3889a4(int, int, int);
int operation_8c1a7f48(Object *o, int a1, int a2)
{
    int v7;
    int v24;
    int v3;
    int v2;
    int v9;
    int pm7;
    int v31;
    int v8;
    int v29;
    int v30;
    int v28;
    int v22;
    int v1;
    int pm1;
    int v10;
    v1 = 0x40000;
    v3 = 0;
    v2 = (int)0x800;
    for (; !(0 >= a2); ) {
        int v6;
        v6 = (int)o->f20;
        if (v6 == 0) {
            v24 = 0;
        } else {
            int v20;
            v7 = (int)(g_8c4df89c - g_8c4df898);
            if (v7 > 0) {
                v8 = (int)v7;
            } else {
                v8 = 0;
            }
            if (0 == v8) {
                v9 = (int)(g_8c4df8a0 - g_8c4df894);
                if (v1 > v9) {
                    v10 = v9;
                } else {
                    v10 = (int)v1;
                }
                if (!(v10 <= 0)) {
                    g_8c4df89c = (v10);
                    g_8c4df898 = 0;
                    pm7 = call_8c18e768((int)(v10 + 0x7ff), v2);
                    operation_8c1a8088(v6, pm7, g_8c4df860);
                }
            }
            v20 = (int)(g_8c4df89c - g_8c4df898);
            if (v20 > 0) {
                v22 = v20;
            } else {
                v22 = (int)(int)0;
            }
            v24 = (int)v22;
        }
        if (v24 <= 0) {
            goto L_8c1a8020;
        }
        v29 = g_8c4df898;
        v28 = g_8c4df89c;
        pm1 = 0;
        if (((v28 - v29) <= pm1)) {
            v30 = (int)0;
        } else {
            v30 = (int)(v28 - v29);
        }
        if (v30 > a2) {
            v31 = (int)a2;
        } else {
            if ((v28 - v29) <= 0) {
                v31 = 0;
            } else {
                v31 = (v28 - v29);
            }
        }
        call_8c3889a4(a1, (int)((int)g_8c4df860 + v29), v31);
        a1 += v31;
        a2 -= v31;
        v3 += v31;
        g_8c4df898 += v31;
    }
    v28 = (int)(void *)&g_8c4df898;
    v8 = v28;
    v30 = v8;
    v10 = v30;
    v24 = v10;
L_8c1a8020:
    ;
    v2 = (int)(v3);
    v30 = v2;
    v29 = v30;
    a1 = v29;
    a2 = a1;
    return a2;
}
