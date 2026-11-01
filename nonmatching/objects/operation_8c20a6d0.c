/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20a6d0
 * function: operation_8c20a6d0
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 20 of 79 reference instruction lines
 * differing bytes: 78
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
typedef struct S_x60128 S_x60128;
struct S_x60128 {
    char f00;
};
struct S_vv5 {
    int f00;
    int f04;
    char unknown8[0x17];
    char f1f;
    char unknown20[0x90];
    char fb0;
    char fb1;
};
struct Object {
    char unknown0[0x8];
    int f08;
};
extern short g_8c46fe24;
extern int g_8c504a20;
extern int g_8c504a24;
extern char g_8c504a28[];
extern int operation_8c20a54c(void);
extern void strncpy_8c12b154(void *, void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c20a6d0(Object *o)
{
    int v2;
    int t1;
    int v1;
    int pm9;
    int pm6;
    int v4;
    S_vv5 *v5;
    int pm2;
    int pm8;
    int v3;
    int pm5;
    v1 = (unsigned short)0x91;
    pm5 = 0;
    v3 = pm5;
    v2 = (int)((char *)o + 0x20);
    for (; (int)(int)(int)((S_x60128 *)(v2++))->f00 != 0; v3 += 1) {
        if (v1 < v3) {
            v4 = 1;
            goto L_8c20a6f8;
        }
    }
    v4 = 0;
L_8c20a6f8:
    ;
    if (!(0 != v4)) {
        int v6;
        int pm3;
        int pm7;
        t1 = operation_8c20a54c();
        v5 = (S_vv5 *)g_8c504a28;
        v3 = o->f08;
        pm8 = (v3);
        v5 = (S_vv5 *)((char *)v5 + (0xb4 * t1));
        v5->f00 = pm8;
        v6 = g_8c504a20;
        pm3 = 8;
        v4 = (v6);
        pm2 = v4;
        v3 = v6 + 1;
        pm9 = (int)v5 + pm3;
        g_8c504a20 = v3;
        v5->f04 = pm2;
        pm6 = pm9;
        v5->fb1 = (char)0xb;
        strncpy_8c12b154((void *)(pm6), (void *)(((char *)o + 0xc)), 0x17);
        v4 = (int)v5;
        v5->f1f = (char)0;
        pm2 = v4 + 0x20;
        strncpy_8c12b154((void *)(pm2), (void *)(((char *)o + 0x20)), 0x90);
        v5->fb0 = (char)0;
        g_8c504a24 = g_8c504a24 + 1;
        g_8c46fe24 = (short)(1 | (int)(int)g_8c46fe24);
        pm7 = 0;
        play_se_8c05fbf8(0x50017, pm7, 0, 0);
    }
}
