/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bd718
 * function: operation_8c0bd718
 * language: c++
 * reference size: 488 bytes
 * compiled size: 488 bytes (+0.0%)
 * differing lines: 2 of 197 reference instruction lines
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
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
class Arg0_s3c0;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0xc];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x64];
    Arg0_dc *fdc;
    char unknowne0[0xa4];
    Arg0_184 *f184;
    char unknown188[0x184];
    short f30c;
    char unknown30e[0x16];
    Block_p0_324 f324;
    char unknown330[0x5c];
    Arg0_38c *f38c;
    int f390;
    char unknown394[0x6];
    short f39a;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
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
extern "C" void operation_8c0fc020(void *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0bd718(Object *o)
{
    short *pf1;
    int t1;
    int t2;
    o->f34 &= -0x200001;
    o->f34 |= 0x6040000;
    *(int *)((char *)o + 0x390) &= -8;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    operation_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c0bd7d0;
        }
        if (o->f30c == 2) {
            goto L_8c0bd820;
        }
    }
    pf1 = (short *)((char *)o + 0x39a);
    if (!((float)(short)((*pf1)++) > 30.0f)) {
    } else {
        o->f30c = 1;
        o->f74 = 1.0f;
        o->f70 = 1.0f;
        o->f6c = 1.0f;
        o->f39a = 0;
        operation_8c0fc020((void *)(((char *)o + 0x3c0)));
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t1 = call_8c24e644(0x30006, (void *)(o->f38c));
        play_se_8c05fbf8(t1, (void *)(&o->f3c), 0, 0);
        goto L_8c0bd88e;
L_8c0bd7d0:;
        o->f6c -= 0.1f;
        if (1e-07f > o->f6c) {
            o->f6c = 0.0f;
        }
        o->f70 += 0.1f;
        o->f74 = o->f6c;
        t2 = ((Arg0_s3c0 *)((char *)o + 0x3c0))->v4();
        if (t2 == 1) {
            o->f30c = 2;
            goto L_8c0bd88e;
L_8c0bd820:;
            *(Vector3 *)&o->f3c = *(Vector3 *)&o->f54;
            *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
            if (o->f184 != 0) {
                o->f324.f04 += o->f184->f10 * 0.5f;
            }
            o->f74 = 1.0f;
            o->f70 = 1.0f;
            o->f6c = 1.0f;
            o->f390 = (unsigned int)o->f390 >> 0x10 << 0x10;
            o->f390 |= 1;
        }
    }
L_8c0bd88e:;
    minimap_add_marker_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
}
