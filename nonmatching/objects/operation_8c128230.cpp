/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c128230
 * function: operation_8c128230
 * language: c++
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 2 of 66 reference instruction lines
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
class Arg0_s3ac;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
};
class Arg0_s3ac {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s3acData {

} Arg0_s3acData;
extern "C" void refresh_follow_effect_8c0129f4(void *);
extern "C" void operation_8c0fc020(void *);
extern "C" void operation_8c1083f8(int);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void create_resource_effect_8c108300(void *, int);
extern "C" void operation_8c09e6d0(void *);
extern "C" void operation_8c128230(Object *o)
{
    int t1;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        refresh_follow_effect_8c0129f4((void *)o);
        o->ff0 = 4;
        operation_8c0fc020((void *)(((char *)o + 0x3ac)));
        operation_8c1083f8((int)(((char *)o + 0x324)));
        play_se_8c05fbf8(0x30037, (int)o + 0x3c, 0, 0);
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        t1 = ((Arg0_s3ac *)((char *)o + 0x3ac))->v4();
        if (t1 == 1) {
            create_resource_effect_8c108300((void *)(((char *)o + 0x3c)), 0);
            operation_8c09e6d0((void *)o);
            o->f04 |= 1;
        }
    }
}
