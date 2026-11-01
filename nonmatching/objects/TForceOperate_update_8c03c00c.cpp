/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03c00c
 * function: TForceOperate_update_8c03c00c
 * language: c++
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 4 of 46 reference instruction lines
 * differing bytes: 43
 * provenance: generator draft (mode switch2)
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_3b8 S_c8c021ef8_3b8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
class S_c8c053d84;
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x396];
    S_c8c021ef8_3b8 *f3b8;
};
struct S_c8c021ef8_3b8 {
    char unknown0[0x440];
    unsigned short f440;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
class S_c8c053d84 {
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
    virtual void v14(short);
};
typedef struct S_c8c053d84Data {

} S_c8c053d84Data;
extern "C" int call_8c0272d8(void);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c0262a0(S_c8c021ef8 *);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void TForceOperate_update_8c03c00c(Object *o)
{
    int t1;
    S_c8c021ef8 *t2;
    int t3;
    S_c8c053d84 *t4;
    t1 = call_8c0272d8();
    if (t1 != 0) {
        t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t2 != 0) {
            t3 = operation_8c0262a0(t2);
            if (t3 != 0) {
                t4 = lookup_object_by_id((unsigned short)(t2->f3b8->f440));
                if (t4 != 0) {
                    t4->v14(t2->f20);
                    o->f04 |= 1;
                }
            }
        }
    }
}
