/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c209eb4
 * function: operation_8c209eb4
 * language: c++
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 8 of 125 reference instruction lines
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
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct Arg0_1bc Arg0_1bc;
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
    virtual void v22(int);
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
};
typedef struct ObjectData {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x4];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0x7c];
    Arg0_1bc *f1bc;
    int f1c0;
} ObjectData;
struct Arg0_13c_s754 {
    char unknown0[0xc];
    int f0c;
};
extern "C" void operation_8c07484c(void *, int);
extern "C" void operation_8c223564(int);
extern "C" void operation_8c2236a8(int);
extern "C" void release_hierarchy_children(void *);
extern "C" void operation_8c209eb4(Object *o)
{
    int v1;
    int v4;
    int v6;
    int v8;
    if (((ObjectData *)o)->f13c != 0) {
        operation_8c07484c((void *)o, 1);
        ((ObjectData *)o)->fec &= -0x29;
        o->v22(1);
        v1 = (int)(((((ObjectData *)o)->f1c0 & 1)) != 0);
        if (v1 != 0) {
            o->v45();
            ((ObjectData *)o)->f1c0 = (unsigned int)((ObjectData *)o)->f1c0 >> 1 << 1;
        }
        v4 = (int)(((((ObjectData *)o)->f1c0 & 4)) != 0);
        if (v4 != 0) {
            operation_8c223564((int)(((ObjectData *)o)->fe6));
            ((ObjectData *)o)->f1c0 &= -5;
        }
        v6 = (int)(((((ObjectData *)o)->f1c0 & 0x10)) != 0);
        if (v6 != 0) {
            operation_8c2236a8((int)(((ObjectData *)o)->fe6));
            ((ObjectData *)o)->f1c0 &= -0x11;
        }
        v8 = (int)(((((ObjectData *)o)->f1c0 & 0x40)) != 0);
        if (v8 != 0) {
            ((Arg0_13c_s754 *)((char *)((ObjectData *)o)->f13c + 0x754))->f0c &= -0x21;
            ((ObjectData *)o)->f1c0 &= -0x41;
        }
        o->v43();
        if (((ObjectData *)o)->f1bc != 0) {
            release_hierarchy_children((void *)(((ObjectData *)o)->f1bc));
        }
    }
}
