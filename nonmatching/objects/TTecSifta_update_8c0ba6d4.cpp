/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ba6d4
 * function: TTecSifta_update_8c0ba6d4
 * language: c++
 * reference size: 232 bytes
 * compiled size: 240 bytes (+3.4%)
 * differing lines: 28 of 100 reference instruction lines
 * differing bytes: 168
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
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
    virtual void v6(...);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x98];
    short fbc;
    char unknownbe[0x6];
    unsigned short fc4;
    char unknownc6[0x36];
    int ffc;
    char unknown100[0x58];
    int f158;
} ObjectData;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" void operation_8c0b6d7c(void *);
extern "C" void TTecSifta_update_8c0ba6d4(Object *o)
{
    int v2;
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->fc4));
    ((ObjectData *)o)->f20 = (int)t1;
    if (((ObjectData *)o)->f20 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    if (((ObjectData *)o)->f158 != 0) {
        if (1 >= ((ObjectData *)o)->fbc) {
            o->v6();
            goto L_8c0ba78a;
        }
        o->v6();
        if (((ObjectData *)o)->ffc == 0) {
            goto L_8c0ba78a;
        }
        v2 = (int)0;
        v1 = (int)0x100;
        while (((ObjectData *)o)->ffc > v2) {
            t2 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 3))));
            t3 = effect_query_is_true((void *)t2);
            if (t3 != 0) {
                o->v6(t2);
            }
            v2 = (int)(v2 + 1);
        }
    } else {
        if (1 >= ((ObjectData *)o)->fbc) {
            o->v6();
        } else {
            operation_8c0b6d7c((void *)o);
        }
    }
L_8c0ba78a:;
    ((ObjectData *)o)->f04 |= 1;
}
