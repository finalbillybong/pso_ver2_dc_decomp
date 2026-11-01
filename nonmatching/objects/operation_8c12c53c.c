/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c53c
 * function: operation_8c12c53c
 * language: c
 * reference size: 404 bytes
 * compiled size: 444 bytes (+9.9%)
 * differing lines: 262 of 189 reference instruction lines
 * differing bytes: 405
 * provenance: generator draft (mode uctern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +40 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv52 S_vv52;
typedef struct S_x74608 S_x74608;
typedef struct S_x78224 S_x78224;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    short f08;
    char unknowna[0x2e];
};
struct S_x74608 {
    char f00;
};
struct S_vv1 {
    char f00;
    char f01;
    char f02;
    char f03;
    char unknown4[0x1];
    char f05;
    char f06;
    char f07;
    char f08;
    char f09;
    char f0a;
    char f0b;
};
struct S_x78224 {
    char f00;
};
struct S_vv3 {
    char unknown0[0x4];
    char f04;
    char f05;
    char f06;
    char f07;
    char f08;
    char f09;
    char f0a;
    char unknownb[0x1];
    char f0c;
};
struct Object {
    short tag;
};
struct S_vv52 {
    char f00;
};
extern void memset_8c12b880(S_vv1 *, int, int);
extern void memcpy_8c12b77c(void *, void *, int);
extern void bytes_shl1(S_vv3 *, int);
extern int call_8c12f6a4(int, S_vv1 *, void *, int);
extern void call_8c12c12c(S_vv1 *, void *, int);
extern void call_8c12f4c8(S_vv3 *, int);
void operation_8c12c53c(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    S_vv1 *v1;
    char *v2;
    S_vv3 *v3;
    S_vv52 *v52;
    int v7;
    int v9;
    short v28;
    int v51;
    int v4;
    int t1;
    (&frame)->f04 = (S_frame_4 *)a1;
    (&frame)->f08 = a2;
    (&frame)->f00 = (S_frame_0 *)a3;
    v1 = (S_vv1 *)((char *)(&frame) + 0x2c);
    memset_8c12b880(v1, 0, 4);
    memcpy_8c12b77c((void *)((int)v1 + 4), (void *)((&frame)->f00), 8);
    v2 = (char *)((char *)(&frame) + 0x20);
    memset_8c12b880((S_vv1 *)v2, 0, 4);
    memcpy_8c12b77c((void *)(v2 + 4), (void *)((&frame)->f04), 8);
    v3 = (S_vv3 *)((char *)(&frame) + 0x10);
    memset_8c12b880((S_vv1 *)v3, 0, 0x10);
    v4 = (int)0x42;
    while (v4 != 0) {
        bytes_shl1(v3, 0xc);
        t1 = call_8c12f6a4(0, v1, v2, 0xc);
        if (t1 >= 0) {
            ((S_x74608 *)((int)v3 + 0xb))->f00 += 1;
        } else {
            call_8c12c12c(v1, v2, 0xc);
        }
        bytes_shl1((S_vv3 *)v1, 0xc);
        v4 = (int)(v4 + -1);
    }
    v9 = (int)2;
    goto L_8c12c600;
    v7 = (int)2;
    do {
        call_8c12f4c8(v3, 0x10);
        v7 -= 1;
        v9 = (int)v7;
L_8c12c600:;
        v7 = (int)v9;
    } while (v9 != 0);
    if (v1->f00 == 0 && v1->f01 == 0 && v1->f02 == 0 && v1->f03 == 0 && ((S_x78224 *)((int)v1 + 4))->f00 == 0 && v1->f05 == 0 && v1->f06 == 0 && v1->f07 == 0 && v1->f08 == 0 && v1->f09 == 0 && v1->f0a == 0 && v1->f0b == 0) {
    } else {
        v3->f0c |= 0x20;
    }
    v28 = (short)o->tag;
    o->tag = (&frame)->f08 - v28;
    if (v3->f04 == 0 && v3->f05 == 0 && v3->f06 == 0 && v3->f07 == 0 && v3->f08 == 0 && v3->f09 == 0 && v3->f0a == 0 && ((S_x74608 *)((int)v3 + 0xb))->f00 == 0 && v3->f0c == 0) {
    } else {
        v51 = (int)0x80;
        v52 = (S_vv52 *)((int)v3 + 4);
        while ((((unsigned char)v52->f00 & v51)) == 0) {
            bytes_shl1((S_vv3 *)v52, 9);
            o->tag -= 1;
        }
    }
    memcpy_8c12b77c((void *)((&frame)->f04), (void *)((int)v3 + 4), 9);
}
