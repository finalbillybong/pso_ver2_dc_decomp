/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c119d60
 * function: TObjHashiBase_ctor_8c119d60
 * language: c++
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 4 of 70 reference instruction lines
 * differing bytes: 25
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
    virtual void v6(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x20];
    float f40;
    char unknown44[0x44];
    int f88;
    char unknown8c[0x58];
    int fe4;
    char unknowne8[0x10];
    float ff8;
    float ffc;
    int f100;
    float f104;
    float f108;
} ObjectData;
extern "C" void operation_8c0ee870(void *);
extern "C" Object *TObjHashiBase_ctor_8c119d60(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c0ee870((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26a014;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c3107e8);
    ((ObjectData *)o)->size = 0x10c;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->f104 = ((ObjectData *)o)->f40;
    ((ObjectData *)o)->f40 -= 30.0f;
    ((ObjectData *)o)->f108 = 0.15f;
    ((ObjectData *)o)->f100 = (int)(((ObjectData *)o)->f88);
    ((ObjectData *)o)->ff8 = 300.0f;
    ((ObjectData *)o)->ffc = 40.0f;
    return o;
}
