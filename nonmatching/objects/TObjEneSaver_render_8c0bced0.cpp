/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bced0
 * function: TObjEneSaver_render_8c0bced0
 * language: c++
 * reference size: 504 bytes
 * compiled size: 504 bytes (+0.0%)
 * differing lines: 36 of 184 reference instruction lines
 * differing bytes: 309
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneSaver.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv5 S_vv5;
class Object;
class Arg0_s3c0;
class Object {
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
    virtual void v10();
    virtual void v11();
    virtual int v12(float, float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    short f30c;
    char unknown30e[0x16];
    Vector3 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x18];
    Vector3 f3ac;
    int f3b8;
} ObjectData;
struct S_vv5 {
    int f00;
};
class Arg0_s3c0 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8();
};
typedef struct Arg0_s3c0Data {

} Arg0_s3c0Data;
extern int g_8c46f3bc;
extern int g_8c46f3c0;
extern Vector3 g_8c46f3c4;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void operation_8c0bd0c8();
extern "C" void hs_8c013c58(Object *);
extern "C" void hs_8c3827d8(void *);
extern "C" void njPushMatrix_8c38ade4(int);
extern "C" void njTranslateV_8c382a58(int, void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c1086fc(void);
extern "C" void njScaleV_8c37e3d0(int, void *);
extern "C" void operation_8c01cc90(Object *);
extern "C" void operation_8c01cd20(Object *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void hs_8c0c4754_1(int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void hs_8c04a9e0(Object *, int);
extern "C" void TObjEneSaver_render_8c0bced0(Object *o)
{
    S_vv5 *v5;
    int t1;
    int t2;
    t1 = o->v12(300.0f, 600.0f, 30.0f);
    if (t1 == 0) {
        v5 = (S_vv5 *)t1;
    } else {
        hs_8c013c58(o);
        hs_8c3827d8(((ObjectData *)o)->f28);
        njPushMatrix_8c38ade4(0);
        njTranslateV_8c382a58(0, ((char *)o + 0x3c));
        njRotateY_8c37df90(0, ((ObjectData *)o)->f64);
        g_8c46f3bc = 0;
        g_8c46f3c0 = (int)(((ObjectData *)o)->f3b8);
        set_transform_node_callback(operation_8c0bd0c8);
        operation_8c1086fc();
        if (((ObjectData *)o)->f30a != 0) {
            if (((ObjectData *)o)->f30a != 1 && ((ObjectData *)o)->f30a != 2) {
                if (((ObjectData *)o)->f30a != 0xb) {
                    goto L_8c0bcfcc;
                }
                if (((ObjectData *)o)->f30c == 1) {
                    njScaleV_8c37e3d0(0, ((char *)o + 0x6c));
                }
            }
            t2 = ((Arg0_s3c0 *)((char *)o + 0x3c0))->v8();
            if (t2 != 0) {
                v5 = (S_vv5 *)(void *)0x8c46f560;
                v5->f00 = (int)(g_8c575570);
                g_8c46f574 = (int)(g_8c5755a4);
                g_8c46f578 = (int)(g_8c5755a8);
                ((Arg0_s3c0 *)((char *)o + 0x3c0))->v6();
                operation_8c01cc90(o);
                ((Arg0_s3c0 *)((char *)o + 0x3c0))->v7();
                g_8c5755a4 = (int)(g_8c46f574);
                g_8c5755a8 = (int)(g_8c46f578);
                g_8c575570 = (int)(v5->f00);
                goto L_8c0bcfe2;
L_8c0bcfcc:;
                if (t1 == 1) {
                    operation_8c01cc90(o);
                } else {
                    operation_8c01cd20(o);
                }
            }
        }
        v5 = (S_vv5 *)t1;
L_8c0bcfe2:;
        reset_state_8c391cc4();
        hs_8c0c4754_1(0);
        *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&g_8c46f3c4;
        njPopMatrixEx_8c38ad10();
        operation_8c013e74();
        if (((((ObjectData *)o)->f390 & 1)) != 0) {
            return;
        }
        hs_8c04a9e0(o, 0);
        return;
    }
    *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&((ObjectData *)o)->f324;
}
