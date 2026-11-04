/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08860c
 * function: TObjWarpBase_ctor_8c08860c
 * language: c++
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 2 of 55 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjWarpBase.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual void v5();
    virtual void v6(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc4];
    float fe4;
    int fe8;
    int fec;
} ObjectData;
extern int g_8c2fff7c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void operation_8c051eb8(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0b4c40(void *, void *, int);
extern "C" Object *TObjWarpBase_ctor_8c08860c(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2651bc;
    ((ObjectData *)o)->tag = (int)(g_8c2fff7c);
    ((ObjectData *)o)->size = 0xf0;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = 10.0f;
    ((ObjectData *)o)->fe8 = 0;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xe8);
    if (t1 != 0) {
        operation_8c0b4c40((void *)t1, (void *)(((char *)o + 0x3c)), (int)o);
    }
    ((ObjectData *)o)->fec = (int)t1;
    return o;
}
