/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2491e0
 * function: TItemWpnGyaranzo_v49_8c2491e0
 * language: c++
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 20 of 94 reference instruction lines
 * differing bytes: 26
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
typedef struct Frame Frame;
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
    virtual void v48(Frame *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0xf8];
    int f238;
} ObjectData;
struct Frame {
    char unknown0[0xc];
};
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void TItemWpnGyaranzo_v49_8c2491e0(Object *o)
{
    Frame frame;
    ((ObjectData *)o)->f238 += 0x2aaa;
    if (((ObjectData *)o)->f38 != 0) {
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 2, (int)(&frame));
        o->v48((&frame), 0, 0x4fa, 1);
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 3, (int)(&frame));
        o->v48((&frame), 1, 0xe38, 1);
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 4, (int)(&frame));
        o->v48((&frame), 2, -0x4fa, 1);
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 5, (int)(&frame));
        o->v48((&frame), 3, -0xe38, 1);
    }
}
