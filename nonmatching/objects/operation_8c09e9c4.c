/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09e9c4
 * function: operation_8c09e9c4
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 70 of 69 reference instruction lines
 * differing bytes: 51
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
typedef struct S_g8c46ec50 S_g8c46ec50;
typedef struct S_g8c46ec54 S_g8c46ec54;
typedef struct Object Object;
typedef struct S_vv12 S_vv12;
typedef struct S_vv13 S_vv13;
typedef struct S_vv3 S_vv3;
typedef struct S_vv5 S_vv5;
struct Object {
    int tag;
    int f04;
    int f08;
    int f0c;
};
struct S_vv3 {
    short f00;
    short f02;
};
struct S_vv5 {
    short f00;
};
struct S_vv12 {
    short f00;
    short f02;
};
struct S_vv13 {
    short f00;
};
extern S_g8c46ec50 *g_8c46ec50;
extern S_g8c46ec54 *g_8c46ec54;
extern int operation_8c09ea64(void);
int operation_8c09e9c4(Object *o)
{
    int v4;
    S_vv5 *v5;
    int v2;
    S_vv3 *v3;
    short v1;
    int v8;
    int v7;
    int v11;
    S_vv13 *v13;
    int v10;
    S_vv12 *v12;
    short v9;
    int v16;
    int v15;
    int t1;
    t1 = operation_8c09ea64();
    o->tag = 0x10;
    v1 = (short)-1;
    v2 = (int)0;
    v3 = (S_vv3 *)g_8c46ec50;
    v4 = (int)0;
    v5 = (S_vv5 *)((char *)o + 0x10);
    while (0xba0 > v4) {
        v7 = (int)v5;
        v8 = (int)v2;
        if (v3->f00 != v1) {
            v5->f00 = v3->f02 & -3;
            v7 = (int)((int)v5 + 2);
            v8 = (int)(v2 + 1);
        }
        v2 = (int)v8;
        v5 = (S_vv5 *)v7;
        v4 = (int)(v4 + 1);
        v3 = (S_vv3 *)((char *)v3 + 68);
    }
    o->f04 = (int)(v2);
    o->f08 = (o->f04 << 1) + 0x10;
    v10 = (int)0;
    v11 = (int)0;
    v12 = (S_vv12 *)g_8c46ec54;
    v13 = (S_vv13 *)v5;
    v9 = (short)-1;
    while (0x5a8 > v11) {
        v15 = (int)v13;
        v16 = (int)v10;
        if (v12->f00 != v9) {
            v13->f00 = v12->f02 & -3;
            v15 = (int)((int)v13 + 2);
            v16 = (int)(v10 + 1);
        }
        v10 = (int)v16;
        v13 = (S_vv13 *)v15;
        v11 = (int)(v11 + 1);
        v12 = (S_vv12 *)((char *)v12 + 72);
    }
    o->f0c = (int)(v10);
    return (int)(t1);
}
