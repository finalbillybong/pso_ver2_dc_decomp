/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d4f44
 * function: operation_8c0d4f44
 * language: c++
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 10 of 76 reference instruction lines
 * differing bytes: 99
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
typedef struct Frame Frame;
typedef struct S_g8c46fdd8 S_g8c46fdd8;
typedef struct S_g8c46fddc S_g8c46fddc;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
class Arg0_3fc;
class Arg0_400;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x300];
    Arg0_3fc *f3fc;
    Arg0_400 *f400;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
class Arg0_3fc {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3fcData {

} Arg0_3fcData;
class Arg0_400 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_400Data {

} Arg0_400Data;
extern S_g8c46fdd8 *g_8c46fdd8;
extern S_g8c46fddc *g_8c46fddc;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int call_8c119190(void *, float);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" Object *operation_8c0d4f44(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    t1 = call_8c119190(g_8c46fdd8, o->ff8);
    if (t1 != 0) {
        call_8c3be2dc(0, t1, (Frame *)((&frame)), 2);
        o->f3fc->v5((&frame), &(&frame)->f0c);
    }
    t2 = call_8c119190(g_8c46fddc, o->ff8);
    if (t2 != 0) {
        call_8c3be2dc(0, t2, (Frame *)((&frame)), 2);
        o->f400->v5((&frame), &(&frame)->f0c);
    }
    njPopMatrixEx_8c38ad10();
    return o;
}
