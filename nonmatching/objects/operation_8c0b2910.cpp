/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b2910
 * function: operation_8c0b2910
 * language: c++
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 2 of 48 reference instruction lines
 * differing bytes: 2
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
    virtual void v7(int);
};
typedef struct ObjectData {

} ObjectData;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" int call_8c0b628c(int);
extern "C" void operation_8c0b2910(Object *o)
{
    int t1;
    int v3;
    int v1;
    int v2;
    int t2;
    int t3;
    v1 = (int)0x150;
    v3 = (int)0;
    v2 = (int)0x14c;
    while (*(int *)((char *)((char *)o + 0x0) + (v2)) > v3) {
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)o + v1) + (v3 << 3))));
        t2 = effect_query_is_true((void *)t1);
        if (t2 != 0) {
            t3 = call_8c0b628c(t1);
            if (t3 != 0) {
                o->v7(t1);
            }
        }
        v3 = (int)(v3 + 1);
    }
}
