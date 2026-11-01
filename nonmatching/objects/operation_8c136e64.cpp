/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c136e64
 * function: operation_8c136e64
 * language: c++
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 2 of 85 reference instruction lines
 * differing bytes: 4
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
    virtual void v6(int);
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
};
typedef struct ObjectData {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x74];
    int f94;
    int f98;
    int f9c;
    char unknowna0[0x4];
    int fa4;
    int fa8;
} ObjectData;
extern int g_8c312e50;
extern int g_8c312e54;
extern int g_8c312e58;
extern "C" void TObjectShared_ctor_8c01d1ec(Object *);
extern "C" Object *operation_8c136e64(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    {
        Object *mid = o;
        {
            Object *base = mid;
            Object **bhome = &base;
            (void)bhome;
            TObjectShared_ctor_8c01d1ec(mid);
            *(void **)((char *)base + 0x18) = (void *)(void *)0x8c26d03c;
            ((ObjectData *)base)->tag = (int)(g_8c312e50);
            ((ObjectData *)base)->size = 0x9c;
            base->v6(a2);
            ((ObjectData *)base)->f94 = 0;
            ((ObjectData *)base)->f98 = 0;
            base->v14();
            ((ObjectData *)base)->f04 |= 0x10;
        }
        *(void **)((char *)mid + 0x18) = (void *)(void *)0x8c26cff4;
        ((ObjectData *)mid)->tag = (int)(g_8c312e54);
        ((ObjectData *)mid)->size = 0x9c;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26cfac;
    ((ObjectData *)o)->tag = (int)(g_8c312e58);
    ((ObjectData *)o)->size = 0xac;
    o->v14();
    ((ObjectData *)o)->f9c = 0x96;
    ((ObjectData *)o)->fa4 = 0;
    ((ObjectData *)o)->fa8 = 0;
    return o;
}
