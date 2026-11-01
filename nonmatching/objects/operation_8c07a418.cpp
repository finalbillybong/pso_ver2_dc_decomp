/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07a418
 * function: operation_8c07a418
 * language: c++
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 2 of 87 reference instruction lines
 * differing bytes: 4
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
typedef struct Object Object;
class Arg0_s424;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
class Arg0_s424 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s424Data {

} Arg0_s424Data;
extern "C" void refresh_follow_effect_8c0129f4(void *);
extern "C" void operation_8c09e6d0(void *);
extern "C" void operation_8c0fc020(void *);
extern "C" void operation_8c1083f8(int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void create_resource_effect_8c108300(void *, int);
extern "C" void operation_8c07a418(Object *o)
{
    int t1;
    *(int *)((char *)o + 0x3a4) &= -0xf80001;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->ff0 = 7;
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
        operation_8c0fc020((void *)(((char *)o + 0x424)));
        operation_8c1083f8((int)(((char *)o + 0x324)));
        o->f3a4 |= 4;
        play_se_8c05fbf8(0x30037, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f398 = 1;
        return;
    case 1:
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t1 = ((Arg0_s424 *)((char *)o + 0x424))->v4();
        if (t1 == 1) {
            create_resource_effect_8c108300((void *)(((char *)o + 0x3c)), 0);
            o->f04 |= 1;
        }
    }
}
