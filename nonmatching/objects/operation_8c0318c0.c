/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0318c0
 * function: operation_8c0318c0
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 54 of 136 reference instruction lines
 * differing bytes: 56
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
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct S_vv10 S_vv10;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    int f08;
    S_g8c44be0c_c *f0c;
};
struct S_vv10 {
    char unknown0[0x38];
    int f38;
};
extern S_g8c44be0c *g_8c44be0c;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void operation_8c0319fc(int, void *, int);
extern void operation_8c031a68(int, void *, int);
extern void operation_8c031b80(int, void *, int);
extern void njPopMatrixEx_8c38ad10(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c37dc90(void *, int);
void operation_8c0318c0(int a0)
{
    int v8;
    S_vv10 *v10;
    int v9;
    int v11;
    int v6;
    int v7;
    if (g_8c44be0c != 0) {
        if (g_8c44be0c->f0c != 0) {
            call_8c3827d8((void *)(g_8c44be0c->f0c));
        }
        v6 = (int)0x1000;
        v8 = (int)g_8c44be0c->f08;
        v9 = (int)0;
        v10 = (S_vv10 *)v8;
        v7 = (int)0x8000;
        while (g_8c44be0c->f00 > v9) {
            v11 = (int)v10->f38;
            if (((v11 & v6)) != 0) {
                if (((v11 & 0x20)) != 0) {
                    njPushMatrixEx_8c38ae68();
                    operation_8c0319fc(a0, (void *)v10, 1);
                    operation_8c031a68(a0, (void *)v10, 1);
                    operation_8c031b80(a0, (void *)v10, 1);
                    njPopMatrixEx_8c38ad10();
                } else {
                    if (((v11 & v7)) != 0) {
                        njPushMatrixEx_8c38ae68();
                        translate_current_matrix_v_8c382a40((void *)((int)v10 + 4));
                        call_8c37dc90((void *)((int)v10 + 0x10), 1);
                        operation_8c0319fc(a0, (void *)v10, 1);
                        operation_8c031a68(a0, (void *)v10, 1);
                        operation_8c031b80(a0, (void *)v10, 1);
                        njPopMatrixEx_8c38ad10();
                    } else {
                        njPushMatrixEx_8c38ae68();
                        translate_current_matrix_v_8c382a40((void *)((int)v10 + 4));
                        call_8c37dc90((void *)((int)v10 + 0x10), 1);
                        operation_8c0319fc(a0, (void *)v10, 0);
                        operation_8c031a68(a0, (void *)v10, 0);
                        operation_8c031b80(a0, (void *)v10, 0);
                        njPopMatrixEx_8c38ad10();
                    }
                }
            }
            v9 = (int)(v9 + 1);
            v10 = (S_vv10 *)((char *)v10 + 60);
        }
    }
}
