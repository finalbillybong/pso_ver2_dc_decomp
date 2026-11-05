/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c031790
 * function: operation_8c031790
 * language: c
 * reference size: 304 bytes
 * compiled size: 300 bytes (-1.3%)
 * differing lines: 40 of 129 reference instruction lines
 * differing bytes: 208
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_8 S_g8c44be0c_8;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct S_vv4 S_vv4;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    S_g8c44be0c_8 *f08;
    S_g8c44be0c_c *f0c;
};
struct S_vv4 {
    char unknown0[0x38];
    int f38;
};
extern S_g8c44be0c *g_8c44be0c;
extern int get_current_area_8c032b10(void);
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void operation_8c0319fc(int, void *, unsigned char);
extern void operation_8c031a68(int, void *, unsigned char);
extern void operation_8c031b80(int, void *, unsigned char);
extern void njPopMatrixEx_8c38ad10(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c37dc90(void *, int);
void operation_8c031790(int a0)
{
    char *v5;
    S_vv4 *v4;
    int v6;
    int v7;
    int v3;
    if (g_8c44be0c != 0) {
        v5 = (char *)get_current_area_8c032b10();
        if (g_8c44be0c->f0c != 0) {
            call_8c3827d8((void *)(g_8c44be0c->f0c));
        }
        v6 = (int)0;
        v3 = (int)0x1000;
        v4 = (S_vv4 *)g_8c44be0c->f08;
        while (g_8c44be0c->f00 > v6) {
            v7 = (int)v4->f38;
            if (((v7 & v3)) != 0) {
                if (((v7 & 0x20)) != 0) {
                    njPushMatrixEx_8c38ae68();
                    if (v5 == 0 || (int)(v5) == 0xf) {
                        operation_8c0319fc(a0, (void *)v4, 0);
                        operation_8c031a68(a0, (void *)v4, 0);
                        operation_8c031b80(a0, (void *)v4, 0);
                        goto L_8c03182e;
                    }
                    operation_8c0319fc(a0, (void *)v4, 1);
                    operation_8c031a68(a0, (void *)v4, 1);
                    operation_8c031b80(a0, (void *)v4, 1);
L_8c03182e:;
                    njPopMatrixEx_8c38ad10();
                } else {
                    njPushMatrixEx_8c38ae68();
                    translate_current_matrix_v_8c382a40((void *)((int)v4 + 4));
                    call_8c37dc90((void *)((int)v4 + 0x10), 1);
                    operation_8c0319fc(a0, (void *)v4, 0);
                    operation_8c031a68(a0, (void *)v4, 0);
                    operation_8c031b80(a0, (void *)v4, 0);
                    njPopMatrixEx_8c38ad10();
                }
            }
            v6 = (int)(v6 + 1);
            v4 = (S_vv4 *)((char *)v4 + 60);
        }
    }
}
