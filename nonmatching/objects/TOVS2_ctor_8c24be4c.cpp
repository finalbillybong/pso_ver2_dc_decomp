/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24be4c
 * function: TOVS2_ctor_8c24be4c
 * language: c++
 * reference size: 248 bytes
 * compiled size: 244 bytes (-1.6%)
 * differing lines: 56 of 94 reference instruction lines
 * differing bytes: 217
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
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
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0xc0];
    float ffc;
    int f100;
    int f104;
} ObjectData;
struct S_g8c510fe0 {
    char unknown0[0x42c];
    S_g8c510fe0_42c *f42c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
};
struct S_vv2_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c33eb74;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c510fe0 *g_8c510fe0;
extern "C" char g_8c33ea40[];
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int TObjMapCsn_create_8c1a1400(void *);
extern "C" Object *TOVS2_ctor_8c24be4c(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    S_vv2 *v2;
    int t1;
    (void)home;
    operation_8c0ee870((void *)o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27db88;
    ((ObjectData *)o)->tag = (int)(g_8c33eb74);
    ((ObjectData *)o)->size = 0x108;
    o->v6(a1);
    v1 = (int)(a2 << 4);
    ((ObjectData *)o)->f38 = (Arg0_38 *)*(int *)((char *)((char *)g_8c510fe0->f42c + 0x8) + (v1));
    v2 = (S_vv2 *)((ObjectData *)o)->f38;
    ((ObjectData *)o)->ffc = v2->f04->f14 + 50.0f;
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)g_8c510fe0->f42c + 0xc) + (v1)));
    copy_actor_records((void *)o, (void *)(a2 * 0x2c + g_8c33ea40), 1);
    attach_and_insert_object((void *)o);
    t1 = TObjMapCsn_create_8c1a1400((void *)a1);
    ((ObjectData *)o)->f100 = (int)t1;
    ((ObjectData *)o)->f104 = 1;
    return o;
}
