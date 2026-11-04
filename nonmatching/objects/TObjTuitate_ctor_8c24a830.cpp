/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24a830
 * function: TObjTuitate_ctor_8c24a830
 * language: c++
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 10 of 84 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjTuitate.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
class Object;
typedef struct Block_frame_4 {
    char unknown0[0x24];
    float f24;
    float f28;
    float f2c;
    char unknown30[0xc];
} Block_frame_4;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(Arg2 *);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xe0];
    int f100;
} ObjectData;
struct Frame {
    Block_frame_4 f04;
};
struct Arg2 {
    Block60 f00;
};
extern int g_8c33b2fc;
extern "C" void operation_8c051eb8(void *);
extern "C" void initialize_context_blend(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int TObjMapCsn_create_8c1a1400(void *);
extern "C" void start_context_blend(void *);
extern "C" Object *TObjTuitate_ctor_8c24a830(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    Frame frame;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)0x8c27d754;
    initialize_context_blend((void *)((char *)o + 0xe4));
    ((ObjectData *)o)->tag = g_8c33b2fc;
    ((ObjectData *)o)->size = 0x104;
    o->v6(a2);
    copy_actor_records((void *)o, (void *)0x8c33b2d0, 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    *(Block60 *)&frame.f04 = a2->f00;
    frame.f04.f24 = 32.0f;
    frame.f04.f28 = 20.0f;
    frame.f04.f2c = 12.0f;
    ((ObjectData *)o)->f100 = TObjMapCsn_create_8c1a1400((void *)&frame.f04);
    start_context_blend((void *)((char *)o + 0xe4));
    return o;
}
