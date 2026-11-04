/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24fab0
 * function: TItemWpnYasuMachineGun_v49_8c24fab0
 * language: c++
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 8 of 64 reference instruction lines
 * differing bytes: 27
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemWpnYasuMachineGun.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v48(void *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x234];
    int f234;
} ObjectData;
extern "C" void create_effect_777c(void *, int);
extern "C" void TItemWpnYasuMachineGun_v49_8c24fab0(Object *o)
{
    int t1;
    ((ObjectData *)o)->f234 = 2;
    t1 = o->v48(((char *)o + 0x244), 0, 0, 1);
    if (t1 != 0) {
        o->v48(((char *)o + 0x250), 0, 0, 0);
    } else {
        o->v48(((char *)o + 0x250), 0, 0, 1);
    }
    create_effect_777c(((char *)o + 0x244), 9);
    create_effect_777c(((char *)o + 0x250), 9);
}
