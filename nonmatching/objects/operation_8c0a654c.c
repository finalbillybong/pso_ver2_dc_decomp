/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a654c
 * function: operation_8c0a654c
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 6 of 71 reference instruction lines
 * differing bytes: 8
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
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Block_p0_40 {
    float f00;
    float f04;
    float f08;
} Block_p0_40;
struct Object {
    char unknown0[0x40];
    Block_p0_40 f40;
    float f4c;
    float f50;
    float f54;
};
struct Arg1 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
};
extern void njPopMatrix_8c38accc(int);
extern S_c8c011214 *operation_8c011214(int, int, int);
void operation_8c0a654c(Object *o, Arg1 *a1, Arg2 *a2)
{
    if (a1 != 0) {
        S_c8c011214 *t1;
        njPopMatrix_8c38accc(1);
        o->f4c = a1->f3c;
        o->f50 = 19.8f + a1->f40;
        o->f54 = a1->f44;
        o->f40.f00 = o->f4c + a2->f00;
        o->f40.f04 = o->f50 + a2->f04;
        o->f40.f08 = o->f54 + a2->f08;
        t1 = operation_8c011214((int)(&o->f4c), (int)(&o->f40), 0x100);
        if (!(t1 == 0)) {
            *(Vector3 *)&o->f40 = *(Vector3 *)&t1->f04->f00;
        }
    }
}
