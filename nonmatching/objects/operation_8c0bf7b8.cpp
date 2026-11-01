/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bf7b8
 * function: operation_8c0bf7b8
 * language: c++
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 2 of 56 reference instruction lines
 * differing bytes: 4
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
typedef struct Frame Frame;
typedef struct S_g8c46f3d0 S_g8c46f3d0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
class Arg0_3dc;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x2e0];
    Arg0_3dc *f3dc;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
class Arg0_3dc {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3dcData {

} Arg0_3dcData;
extern S_g8c46f3d0 *g_8c46f3d0;
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0bf7b8(Object *o)
{
    Frame frame;
    int t1;
    t1 = call_8c119190(g_8c46f3d0, o->ff8);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        njUnitMatrix_8c37b5c4(0);
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3be2dc(0, t1, (Frame *)((&frame)), 2);
        njPopMatrixEx_8c38ad10();
        if (o->f3dc != 0) {
            o->f3dc->v5((&frame), &(&frame)->f0c);
        }
    }
}
