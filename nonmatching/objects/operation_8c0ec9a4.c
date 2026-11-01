/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ec9a4
 * function: operation_8c0ec9a4
 * language: c
 * reference size: 344 bytes
 * compiled size: 344 bytes (+0.0%)
 * differing lines: 8 of 148 reference instruction lines
 * differing bytes: 5
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
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x14c];
    int f178;
};
extern int g_8c4703c0;
extern int g_8c4703c4;
extern char g_8c41cba0[];
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d844(int, int, int, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern int operation_8c01d8a8(void *, int);
int operation_8c0ec9a4(Object *o)
{
    int v2;
    char *v29;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    v1 = (int)(g_8c41cba0 + 0x20);
    v2 = (int)0;
    t1 = operation_8c01d858(v1, 0x10, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
        if (t2 == 0) {
            goto L_8c0ec9ea;
        }
    }
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    o->f28 -= 1;
L_8c0ec9ea:;
    t3 = operation_8c01d858(v1, 0x20, 6, 1);
    if (t3 == 0) {
        t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
        if (t4 == 0) {
            goto L_8c0eca20;
        }
    }
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    o->f28 += 1;
L_8c0eca20:;
    if (o->f178 < o->f28) {
        o->f28 = 0;
    }
    if (!(o->f28 >= 0)) {
        o->f28 = (int)(o->f178);
    }
    g_8c4703c4 = g_8c4703c0 = o->f28;
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
        if (t5 == 0) {
            goto L_8c0eca62;
        }
    }
    v2 = (int)(v2 | 1);
L_8c0eca62:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t6 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t6 == 0) {
            goto L_8c0eca80;
        }
    }
    v2 = (int)(v2 | 2);
L_8c0eca80:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 0x400)) == 0) {
        t7 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 0x400);
        if (t7 == 0) {
            goto L_8c0ecaa0;
        }
    }
    v2 = (int)(v2 | 4);
L_8c0ecaa0:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 0x200)) == 0) {
        t8 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 0x200);
        if (t8 == 0) {
            goto L_8c0ecac0;
        }
    }
    v2 = (int)(v2 | 8);
L_8c0ecac0:;
    return (int)(v2);
}
