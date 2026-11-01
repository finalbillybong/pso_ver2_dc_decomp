/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bdabc
 * function: operation_8c0bdabc
 * language: c++
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 6 of 99 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
class Arg0_s3c0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x22c];
    short f30c;
    char unknown30e[0x7e];
    Arg0_38c *f38c;
    int f390;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
class Arg0_s3c0 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3c0Data {

} Arg0_s3c0Data;
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c1085e4(void *);
extern "C" void operation_8c0fbfe0(void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0bdabc(Object *o)
{
    short v1;
    int t1;
    int t2;
    o->f34 &= -0x200001;
    o->f34 |= 0x6040000;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    operation_8c01c5f0(o);
    v1 = (short)o->f30c;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c0bdb3a;
        }
        if (v1 == 2) {
            goto L_8c0bdb54;
        }
    } else {
        o->f30c = 1;
        call_8c1085e4((void *)(((char *)o + 0x3c)));
        operation_8c0fbfe0((void *)(((char *)o + 0x3c0)));
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        t1 = call_8c24e644(0x30006, (void *)(o->f38c));
        play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
        goto L_8c0bdb6e;
L_8c0bdb3a:;
        t2 = ((Arg0_s3c0 *)((char *)o + 0x3c0))->v5();
        if (t2 == 1) {
            o->f30c = 2;
            goto L_8c0bdb6e;
L_8c0bdb54:;
            {
                int *pf1 = (int *)((char *)o + 0x390);
                *pf1 = (unsigned int)*pf1 >> 0x10 << 0x10;
            }
            o->f390 |= 4;
        }
    }
L_8c0bdb6e:;
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
