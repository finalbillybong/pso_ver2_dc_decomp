/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04cef0
 * function: TObjGrass_render_8c04cef0
 * language: c++
 * reference size: 620 bytes
 * compiled size: 620 bytes (+0.0%)
 * differing lines: 14 of 226 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * class header: src/include/classes/TObjGrass.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s3cc;
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
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x8];
    float f70;
    char unknown74[0x296];
    short f30a;
    char unknown30c[0x6c];
    float f378;
    char unknown37c[0x14];
    Vector3 f390;
    Vector3 f39c;
    Vector3 f3a8;
    char unknown3b4[0x10];
    int f3c4;
    int f3c8;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
};
class Arg0_s3cc {
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
typedef struct Arg0_s3ccData {

} Arg0_s3ccData;
extern int g_8c4671b0;
extern Vector3 g_8c4671b4;
extern Vector3 g_8c4671c0;
extern Vector3 g_8c4671cc;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c1086fc(void);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void TObjGrass_render_8c04cef0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    if (((((ObjectData *)o)->f34 & 0x2000000)) != 0) {
        return;
    }
    t1 = o->v12(250.0f, 500.0f, 40.0f);
    ((ObjectData *)o)->f3c4 = (int)t1;
    if (((ObjectData *)o)->f3c4 == 0) {
        return;
    }
    call_8c013c58(o);
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f378, 0.0f);
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    njScale_8c37e2e4(0, 1.3f, ((ObjectData *)o)->f70, 1.3f);
    t2 = operation_8c03d338();
    if (t2 == 1) {
        call_8c3aa716((void *)(((ObjectData *)o)->f38));
    } else {
        operation_8c1086fc();
        g_8c4671b0 = 0;
        set_transform_node_callback((void *)((void *)0x8c04f4ec));
        if (((ObjectData *)o)->f3c8 == 1) {
            t3 = ((Arg0_s3cc *)((char *)o + 0x3cc))->v8();
            if (t3 == 0) {
                goto L_8c04d022;
            }
            g_8c46f560 = (int)(g_8c575570);
            g_8c46f574 = (int)(g_8c5755a4);
            g_8c46f578 = (int)(g_8c5755a8);
            ((Arg0_s3cc *)((char *)o + 0x3cc))->v6();
            operation_8c01cc90((void *)o);
            ((Arg0_s3cc *)((char *)o + 0x3cc))->v7();
            g_8c5755a4 = (int)(g_8c46f574);
            g_8c5755a8 = (int)(g_8c46f578);
            g_8c575570 = (int)(g_8c46f560);
        } else {
            if (((ObjectData *)o)->f3c4 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
        }
L_8c04d022:;
        reset_state_8c391cc4();
    }
    set_transform_node_callback((void *)0);
    njPopMatrixEx_8c38ad10();
    operation_8c013e74();
    *(Vector3 *)&((ObjectData *)o)->f390 = *(Vector3 *)&g_8c4671b4;
    *(Vector3 *)&((ObjectData *)o)->f39c = *(Vector3 *)&g_8c4671c0;
    *(Vector3 *)&((ObjectData *)o)->f3a8 = *(Vector3 *)&g_8c4671cc;
    if (((ObjectData *)o)->f30a != 0 && ((ObjectData *)o)->f30a != 1 && ((ObjectData *)o)->f30a != 8 && ((ObjectData *)o)->f30a != 9) {
        (&frame)->f00 = 1.0f;
        (&frame)->f04 = 1.0f;
        (&frame)->f08 = 4.0f;
        call_8c04a9e0(o, (Frame *)((&frame)));
    }
}
