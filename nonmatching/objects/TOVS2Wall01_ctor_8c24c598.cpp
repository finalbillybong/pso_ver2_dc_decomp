/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24c598
 * function: TOVS2Wall01_ctor_8c24c598
 * language: c++
 * reference size: 332 bytes
 * compiled size: 328 bytes (-1.2%)
 * differing lines: 78 of 111 reference instruction lines
 * differing bytes: 213
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TOVS2Wall01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c510fe0 S_g8c510fe0;
typedef struct S_g8c510fe0_42c S_g8c510fe0_42c;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
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
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x4c];
    int f88;
    char unknown8c[0x27e];
    short f30a;
    char unknown30c[0x44];
    float f350;
    float f354;
    int f358;
    char unknown35c[0x1c];
    int f378;
} ObjectData;
struct S_g8c510fe0 {
    char unknown0[0x42c];
    S_g8c510fe0_42c *f42c;
};
struct S_g8c510fe0_42c {
    char unknown0[0x68];
    int f68;
    int f6c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c33eb90;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c510fe0 *g_8c510fe0;
extern "C" char g_8c33ea40[];
extern "C" void hs_8c043418(Object *, void *);
extern "C" void initialize_context_blend(void *);
extern "C" void update_object_center(Object *);
extern "C" void copy_actor_records(Object *, void *, int);
extern "C" void operation_8c05426c(Object *, int, int);
extern "C" void attach_and_insert_object(Object *);
extern "C" void start_context_blend(void *);
extern "C" Object *TOVS2Wall01_ctor_8c24c598(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    hs_8c043418(o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27d878;
    initialize_context_blend(((char *)o + 0x35c));
    ((ObjectData *)o)->tag = (int)(g_8c33eb90);
    ((ObjectData *)o)->size = 0x37c;
    o->v6(a1);
    update_object_center(o);
    ((ObjectData *)o)->f34 |= 0x60000000;
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c510fe0->f42c->f68;
    ((ObjectData *)o)->f28 = (int)(g_8c510fe0->f42c->f6c);
    copy_actor_records(o, (g_8c33ea40 + 0x108), 1);
    operation_8c05426c(o, 0, 0x10000000);
    attach_and_insert_object(o);
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f350 = 800.0f;
    ((ObjectData *)o)->f354 = ((ObjectData *)o)->f38->f04->f14 + 50.0f;
    ((ObjectData *)o)->f358 = (int)((ObjectData *)o)->f88 + 0x100;
    start_context_blend(((char *)o + 0x35c));
    ((ObjectData *)o)->f378 = 1;
    return o;
}
