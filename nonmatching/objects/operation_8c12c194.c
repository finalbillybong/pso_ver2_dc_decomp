/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c194
 * function: operation_8c12c194
 * language: c
 * reference size: 508 bytes
 * compiled size: 536 bytes (+5.5%)
 * differing lines: 302 of 217 reference instruction lines
 * differing bytes: 486
 * provenance: generator draft (mode uctern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct S_vv13 S_vv13;
typedef struct S_vv4 S_vv4;
struct Frame {
    short f00;
    char unknown2[0x2];
    S_frame_4 *f04;
    char f08;
    char unknown9[0x17];
    char f20;
    char unknown21[0xb];
};
struct S_vv4 {
    char f00;
};
struct S_vv13 {
    char f00;
    char unknown1[0x2];
    char f03;
};
extern void memset_8c12b880(void *, int, int);
extern void bytes_shl(S_vv4 *, int, int);
extern void memcpy_8c12b77c(void *, S_vv4 *, void *);
extern void call_8c12f288(int, Frame *, void *);
extern void call_8c12c53c(Frame *, void *, int, void *);
extern void call_8c12f0b4(Frame *, void *, int, void *);
extern void call_8c12f56c(S_vv13 *, int, int);
extern void bytes_shl1(S_vv13 *, int);
extern int call_8c12f3dc(S_vv13 *, int);
extern void make_float(short, S_vv13 *);
void operation_8c12c194(int a0, int a1, int a2)
{
    Frame frame;
    char *v2;
    S_vv4 *v4;
    S_vv13 *v13;
    int v7;
    int v20;
    char *v6;
    int v23;
    char *v8;
    int v9;
    char *v10;
    int v1;
    int v3;
    int v15;
    int v16;
    int v5;
    int v27;
    int t1;
    (&frame)->f04 = (S_frame_4 *)a0;
    (&frame)->f08 = a2;
    v1 = (int)0x3f;
    v2 = (char *)((char *)(&frame) + 0xc);
    memset_8c12b880(v2, 0, 8);
    v3 = (int)0;
    v4 = (S_vv4 *)(&frame)->f04;
    while (v4->f00 == 0) {
        v1 = (int)(v1 + -8);
        v3 = (int)(v3 + 1);
        v4 = (S_vv4 *)((char *)v4 + 1);
    }
    v5 = (int)0x80;
    v6 = (char *)v5;
    v7 = (int)0;
    while ((((unsigned char)v4->f00 & (unsigned char)v6)) == 0) {
        v7 = (int)(v7 + 1);
        v6 = (char *)((unsigned int)(unsigned char)v6 >> 1);
    }
    (&frame)->f04 = (S_frame_4 *)(8 - v3);
    bytes_shl(v4, (int)(8 - v3), v7);
    memcpy_8c12b77c(v2, v4, (void *)((&frame)->f04));
    if (!(a1 >= 0)) {
        v8 = (char *)&(&frame)->f20;
        call_8c12f288(-a1, (Frame *)((&frame)), v8);
        v9 = (int)(v1 - v7);
        call_8c12c53c((Frame *)((&frame)), v8, v9, v2);
        v13 = (S_vv13 *)v8;
    } else {
        v10 = (char *)&(&frame)->f20;
        call_8c12f288(a1, (Frame *)((&frame)), v10);
        call_8c12f0b4((Frame *)((&frame)), v10, (int)(v1 - v7), v2);
        v13 = (S_vv13 *)v10;
    }
    call_8c12f56c(v13, 9, 0x1a);
    (&frame)->f00 += 0x7f;
    while ((((unsigned char)v13->f00 & v5)) == 0) {
        bytes_shl1(v13, 4);
        (&frame)->f00 -= 1;
    }
    v23 = (int)(&frame)->f08;
    if (!((&frame)->f00 > 0)) {
        v20 = (int)(&frame)->f08;
        if (v20 != 1) {
            if (v20 == 2) {
                goto L_8c12c288;
            }
            if (v20 == 3) {
                goto L_8c12c28e;
            }
            if (v20 == 4) {
                goto L_8c12c2c4;
            }
        } else {
            v15 = (int)0x4c4;
            goto L_8c12c290;
L_8c12c288:;
            v16 = (int)0x4ec;
            goto L_8c12c2c6;
L_8c12c28e:;
            v15 = (int)0x500;
L_8c12c290:;
            *(int *)0x8c4d9a00 = (int)(v15);
            goto L_8c12c2ca;
L_8c12c2c4:;
            v16 = (int)0x44c;
L_8c12c2c6:;
            *(int *)0x8c4d9a00 = (int)(v16);
        }
        v15 = (int)((unsigned char)v13->f00);
L_8c12c2ca:;
        memset_8c12b880((void *)v13, 0, 4);
        (&frame)->f00 = 0;
        v23 = (int)v20;
    }
    if ((((unsigned char)v13->f03 & 0x1f)) != 0) {
        v13->f03 |= 0x20;
    }
    t1 = call_8c12f3dc(v13, 0x18);
    if (t1 == 1) {
        (&frame)->f00 += 1;
    }
    if ((&frame)->f00 == 0 && (((unsigned char)(&frame)->f20 & 0x80)) != 0) {
        (&frame)->f00 = 1;
    }
    if ((&frame)->f00 >= 0xff) {
        if (v23 != 1) {
            if (v23 == 2) {
                goto L_8c12c336;
            }
            if (v23 == 3) {
                goto L_8c12c33c;
            }
            if (v23 == 4) {
                goto L_8c12c344;
            }
        } else {
            *(int *)0x8c4d9a00 = 0x4ba;
            goto L_8c12c34a;
L_8c12c336:;
            v27 = (int)0x4e2;
            goto L_8c12c346;
L_8c12c33c:;
            *(int *)0x8c4d9a00 = 0x4f6;
            goto L_8c12c34a;
L_8c12c344:;
            v27 = (int)0x44c;
L_8c12c346:;
            *(int *)0x8c4d9a00 = (int)(v27);
        }
L_8c12c34a:;
        memset_8c12b880((void *)v13, 0, 4);
        (&frame)->f00 = 0xff;
    }
    make_float((&frame)->f00, v13);
}
