/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0324b0
 * function: operation_8c0324b0
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 90 of 165 reference instruction lines
 * differing bytes: 45
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg1_20 Arg1_20;
typedef struct Arg1_28 Arg1_28;
typedef struct S_vv14 S_vv14;
typedef struct S_vv14_0 S_vv14_0;
typedef struct S_vv23 S_vv23;
typedef struct S_vv23_0 S_vv23_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
struct Arg1 {
    char unknown0[0x20];
    Arg1_20 *f20;
    int f24;
    Arg1_28 *f28;
    int f2c;
    int f30;
    int f34;
    int f38;
};
struct S_vv5 {
    S_vv5_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_vv5_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct S_vv14 {
    S_vv14_0 *f00;
    char unknown4[0x28];
    int f2c;
};
struct S_vv14_0 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
struct S_vv23 {
    S_vv23_0 *f00;
    char unknown4[0x34];
    int f38;
};
struct S_vv23_0 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
extern int operation_8c032648(int, int, float, float, float);
extern int operation_8c032614(int, int, float, float);
void operation_8c0324b0(int a0, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v3;
    int v4;
    S_vv5 *v5;
    int v2;
    int v15;
    S_vv14 *v14;
    int v12;
    int v13;
    int v24;
    S_vv23 *v23;
    int v21;
    int v22;
    int t1;
    int t2;
    int t3;
    v1 = (int)0x1000;
    a1->f38 |= v1;
    v3 = (int)a1->f24;
    v4 = (int)0;
    v5 = (S_vv5 *)v3;
    v2 = (int)-0x1001;
    while (a1->f30 > v4) {
        if (v5->f00 != 0) {
            (&frame)->f00 = v5->f00->f00;
            (&frame)->f04 = v5->f00->f04;
            (&frame)->f08 = v5->f00->f08;
            t1 = operation_8c032648(a0, (int)(&frame), 10000.0f, 100.0f, v5->f00->f0c);
            if (t1 != 0) {
                v5->f08 |= v1;
            } else {
                v5->f08 &= v2;
            }
        }
        v4 = (int)(v4 + 1);
        v5 = (S_vv5 *)((char *)v5 + 12);
    }
    v12 = (int)0x1000;
    v14 = (S_vv14 *)a1->f20;
    v15 = (int)0;
    v13 = (int)-0x1001;
    while (a1->f2c > v15) {
        if (v14->f00 != 0) {
            (&frame)->f00 = v14->f00->f08;
            (&frame)->f04 = v14->f00->f0c;
            (&frame)->f08 = v14->f00->f10;
            t2 = operation_8c032614(a0, (int)(&frame), 10000.0f, 100.0f);
            if (t2 != 0) {
                v14->f2c |= v12;
            } else {
                v14->f2c &= v13;
            }
        }
        v15 = (int)(v15 + 1);
        v14 = (S_vv14 *)((char *)v14 + 48);
    }
    v21 = (int)0x1000;
    v23 = (S_vv23 *)a1->f28;
    v24 = (int)0;
    v22 = (int)-0x1001;
    while (a1->f34 > v24) {
        if (v23->f00 != 0) {
            (&frame)->f00 = v23->f00->f08;
            (&frame)->f04 = v23->f00->f0c;
            (&frame)->f08 = v23->f00->f10;
            t3 = operation_8c032614(a0, (int)(&frame), 10000.0f, 100.0f);
            if (t3 != 0) {
                v23->f38 |= v21;
            } else {
                v23->f38 &= v22;
            }
        }
        v24 = (int)(v24 + 1);
        v23 = (S_vv23 *)((char *)v23 + 60);
    }
}
