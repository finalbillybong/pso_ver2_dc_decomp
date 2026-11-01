/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c239910
 * function: TItemWpnWindCane_v39_8c239910
 * language: c++
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 10 of 48 reference instruction lines
 * differing bytes: 21
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
typedef struct S_vv59 S_vv59;
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
    virtual void v48(void *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
} ObjectData;
struct S_vv59 {
    char unknown0[0x37c];
    int f37c;
};
extern int g_8c44be04;
extern "C" int current_mode_active(void);
extern "C" int play_se_8c05fbf8(int, void *, int, int);
extern "C" void emit_control_60320(int, int, int);
extern "C" void TItemWpnWindCane_v39_8c239910(Object *o)
{
    S_vv59 *v59;
    int t1;
    int t2;
    if (((ObjectData *)o)->f13c != 0) {
        t1 = current_mode_active();
        if (t1 != 0) {
            v59 = (S_vv59 *)((ObjectData *)o)->f13c;
            if (g_8c44be04 == v59->f37c) {
                t2 = play_se_8c05fbf8(0x10005, (void *)((int)v59 + 0x3c), 0, 0);
                emit_control_60320(t2, 0x300, 0);
                o->v48(((char *)o + 0x244), 0, 0, 1);
            }
        }
    }
}
