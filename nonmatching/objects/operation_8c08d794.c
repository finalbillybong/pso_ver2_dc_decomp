/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08d794
 * function: operation_8c08d794
 * language: c
 * reference size: 84 bytes
 * compiled size: 84 bytes (+0.0%)
 * differing lines: 6 of 38 reference instruction lines
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
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    short f00;
    char unknown2[0x2];
    int f04;
};
struct S_vv3 {
    short f00;
};
extern int get_current_area_8c032b10(void);
int operation_8c08d794(int a0, S_vv3 *a1)
{
    int v5;
    short v2;
    short pm5;
    short pm3;
    int pm1;
    S_vv4 *v1;
    int pm2;
    pm1 = get_current_area_8c032b10();
    v1 = *(S_vv4 **)((char *)0x8c2ebec8 + (pm1 << 2));
    if (0 != v1) {
        goto L_init;
    }
    return 0;
L_body:
    ;
    if ((short)v5 == (short)a1->f00) {
        return ((int ( *) ( void *))(v1->f04))((void *)(4 + (int)a1));
    }
    v1 = (S_vv4 *)((char *)v1 + 16);
L_test:
    ;
    v5 = v1->f00;
    if (!(v2 == v5)) {
        goto L_body;
    }
    return 0;
L_init:
    ;
    pm3 = -1;
    v2 = (short)(int)pm3;
    goto L_test;
}
