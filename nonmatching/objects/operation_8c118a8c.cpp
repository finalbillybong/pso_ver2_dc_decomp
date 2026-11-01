/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118a8c
 * function: operation_8c118a8c
 * language: c++
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 18 of 64 reference instruction lines
 * differing bytes: 25
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv6 S_vv6;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0x20];
    int f20;
    char unknown24[0x100];
    int f124;
    int f128;
} ObjectData;
struct S_vv6 {
    float f00;
    float f04;
    float f08;
    int f0c;
    float f10;
    float f14;
    float f18;
    int f1c;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
extern "C" void operation_8c118a8c(Object *o, Arg1 *a1, Arg2 *a2)
{
    S_vv6 *v6;
    if (((ObjectData *)o)->f20 >= 0x10) {
        o->v6();
    }
    v6 = (S_vv6 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (((ObjectData *)o)->f20 << 5))) + 0x24);
    v6->f00 = a1->f00;
    v6->f04 = a1->f04;
    v6->f08 = a1->f08;
    v6->f0c = (int)(((ObjectData *)o)->f124);
    v6->f10 = a2->f00;
    v6->f14 = a2->f04;
    v6->f18 = a2->f08;
    v6->f1c = (int)(((ObjectData *)o)->f128);
    ((ObjectData *)o)->f20 += 1;
}
