/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a007c
 * function: operation_8c1a007c
 * language: c
 * reference size: 496 bytes
 * compiled size: 496 bytes (+0.0%)
 * differing lines: 14 of 190 reference instruction lines
 * differing bytes: 16
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
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x1c];
    int f104;
    char unknown108[0x24];
    unsigned short f12c;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x176];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
    char unknown334[0x4e4];
    int f818;
};
struct S_vv3 {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x44];
    unsigned short f12c;
};
extern int g_8c2e2ad8;
extern int g_8c418248;
extern int g_8c467874;
extern int g_8c4703c0;
extern float operation_8c054228(void *, int);
extern float squared_distance_xz(void *, void *);
extern int try_setting_8c02c8a0(void *);
extern void operation_8c02671c(void *, void *, int, float);
extern void apply_setting_8c02c820(void *);
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
extern void play_se_8c05fbf8(int, void *, int, int);
void operation_8c1a007c(Object *o)
{
    int v15;
    int v9;
    unsigned short v45;
    float v7;
    int v4;
    float v8;
    S_vv5 *v5;
    short v6;
    float t1;
    int t3;
    int t4;
    float t5;
    int off;
    o->f104 += 0x147;
    o->f12c = 0xffff;
    off = 0x12c;
    for (v4 = 0; v4 < g_8c467874; v4++) {
        v5 = *(S_vv5 **)((char *)0x8c467240 + (v4 << 2));
        v6 = v5->f20;
        if (v5 == 0) {
            continue;
        }
        v45 = (unsigned short)0x1000;
        if (!((unsigned short)v6 < v45)) {
            continue;
        }
        t5 = operation_8c054228((void *)v5, 0);
        v7 = 10.0f;
        v8 = v7 - t5;
        t1 = squared_distance_xz((void *)((int)v5 + 0x3c), (void *)((int)o + 0x3c));
        if (!((v8 * v8) > t1)) {
            continue;
        }
        *(short *)((char *)o + off) = v6;
        if (v5->f330 < v5->f198 || v5->f332 < v5->f19a
            || (g_8c2e2ad8 == 1 && g_8c4703c0 == 3 && (v9 = (v5->f818 & 0x10) != 0) == 1 && try_setting_8c02c8a0((void *)v5) == 1)) {
            o->fe4 = 1;
            if ((o->f12c & 0xffff) == g_8c418248) {
                operation_8c02671c((void *)v5, (void *)((int)o + 0x3c), 0x3c, v8);
                if (g_8c2e2ad8 == 1 && g_8c4703c0 == 3) {
                    v15 = (int)(((v5->f818 & 0x10)) != 0);
                    if (v15 == 1) {
                        apply_setting_8c02c820((void *)v5);
                    }
                }
            }
            t3 = create_effect((void *)((int)v5 + 0x324), 0x1f6, 0x10);
            if (t3 != 0) {
                bind_id((void *)t3, (unsigned short)(o->f12c));
            }
            t4 = create_effect((void *)((int)v5 + 0x324), 0x1f7, 0x10);
            if (t4 != 0) {
                bind_id((void *)t4, (unsigned short)(o->f12c));
            }
            play_se_8c05fbf8(0x2000e, (void *)((int)o + 0x3c), 0, 0);
            return;
        }
    }
}
