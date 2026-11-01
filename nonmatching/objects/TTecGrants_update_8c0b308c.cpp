/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b308c
 * function: TTecGrants_update_8c0b308c
 * language: c++
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 4 of 96 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    char unknown24[0x58];
    short f7c;
    char unknown7e[0x52];
    unsigned short fd0;
    char unknownd2[0x36];
    int f108;
    unsigned short f10c;
    char unknown10e[0x56];
    int f164;
} ObjectData;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" int call_8c0b628c(int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c0b32c0(int, int, int, void *);
extern "C" void TTecGrants_update_8c0b308c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
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
        if (t4 != 0 && ((ObjectData *)o)->f164 == 0) {
            t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t5 != 0) {
                call_8c0b32c0(t5, t2, (int)(((ObjectData *)o)->f7c), g_8c44bea0);
            }
        }
    }
    *(int *)((char *)o + 0x164) += 1;
    if (((ObjectData *)o)->f164 > 0x1e) {
        if (t2 != 0) {
            t6 = effect_query_is_true((void *)t2);
            if (t6 != 0) {
                t7 = call_8c0b628c(t2);
                if (t7 != 0) {
                    o->v5(t2);
                }
            }
        }
        ((ObjectData *)o)->f04 |= 1;
    }
}
