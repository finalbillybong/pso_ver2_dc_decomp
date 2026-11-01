/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c218ff4
 * function: operation_8c218ff4
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 28 of 129 reference instruction lines
 * differing bytes: 37
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_g8c50590c S_g8c50590c;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
};
struct S_g8c50590c {
    char unknown0[0x28];
    int f28;
    int f2c;
    int f30;
};
struct Frame {
    int f00;
};
extern S_g8c50590c *g_8c50590c;
extern int call_8c218c14(int, int, int, int, int);
void operation_8c218ff4(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    char *v4;
    int v3;
    char *v40;
    int v5;
    int v1;
    char *v41;
    int v2;
    int v16;
    int v15;
    unsigned char v42;
    int v14;
    int t1;
    int t2;
    int *pv;
    S_g8c50590c *gp;
    if ((a1->f00) == 0) {
        v1 = (int)0;
        v2 = (int)-0xa;
        while (v1 != 3) {
            gp = g_8c50590c;
            (&frame)->f00 = *(char *)((char *)((char *)(gp->f2c + a2) + 0x0) + (v1 * 0xa));
            pv = &(&frame)->f00;
            v3 = (int)-1;
            if (v3 != (&frame)->f00) {
                t1 = call_8c218c14(a0, gp->f30, a2, 6, 0xa);
                v4 = (char *)v1;
                v5 = (int)((int)(v4) << 1);
                *(char *)((char *)((char *)a1 + 0x6) + (v5)) = t1;
                t2 = call_8c218c14(a0, g_8c50590c->f28, *pv, 0x17, 5);
                *(char *)((char *)((char *)a1 + 0x7) + (v5)) = v2 + t2 * 5;
            }
            v1 = (int)(v1 + 1);
        }
        v14 = (int)0;
        while (v14 != 3) {
            v15 = (int)(v14 << 1);
            v16 = (int)0;
            while (v16 != v14) {
                v42 = (unsigned char)*(unsigned char *)((char *)((char *)a1 + 0x6) + (v16 << 1));
                if ((v42) == 0) {
                    *(char *)((char *)((char *)a1 + 0x6) + (v15)) = 0;
                } else {
                    if (*(unsigned char *)((char *)((char *)a1 + 0x6) + (v15)) == v42) {
                        *(char *)((char *)((char *)a1 + 0x6) + (v15)) = 0;
                    }
                }
                v16 = (int)(v16 + 1);
            }
            if ((*(unsigned char *)((char *)((char *)a1 + 0x6) + (v15))) == 0) {
                *(char *)((char *)((char *)a1 + 0x7) + (v15)) = 0;
            }
            v14 = (int)(v14 + 1);
        }
    }
}
