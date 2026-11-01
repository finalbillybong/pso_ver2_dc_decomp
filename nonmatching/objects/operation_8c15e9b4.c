/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15e9b4
 * function: operation_8c15e9b4
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 2 of 80 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_x12048 S_x12048;
typedef struct S_x13648 S_x13648;
typedef struct Block_p1_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p1_0;
struct Object {
    char unknown0[0x39c];
    int f39c;
    char unknown3a0[0x18];
    Arg0_3b8 *f3b8;
};
struct S_x12048 {
    float f00;
};
struct S_x13648 {
    float f00;
};
struct Arg0_3b8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
struct Arg1 {
    Block_p1_0 f00;
};
struct Arg2 {
    int f00;
};
extern char g_8c2863e8[];
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
void operation_8c15e9b4(Object *o, Arg1 *a1, Arg2 *a2)
{
    char *v6;
    char *v7;
    float v1;
    float v2;
    float t1;
    float t2;
    int row;
    row = o->f39c * 0xc;
    v1 = (float)((S_x12048 *)(row + g_8c2863e8))->f00;
    v2 = (float)((S_x13648 *)((char *)(g_8c2863e8 + 8) + row))->f00;
    v6 = (char *)o->f3b8->f64;
    t2 = njSin_8c37eb0c((int)(v6));
    v7 = (char *)o->f3b8->f64;
    t1 = njCos_8c38c154((int)(v7));
    *(Vector3 *)&a1->f00 = *(Vector3 *)&o->f3b8->f3c;
    a1->f00.f00 = v1 * t1 + v2 * t2 + a1->f00.f00;
    a1->f00.f08 = -v1 * t2 + v2 * t1 + a1->f00.f08;
    if (a2 != 0) {
        a2->f00 = o->f3b8->f64 - *(int *)((char *)0x8c286400 + (o->f39c << 2));
    }
}
