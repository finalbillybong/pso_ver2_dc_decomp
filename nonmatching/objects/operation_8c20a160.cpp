/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20a160
 * function: operation_8c20a160
 * language: c++
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 4 of 91 reference instruction lines
 * differing bytes: 6
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
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg3 Arg3;
class Object;
struct Frame {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    char unknown12[0x16];
    int f28;
    char unknown2c[0x10];
};
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
    virtual void v31(void *);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
} ObjectData;
struct Arg3 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
};
extern "C" void memset_8c12b880(void *, int, int);
extern "C" void call_8c1c8094(void *, void *, int, int, void *, Frame *);
extern "C" void operation_8c20a160(Object *o, int a1, int a2, Arg3 *a3)
{
    Frame frame;
    o->v31(&(&frame)->f28);
    memset_8c12b880((void *)(&(&frame)->f04), 0, 0x24);
    memset_8c12b880((void *)(&frame), 0, 4);
    call_8c1c8094((void *)(&(&frame)->f28), (void *)(((ObjectData *)o)->f13c), a1, a2, (void *)(&(&frame)->f04), (Frame *)((&frame)));
    if (a3 != 0) {
        a3->f00 -= (&frame)->f04;
        a3->f02 -= (&frame)->f06;
        a3->f04 -= (&frame)->f08;
        a3->f06 -= (&frame)->f0a;
        a3->f08 -= (&frame)->f0c;
        a3->f0a -= (&frame)->f0e;
        a3->f0c -= (&frame)->f10;
    }
}
