/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e72ec
 * function: operation_8c0e72ec
 * language: c++
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 2 of 43 reference instruction lines
 * differing bytes: 2
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
typedef struct S_vv40 S_vv40;
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
};
typedef struct ObjectData {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x54];
    Arg0_13c *f13c;
} ObjectData;
struct S_vv40 {
    char unknown0[0x34];
    int f34;
};
extern "C" int create_effect(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" void operation_8c0e72ec(Object *o)
{
    S_vv40 *v40;
    int t1;
    if (((ObjectData *)o)->f13c != 0) {
        o->v42();
        v40 = (S_vv40 *)((ObjectData *)o)->f13c;
        if (((v40->f34 & 0x8000000)) == 0) {
            t1 = create_effect((void *)((int)v40 + 0x324), 0x1af, 0x10);
            bind_id((void *)t1, (unsigned short)(((ObjectData *)o)->fe6));
            play_se_8c05fbf8(0x50011, (int)((int)((ObjectData *)o)->f13c + 0x3c), 0, 0);
        }
    }
}
