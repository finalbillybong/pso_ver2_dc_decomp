/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c252a70
 * function: TItemWpnOnSpreadNeedle_v49_8c252a70
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 58 of 115 reference instruction lines
 * differing bytes: 74
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_L8c2e2060 S_L8c2e2060;
typedef struct S_L8c2e2060_10 S_L8c2e2060_10;
typedef struct S_L8c2e2060_4 S_L8c2e2060_4;
typedef struct S_L8c2e2060_8 S_L8c2e2060_8;
typedef struct S_L8c2e2060_c S_L8c2e2060_c;
typedef struct Frame Frame;
typedef struct S_g8c2e2060 S_g8c2e2060;
typedef struct Arg0_13c Arg0_13c;
class Object;
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
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48(Frame *, int, void *, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
} ObjectData;
struct Frame {
    char unknown0[0xc];
};
struct S_L8c2e2060 {
    S_g8c2e2060 *f00;
    S_L8c2e2060_4 *f04;
    S_L8c2e2060_8 *f08;
    S_L8c2e2060_c *f0c;
    S_L8c2e2060_10 *f10;
};
extern S_L8c2e2060 g_8c2e2060;
extern "C" void operation_8c241658(void *);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void TItemWpnOnSpreadNeedle_v49_8c252a70(Object *o)
{
    Frame frame;
    operation_8c241658((void *)o);
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 1, (int)(&frame));
    o->v48((&frame), 0, (&g_8c2e2060)->f00, 1);
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 1, (int)(&frame));
    o->v48((&frame), 1, (&g_8c2e2060)->f04, 1);
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 1, (int)(&frame));
    o->v48((&frame), 2, (&g_8c2e2060)->f08, 1);
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 1, (int)(&frame));
    o->v48((&frame), 3, (&g_8c2e2060)->f0c, 1);
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 1, (int)(&frame));
    o->v48((&frame), 4, (&g_8c2e2060)->f10, 1);
}
