/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c027b60
 * function: operation_8c027b60
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 36 of 107 reference instruction lines
 * differing bytes: 50
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock14 {
    short halves[7];
} SBlock14;
typedef struct S_c8c1a7194 S_c8c1a7194;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Frame {
    char f00;
    char unknown1[0x1];
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    char unknowne[0x2];
};
struct S_c8c1a7194 {
    char f00;
};
struct Arg1 {
    char unknown0[0x1];
    char f01;
    char f02;
    char unknown3[0x349];
    short f34c;
    short f34e;
    short f350;
    short f352;
    short f354;
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x4];
    float f360;
    int f364;
    int f368;
    int f36c;
};
extern S_c8c1a7194 *operation_8c1a7194(int);
extern void operation_8c025178(int, int, Frame *);
extern int operation_8c1a7260(int, int);
void operation_8c027b60(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    int v1;
    int v2;
    int v6;
    S_c8c1a7194 *t1;
    int t2;
    if (!(a2 >= 0)) {
        a2 = 0;
    } else if (a2 > 0xc7) {
        a2 = 0xc7;
    }
    t1 = operation_8c1a7194(a0);
    *(SBlock14 *)&(&frame)->f00 = *(SBlock14 *)&t1->f00;
    if (a2 != 0) {
        operation_8c025178(a0, a2, (Frame *)((&frame)));
    }
    a1->f34c = *(short *)&(&frame)->f00;
    a1->f34e = (&frame)->f02;
    a1->f350 = (&frame)->f04;
    a1->f352 = (&frame)->f06;
    a1->f354 = (&frame)->f08;
    a1->f356 = (&frame)->f0a;
    a1->f358 = (&frame)->f0c;
    a1->f35a = 0x28;
    a1->f360 = 10.0f;
    a1->f364 = (int)(a2);
    t2 = operation_8c1a7260(a0, a2);
    a1->f368 = (int)(t2);
    a1->f36c = 0x12c;
    a1->f01 = 0;
    a1->f02 = 0;
}
