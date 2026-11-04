/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24aed4
 * function: TObjDoaEx01_ctor_8c24aed4
 * language: c++
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 20 of 95 reference instruction lines
 * differing bytes: 42
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjDoaEx01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510f80 S_g8c510f80;
typedef struct S_g8c510f80_430 S_g8c510f80_430;
typedef struct S_g8c510f80_430_4 S_g8c510f80_430_4;
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc8];
    float fe8;
    float fec;
    float ff0;
    char unknownf4[0x14];
    int f108;
    float f10c;
    float f110;
    float f114;
    float f118;
} ObjectData;
struct S_g8c510f80 {
    char unknown0[0x430];
    S_g8c510f80_430 *f430;
};
struct S_g8c510f80_430 {
    char unknown0[0x4];
    S_g8c510f80_430_4 *f04;
};
struct S_g8c510f80_430_4 {
    char unknown0[0x4];
    int f04;
};
extern "C" void operation_8c0eeb90(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TObjDoaEx01_ctor_8c24aed4(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c0eeb90((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27d798;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c33b3e4);
    ((ObjectData *)o)->size = 0x11c;
    o->v6(a2);
    o->v21();
    copy_actor_records((void *)o, (void *)((void *)0x8c33b3b8), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->fe8 = 0.0f;
    ((ObjectData *)o)->ff0 = 0.5f;
    ((ObjectData *)o)->fec = (float)(unsigned int)(*(S_g8c510f80 **)0x8c510f80)->f430->f04->f04;
    ((ObjectData *)o)->f108 = 0x100001;
    ((ObjectData *)o)->f10c = 1.0f;
    ((ObjectData *)o)->f110 = 1.0f;
    ((ObjectData *)o)->f114 = 1.0f;
    ((ObjectData *)o)->f118 = 1.0f;
    return o;
}
