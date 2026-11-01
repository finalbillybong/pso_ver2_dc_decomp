/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127120
 * function: operation_8c127120
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 8 of 105 reference instruction lines
 * differing bytes: 4
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
typedef struct S_vv5 S_vv5;
typedef struct S_x54832_0 S_x54832_0;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0x3c6];
    short f3f4;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
};
extern int g_8c467874;
extern int g_8c467878;
extern int operation_8c128980(void *);
extern int lookup_object_by_id(unsigned short);
extern void hold_state_8c1289a8(void *, short);
int operation_8c127120(Object *o)
{
    int v3;
    int v4;
    S_vv5 *v5;
    int v1;
    short v6;
    int v32;
    int v2;
    int v33;
    int v31;
    int t1;
    int t2;
    o->f3f4 = 0;
    v32 = 0x3f4;
    v1 = (int)0x38c;
    v2 = (int)0x3e0;
    for (v4 = g_8c467874; (g_8c467874 + g_8c467878) > v4; v4++) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0 && *(int *)((char *)v5 + v1) == 0x26 && o->f2c == v5->f2c) {
            t1 = operation_8c128980((void *)v5);
            if (t1 != 0) {
                {
                    short *pf1 = (short *)((char *)o + v32);
                    v6 = *pf1;
                    *pf1 = v6 + 1;
                }
                *(int *)((char *)((int)o + v2) + (v6 << 2)) = v5->f20;
                if (*(short *)((char *)o + v32) >= 4) {
                    break;
                }
            }
        }
    }
    v2 = (int)0x3e0;
    v32 = (int)0x3f4;
    for (v33 = 0; *(short *)((char *)o + v32) > v33; v33++) {
        t2 = lookup_object_by_id((unsigned short)(*(S_x54832_0 **)((char *)((int)o + v2) + (v33 << 2))));
        hold_state_8c1289a8((void *)t2, o->f20);
    }
    return o->f3f4;
}
