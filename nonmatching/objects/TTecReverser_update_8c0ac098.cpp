/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ac098
 * function: TTecReverser_update_8c0ac098
 * language: c++
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 4 of 53 reference instruction lines
 * differing bytes: 4
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
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0xac];
    unsigned short fd0;
    char unknownd2[0x36];
    int f108;
    unsigned short f10c;
} ObjectData;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" int call_8c0b628c(int);
extern "C" void TTecReverser_update_8c0ac098(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->fd0));
    ((ObjectData *)o)->f20 = (int)t1;
    if (((ObjectData *)o)->f20 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    if (((ObjectData *)o)->f108 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f10c));
    t3 = effect_query_is_true((void *)t2);
    if (t3 != 0) {
        t4 = call_8c0b628c(t2);
        if (t4 != 0) {
            o->v5(t2);
        }
    }
    ((ObjectData *)o)->f04 |= 1;
}
