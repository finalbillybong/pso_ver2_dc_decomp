/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0caeac
 * function: operation_8c0caeac
 * language: c++
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 10 of 82 reference instruction lines
 * differing bytes: 104
 * provenance: generator draft (mode switch2)
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
typedef struct S_vv1 S_vv1;
class Arg0_s418;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    short ff0;
    char unknownf2[0x2f2];
    int f3e4;
    char unknown3e8[0x2c];
    float f414;
};
struct S_vv1 {
    int f00;
};
class Arg0_s418 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s418Data {

} Arg0_s418Data;
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void operation_8c1083f8(int);
extern "C" void operation_8c0fc020(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void create_resource_effect_8c10829c(void *, int);
extern "C" void operation_8c0caeac(Object *o, int a1)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)((char *)o + 0x4ac);
    switch (a1) {
    case 3:
    case 5:
        break;
    case 4:
        o->ff0 = 6;
        o->f3e4 |= 6;
        refresh_follow_effect_8c05a194((void *)o);
        v1->f00 = 0;
        operation_8c1083f8((int)(((char *)o + 0x324)));
        operation_8c0fc020((void *)(((char *)o + 0x418)));
        o->f414 = 0.0f;
        play_se_8c05fbf8(0x30019, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 0:
        operation_8c01c5f0(o);
        t1 = ((Arg0_s418 *)((char *)o + 0x418))->v4();
        if (t1 != 0) {
            create_resource_effect_8c10829c((void *)(((char *)o + 0x3c)), 0);
            o->f04 |= 1;
        }
    }
}
