/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b6174
 * function: operation_8c0b6174
 * language: c
 * reference size: 280 bytes
 * compiled size: 284 bytes (+1.4%)
 * differing lines: 4 of 120 reference instruction lines
 * differing bytes: 88
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv10 S_vv10;
typedef struct Table {
    S_vv10 *objs[16];
    int vals[16];
    int count;
} Table;
typedef struct Object {
    char unknown0[0x24];
    Vector3 f24;
} Object;
typedef struct Arg1 {
    char unknown0[0x3c];
    Vector3 f3c;
} Arg1;
struct S_vv10 {
    char unknown0[0x34];
    int f34;
};
extern int g_8c467870;
extern int g_8c467874;
extern Table g_8c46f2c0;
extern int get_current_area_8c032b10(void);
extern int operation_8c052648(Arg1 *, S_vv10 *, float);
Table *operation_8c0b6174(Object *o, Arg1 *a1)
{
    Vector3 frame;
    float v1;
    int v3;
    int v2;
    int v7;
    int t2;
    S_vv10 *v10;
    if (get_current_area_8c032b10() == 0xe) {
        v1 = 62500.0f;
    } else {
        v1 = 10000.0f;
    }
    frame = o->f24;
    for (v2 = 0; v2 < 0x10; v2++) {
        *(int *)((char *)&g_8c46f2c0 + (v2 << 2)) = 0;
        *(int *)((char *)&g_8c46f2c0.vals + (v2 << 2)) = 0;
    }
    g_8c46f2c0.count = 0;
    if (a1 == 0) {
        return &g_8c46f2c0;
    }
    a1->f3c = frame;
    v7 = 0x20000000;
    for (v3 = g_8c467874; v3 < g_8c467870; v3++) {
        v10 = *(S_vv10 **)((char *)0x8c467240 + (v3 << 2));
        if (v10 != 0 && (v10->f34 & v7) != 0) {
            t2 = operation_8c052648(a1, v10, v1);
            if (t2 != 0) {
                *(int *)((char *)&g_8c46f2c0.vals + (g_8c46f2c0.count << 2)) = t2;
                *(S_vv10 **)((char *)&g_8c46f2c0 + (g_8c46f2c0.count << 2)) = v10;
                g_8c46f2c0.count += 1;
                if (g_8c46f2c0.count >= 0x10) {
                    g_8c46f2c0.count = 0xf;
                    return &g_8c46f2c0;
                }
            }
        }
    }
    return &g_8c46f2c0;
}
