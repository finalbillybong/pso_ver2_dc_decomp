/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08da4c
 * function: operation_8c08da4c
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 6 of 40 reference instruction lines
 * differing bytes: 3
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
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x108];
    int f108;
};
struct S_vv9 {
    short f00;
};
extern int get_current_area_8c032b10(void);
int operation_8c08da4c(Object *o, int a1)
{
    int v2;
    int v4;
    char *v5;
    int v1;
    char *v7;
    char *v6;
    S_vv9 *v9;
    short v3;
    int v10;
    int t1;
    v1 = (int)0;
    t1 = get_current_area_8c032b10();
    v3 = (short)-1;
    v2 = (int)*(int *)((char *)0x8c2ebec8 + (t1 << 2));
    v10 = (int)v2;
    v9 = (S_vv9 *)v2;
    goto L_8c08da84;
    v6 = (char *)v2;
    v4 = (int)0;
    v5 = (char *)v1;
    v7 = (char *)v2;
L_8c08da70:
    ;
    if ((short)a1 == (short)v4) {
        o->f108 = (short)v5;
        return (int)(v6);
    }
    v9 = (S_vv9 *)(0x10 + v6);
    v10 = (int)v7;
    v1 = (int)(1 + v5);
L_8c08da84:
    ;
    if (v10 != 0) {
        v4 = (int)v9->f00;
        v6 = (char *)v9;
        v5 = (char *)v1;
        v7 = (char *)v10;
        if (v9->f00 != v3) {
            goto L_8c08da70;
        }
    }
    return 0;
}
