/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e69b8
 * function: TObjEneDimedian_v91_8c0e69b8
 * language: c++
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 6 of 86 reference instruction lines
 * differing bytes: 9
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
typedef struct S_g8c46feac S_g8c46feac;
typedef struct S_g8c46feb0 S_g8c46feb0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
class Arg0_3e0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x6];
    float ff8;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
class Arg0_3e0 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3e0Data {

} Arg0_3e0Data;
extern S_g8c46feac *g_8c46feac;
extern S_g8c46feb0 *g_8c46feb0;
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjEneDimedian_v91_8c0e69b8(Object *o)
{
    Frame frame;
    int v8;
    int v1;
    if (12.0f > o->ff8) {
        if (o->ff0 != 3) {
            if (o->ff0 == 4) {
                goto L_8c0e69f6;
            }
        } else {
            v8 = call_8c119190(g_8c46feac, o->ff8);
            v1 = (int)0;
            goto L_8c0e6a08;
L_8c0e69f6:;
            v8 = call_8c119190(g_8c46feb0, o->ff8);
            v1 = (int)1;
            goto L_8c0e6a08;
        }
        v8 = (int)0;
L_8c0e6a08:;
        if (v8 != 0) {
            njPushMatrixEx_8c38ae68();
            njUnitMatrix_8c37b5c4(0);
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3be2dc(0, v8, (Frame *)((&frame)), 2);
            njPopMatrixEx_8c38ad10();
            if (*(int *)((char *)((char *)o + 0x3e0) + (v1 << 2)) != 0) {
                (*(Arg0_3e0 **)((char *)((char *)o + 0x3e0) + (v1 << 2)))->v5((&frame), &(&frame)->f0c);
            }
            v1 = (int)(v1 << 2);
        }
    }
}
