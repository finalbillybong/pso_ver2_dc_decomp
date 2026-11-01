/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e6d1c
 * function: TItemProArmor_ctor_8c0e6d1c
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 8 of 98 reference instruction lines
 * differing bytes: 4
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
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Arg2 Arg2;
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
    virtual void v18(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x118];
    unsigned char f138;
    char unknown139[0x87];
    int f1c0;
    char unknown1c4[0x14];
    unsigned char f1d8;
    char f1d9;
    char f1da;
    char f1db;
    char f1dc;
} ObjectData;
struct Arg2 {
    char unknown0[0x5];
    char f05;
};
struct S_c8c1c7658 {
    char unknown0[0x12];
    unsigned char f12;
    unsigned char f13;
};
extern "C" void TItemEquipBase_ctor_8c20989c(void *);
extern "C" int operation_8c1c933c(void *);
extern "C" int operation_8c1c9348(void *);
extern "C" S_c8c1c7658 *operation_8c1c7658(void *);
extern "C" Object *TItemProArmor_ctor_8c0e6d1c(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int t1;
    int t2;
    S_c8c1c7658 *t3;
    (void)home;
    TItemEquipBase_ctor_8c20989c((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c267cb8;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c307fc8);
    ((ObjectData *)o)->size = 0x1e0;
    o->v18(2);
    ((ObjectData *)o)->f1d8 = a2->f05;
    if ((unsigned int)((ObjectData *)o)->f1d8 > (unsigned int)4) {
        ((ObjectData *)o)->f1d8 = 4;
    }
    t1 = operation_8c1c933c((void *)a2);
    ((ObjectData *)o)->f1d9 = t1;
    t2 = operation_8c1c9348((void *)a2);
    ((ObjectData *)o)->f1da = t2;
    t3 = operation_8c1c7658((void *)a2);
    if (t3 != 0) {
        ((ObjectData *)o)->f1db = t3->f12;
        ((ObjectData *)o)->f1dc = t3->f13;
    } else {
        ((ObjectData *)o)->f1db = 0;
        ((ObjectData *)o)->f1dc = 0;
    }
    if (((ObjectData *)o)->f138 == 0x23) {
        ((ObjectData *)o)->f1c0 |= 2;
    }
    return o;
}
