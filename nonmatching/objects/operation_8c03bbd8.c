/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03bbd8
 * function: operation_8c03bbd8
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 4 of 48 reference instruction lines
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
struct Object {
    short tag;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    short f16;
    short dispatch;
};
struct Arg2 {
    short f00;
    short f02;
    short f04;
    char unknown6[0x2];
    short f08;
    short f0a;
    short f0c;
};
struct Arg3 {
    char unknown0[0x2];
    short f02;
    short f04;
};
struct Arg4 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x10];
    int f1c;
};
struct Arg1 {
    char unknown0[0x198];
    short f198;
    short f19a;
};
void operation_8c03bbd8(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, Arg4 *a4)
{
    o->tag = a2->f00 + a3->f02;
    o->f02 = a2->f08 + (int)a4->f1c;
    o->f04 = a2->f02;
    o->f06 = (int)(0.1f * (float)(a2->f0a + a3->f04));
    o->f08 = a2->f04 + a4->f00;
    o->f0a = a2->f0c;
    o->f0c = a4->f02;
    o->f0e = a4->f04;
    o->f10 = a4->f06;
    o->f12 = a4->f08;
    o->f14 = a4->f0a;
    o->f16 = a1->f198;
    o->dispatch = a1->f19a;
}
