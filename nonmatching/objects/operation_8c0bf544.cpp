/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bf544
 * function: operation_8c0bf544
 * language: c++
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 6 of 102 reference instruction lines
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
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_38c Arg0_38c;
class Arg0_s3c0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x306];
    short f30c;
    char unknown30e[0xa];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x68];
    Arg0_38c *f38c;
};
class Arg0_s3c0 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s3c0Data {

} Arg0_s3c0Data;
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c1083f8(int);
extern "C" void operation_8c0fc020(void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int angle_halfway(int, int);
extern "C" void apply_object_velocity(void *);
extern "C" void create_resource_effect_8c108300(void *, int);
extern "C" void operation_8c0bf544(Object *o)
{
    short v1;
    int v2;
    int t1;
    int t2;
    int t3;
    operation_8c01c5f0(o);
    v1 = (short)o->f30c;
    switch (v1) {
        case 0:
        o->f30c = 1;
        operation_8c1083f8((int)(((char *)o + 0x3c)));
        operation_8c0fc020((void *)(((char *)o + 0x3c0)));
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        t1 = call_8c24e644(0x30007, (void *)(o->f38c));
        play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
        case 1:
        v2 = (int)0x3b8;
        t2 = angle_halfway((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v2))), 0);
        *(int *)((char *)((char *)o + 0x0) + (v2)) = (int)t2;
        apply_object_velocity((void *)o);
        o->f318 *= 0.5f;
        o->f320 *= 0.5f;
        t3 = ((Arg0_s3c0 *)((char *)o + 0x3c0))->v4();
        if (t3 != 1) {
            return;
        }
        create_resource_effect_8c108300((void *)(((char *)o + 0x3c)), 0);
        o->f30c = 2;
        return;
        case 2:
        o->f04 |= 1;
    }
}
