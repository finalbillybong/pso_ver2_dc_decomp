/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c43c
 * function: operation_8c12c43c
 * language: c
 * reference size: 256 bytes
 * compiled size: 248 bytes (-3.1%)
 * differing lines: 142 of 111 reference instruction lines
 * differing bytes: 215
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_8 S_frame_8;
typedef struct S_frame_c S_frame_c;
typedef struct S_x58704 S_x58704;
typedef struct S_x59824 S_x59824;
struct Frame {
    short f00;
    char unknown2[0x2];
    short f04;
    char unknown6[0x2];
    S_frame_8 *f08;
    S_frame_c *f0c;
    short f10;
    char unknown12[0xe];
};
struct S_x59824 {
    char f00;
};
struct S_x58704 {
    char f00;
};
extern void hs_8c12f288(int, Frame *, void *);
extern void hs_8c12c53c(Frame *, void *, short, void *);
extern void hs_8c12f0b4(Frame *, void *, short, void *);
extern int hs_8c12bbf8(void);
extern void hs_8c12f56c(int, int, int);
extern void hs_8c12f514(int, int, int);
extern void hs_8c12f3dc(int, int);
extern void memcpy_8c12b77c(void *, int, int);
void operation_8c12c43c(int a0, int a1, int a2, int a3)
{
    Frame frame;
    char *v1;
    char *v2;
    int v4;
    int v7;
    char *v9;
    int t1;
    (&frame)->f04 = a0;
    (&frame)->f08 = (S_frame_8 *)a1;
    (&frame)->f0c = (S_frame_c *)a3;
    (&frame)->f10 = 8;
    if (a2 > 0) {
        v1 = (char *)((char *)(&frame) + 0x14);
        hs_8c12f288(a2, (&frame), v1);
        hs_8c12c53c((&frame), v1, (&frame)->f04, (&frame)->f08);
        v4 = (int)v1;
    } else {
        v2 = (char *)((char *)(&frame) + 0x14);
        hs_8c12f288(-a2, (&frame), v2);
        hs_8c12f0b4((&frame), v2, (&frame)->f04, (&frame)->f08);
        v4 = (int)v2;
    }
    a2 = (int)(0x3f - (&frame)->f00);
    t1 = hs_8c12bbf8();
    hs_8c12f56c(v4, 9, 0x42 - (short)a2);
    v7 = (int)8;
    if (8 >= (short)t1) {
        v7 = (int)8;
        do {
            *(char *)((char *)((char *)v4 + 0x0) + ((short)v7)) = ((S_x59824 *)((short)(short)v7 - (short)t1 + v4))->f00;
            v7 = (int)((short)v7 + -1);
        } while ((short)t1 <= (short)v7);
    }
    if ((short)v7 >= 0) {
        v9 = (char *)v7;
        do {
            ((S_x58704 *)((short)v7 + v4))->f00 = 0;
            v9 = (char *)(v9 + -1);
        } while ((short)v9 >= 0);
    }
    hs_8c12f514(v4, 9, a2 - (t1 << 3));
    (&frame)->f00 = 0x3f;
    hs_8c12f3dc(v4, 0x40);
    memcpy_8c12b77c((&frame)->f0c, v4, 8);
}
