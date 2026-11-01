/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b920c
 * function: TTecResta_update_8c0b920c
 * language: c++
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 8 of 100 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
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
};
class ObjectB {
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
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x98];
    short fbc;
    char unknownbe[0x6];
    short fc4;
    char unknownc6[0x36];
    int ffc;
    char unknown100[0x58];
    int f158;
} ObjectData;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" void operation_8c0b6d7c(void *);
extern "C" void TTecResta_update_8c0b920c(Object *o)
{
    int v2;
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = lookup_object_by_id((unsigned short)((ObjectData *)o)->fc4);
    ((ObjectData *)o)->f20 = (int)t1;
    if (((ObjectData *)o)->f20 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    if (((ObjectData *)o)->f158 != 0) {
        if (1 >= ((ObjectData *)o)->fbc) {
            o->v6();
        } else {
            o->v6();
            if (((ObjectData *)o)->ffc != 0) {
                v2 = 0;
                v1 = 0x100;
                for (; ((ObjectData *)o)->ffc > v2; v2++) {
                    t2 = lookup_object_by_id(*(unsigned short *)((char *)o + v1 + (v2 << 3)));
                    t3 = effect_query_is_true((void *)t2);
                    if (t3 != 0) {
                        ((ObjectB *)o)->v6(t2);
                    }
                }
            }
        }
    } else {
        if (1 >= ((ObjectData *)o)->fbc) {
            o->v6();
        } else {
            operation_8c0b6d7c((void *)o);
        }
    }
    ((ObjectData *)o)->f04 |= 1;
}
