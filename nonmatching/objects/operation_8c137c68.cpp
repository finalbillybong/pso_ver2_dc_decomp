/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137c68
 * function: operation_8c137c68
 * language: c++
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 4 of 55 reference instruction lines
 * differing bytes: 2
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
typedef struct Object Object;
typedef struct Arg0_10c Arg0_10c;
class Arg0_108;
struct Object {
    char unknown0[0xbc];
    float fbc;
    char unknownc0[0x4];
    unsigned short fc4;
    char fc6;
    char unknownc7[0x41];
    Arg0_108 *f108;
    Arg0_10c *f10c;
    char unknown110[0x8];
    short f118;
    char unknown11a[0x2];
    float f11c;
};
class Arg0_108 {
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
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58(void *, int, int, float, int);
};
typedef struct Arg0_108Data {

} Arg0_108Data;
extern "C" float squared_distance_xz(void *, void *);
extern "C" int operation_8c0541b4(int, int);
extern "C" void operation_8c137c68(Object *o)
{
    float t1;
    int t2;
    if ((o->fc4 & 0xffff) != 0xffff) {
        t1 = squared_distance_xz((void *)(((char *)o + 0xa0)), (void *)(((char *)o + 0x3c)));
        if (o->fbc > t1) {
            t2 = operation_8c0541b4((int)(o->fc4), (int)(o->fc6));
            if (t2 != 0) {
                o->f108->v58(o->f10c, t2, o->f118, o->f11c, 0);
            }
        }
    }
}
