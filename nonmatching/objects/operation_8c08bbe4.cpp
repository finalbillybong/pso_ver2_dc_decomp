/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08bbe4
 * function: operation_8c08bbe4
 * language: c++
 * reference size: 680 bytes
 * compiled size: 680 bytes (+0.0%)
 * differing lines: 20 of 269 reference instruction lines
 * differing bytes: 29
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_5c_0 Arg0_5c_0;
typedef struct Arg0_5c_10 Arg0_5c_10;
typedef struct Arg0_5c_14 Arg0_5c_14;
typedef struct Arg0_5c_18 Arg0_5c_18;
class S_g8c469da4;
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x4];
    Arg0_3c *f3c;
    char unknown40[0x1c];
    Arg0_5c *f5c;
    char unknown60[0x40];
    int fa0;
    char unknowna4[0x28];
    Vector3 fcc;
};
struct Arg0_5c {
    Arg0_5c_0 *f00;
    float f04;
    float f08;
    float f0c;
    Arg0_5c_10 *f10;
    Arg0_5c_14 *f14;
    Arg0_5c_18 *f18;
};
struct S_L8c41cba0 {
    char unknown0[0x24];
    int f24;
};
struct Frame {
    Vector3 f00;
};
class S_g8c469da4 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
};
typedef struct S_g8c469da4Data {

} S_g8c469da4Data;
extern Vector3 g_8c300294;
extern S_g8c469da4 *g_8c469da4;
extern S_L8c41cba0 g_8c41cba0;
extern "C" char g_8c3002d8[];
extern "C" char gc_8c41cba0[];
extern "C" void njPrintSize_8c38c5aa(int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void operation_8c08c36c(void *);
extern "C" void call_8c08be8c(Object *);
extern "C" int operation_8c01d844(int, int, int, int);
extern "C" void operation_8c08c4f0(void *);
extern "C" void edit_three_word_fields(void *);
extern "C" void operation_8c08c7b0(void *);
extern "C" void operation_8c08c918(void *);
extern "C" void operation_8c0c5484(float, void *);
extern "C" void operation_8c0c5488(void *, void *, int, int);
extern "C" void operation_8c08bbe4(Object *o)
{
    Frame frame;
    int v32;
    int v1;
    int t1;
    int t2;
    njPrintSize_8c38c5aa(0xc);
    debug_print_at_8c38cf80(0x10004, (void *)((g_8c3002d8 + 0x23)));
    debug_print_at_8c38cf80(0x10006, (void *)((g_8c3002d8 + 0x33)), o->f3c);
    debug_print_at_8c38cf80(0x10007, (void *)((g_8c3002d8 + 0x46)), o->f5c->f00);
    debug_print_at_8c38cf80(0x10008, (void *)((g_8c3002d8 + 0x59)), o->f5c->f04);
    debug_print_at_8c38cf80(0x10009, (void *)((g_8c3002d8 + 0x69)), o->f5c->f08);
    debug_print_at_8c38cf80(0x1000a, (void *)((g_8c3002d8 + 0x79)), o->f5c->f0c);
    debug_print_at_8c38cf80(0x1000b, (void *)((g_8c3002d8 + 0x89)), o->f5c->f10);
    debug_print_at_8c38cf80(0x1000c, (void *)((g_8c3002d8 + 0x98)), o->f5c->f14);
    debug_print_at_8c38cf80(0x1000d, (void *)((g_8c3002d8 + 0xa7)), o->f5c->f18);
    operation_8c08c36c((void *)o);
    call_8c08be8c(o);
    v32 = (int)(o->f34 * 0x3c);
    v1 = (int)*(int *)((char *)(gc_8c41cba0 + 0x24) + (v32));
    if (((v1 & 0x400)) != 0 && ((v1 & 0x200)) != 0 && ((v1 & 0x10000)) != 0) {
        t1 = operation_8c01d844((int)(v32 + gc_8c41cba0 + 0x20), 0x20, 6, 1);
        if (t1 != 0) {
            o->fa0 += 1;
        }
        t2 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x10, 6, 1);
        if (t2 != 0) {
            o->fa0 -= 1;
        }
    }
    if (o->fa0 > 0xb) {
        o->fa0 = 0;
    }
    if (!(o->fa0 >= 0)) {
        o->fa0 = 0xb;
    }
    *(Vector3 *)&o->fcc = *(Vector3 *)&o->f20;
    operation_8c08c4f0((void *)o);
    edit_three_word_fields((void *)o);
    operation_8c08c7b0((void *)o);
    operation_8c08c918((void *)o);
    {
        Vector3 *s = &o->fcc;
        Vector3 *d = &o->f20;
        *d = *s;
    }
    operation_8c0c5484(10.0f, (void *)(((char *)o + 0xb4)));
    operation_8c0c5488((void *)(((char *)o + 0xb4)), (void *)(&o->f20), -0xff0100, -0xff0100);
    {
        Vector3 *p_ = (Vector3 *)&g_8c300294;
        *(Vector3 *)&(&frame)->f00 = *p_;
    }
    operation_8c0c5484(10.0f, (void *)&frame);
    if (g_8c469da4 != 0) {
        g_8c469da4->v9();
    }
}
