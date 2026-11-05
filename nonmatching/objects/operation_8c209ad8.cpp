/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c209ad8
 * function: operation_8c209ad8
 * language: c++
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 8 of 157 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
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
    virtual void v21(int);
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
};
typedef struct ObjectData {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x4];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0x80];
    int f1c0;
} ObjectData;
struct Arg0_13c_s754 {
    char unknown0[0xc];
    int f0c;
};
extern "C" void operation_8c074d44(void *);
extern "C" void operation_8c07484c(void *, int);
extern "C" int get_current_area_8c032b10(void);
extern "C" void operation_8c22353c(int);
extern "C" void operation_8c223680(int);
extern "C" void operation_8c209ad8(Object *o)
{
    int v14;
    int v13;
    int v7;
    int v6;
    int v1;
    int v20;
    int t1;
    if (((ObjectData *)o)->f13c == 0) {
        return;
    }
    operation_8c074d44((void *)o);
    operation_8c07484c((void *)o, 2);
    ((ObjectData *)o)->fec |= 8;
    o->v21(1);
    t1 = get_current_area_8c032b10();
    if (t1 != 0xf) {
        v1 = (int)(((((ObjectData *)o)->f1c0 & 1)) != 0);
        if (v1 == 0) {
            ((ObjectData *)o)->f1c0 |= 1;
            o->v44();
        }
    }
    v6 = (int)(((((ObjectData *)o)->f1c0 & 2)) != 0);
    if (v6 != 0) {
        v7 = (int)(((((ObjectData *)o)->f1c0 & 4)) != 0);
        if (v7 == 0) {
            operation_8c22353c((int)(((ObjectData *)o)->fe6));
            ((ObjectData *)o)->f1c0 |= 4;
        }
    }
    v13 = (int)(((((ObjectData *)o)->f1c0 & 8)) != 0);
    if (v13 != 0) {
        v14 = (int)(((((ObjectData *)o)->f1c0 & 0x10)) != 0);
        if (v14 == 0) {
            operation_8c223680((int)(((ObjectData *)o)->fe6));
            ((ObjectData *)o)->f1c0 |= 0x10;
        }
    }
    v20 = (int)(((((ObjectData *)o)->f1c0 & 0x20)) != 0);
    if (v20 != 0) {
        ((Arg0_13c_s754 *)((char *)((ObjectData *)o)->f13c + 0x754))->f0c |= 0x20;
        ((ObjectData *)o)->f1c0 |= 0x40;
    }
    o->v42();
}
