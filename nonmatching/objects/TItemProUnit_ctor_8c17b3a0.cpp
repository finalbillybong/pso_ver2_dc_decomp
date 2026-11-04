/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17b3a0
 * function: TItemProUnit_ctor_8c17b3a0
 * language: c++
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 6 of 105 reference instruction lines
 * differing bytes: 13
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemProUnit.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x1b8];
    short f1d8;
    short f1da;
    short f1dc;
    char unknown1de[0x26];
    float f204;
    short f208;
    short f20a;
} ObjectData;
struct Arg2 {
    char unknown0[0x4];
    unsigned char f04;
};
struct S_c8c1c7658 {
    char unknown0[0x4];
    short f04;
    short f06;
    unsigned short f08;
};
extern int g_8c3197c0;
extern "C" void TItemEquipBase_ctor_8c20989c(void *);
extern "C" S_c8c1c7658 *operation_8c1c7658(void *);
extern "C" int operation_8c1c9354(void *);
extern "C" void memset_8c12b880(void *, int, int);
extern "C" void operation_8c17b4b0(void *);
extern "C" Object *TItemProUnit_ctor_8c17b3a0(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    short v5;
    S_c8c1c7658 *t1;
    int t2;
    (void)home;
    TItemEquipBase_ctor_8c20989c((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c271d1c;
    ((ObjectData *)o)->tag = (int)(g_8c3197c0);
    ((ObjectData *)o)->size = 0x20c;
    o->v18(a2->f04 + 9);
    ((ObjectData *)o)->f1dc = 0;
    ((ObjectData *)o)->f204 = 1.0f;
    t1 = operation_8c1c7658((void *)a2);
    if (t1 != 0) {
        ((ObjectData *)o)->f1d8 = t1->f04;
        ((ObjectData *)o)->f1da = t1->f06;
        ((ObjectData *)o)->f20a = (short)t1->f08 << 1;
    } else {
        ((ObjectData *)o)->f1d8 = 0;
        ((ObjectData *)o)->f1da = 0;
        ((ObjectData *)o)->f20a = 0;
    }
    t2 = operation_8c1c9354((void *)a2);
    ((ObjectData *)o)->f208 = t2;
    {
        Object *base = o;
        v5 = (short)((ObjectData *)base)->f208;
        if (-0xa >= v5 || v5 >= 0xa) {
            ((ObjectData *)base)->f208 = 0;
        } else {
        }
    }
    memset_8c12b880((void *)(((char *)o + 0x1de)), 0, 0x26);
    operation_8c17b4b0((void *)o);
    return o;
}
