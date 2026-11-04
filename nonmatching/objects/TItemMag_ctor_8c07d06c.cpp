/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07d06c
 * function: TItemMag_ctor_8c07d06c
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 26 of 90 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemMag.h (shared layout for modders; this draft keeps its own local types)
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
    virtual void v18(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1b8];
    int f1d8;
    float f1dc;
    float f1e0;
    char unknown1e4[0x30];
    float f214;
} ObjectData;
extern int g_8c2feb48;
extern "C" void TItemEquipBase_ctor_8c20989c(void *);
extern "C" void initialize_fields_8c207358(void *);
extern "C" void call_8c1c8ce4(int, void *);
extern "C" int operation_8c207304(void *);
extern "C" void call_8c074fb4(Object *, int);
extern "C" void call_8c07fa4c(Object *);
extern "C" Object *TItemMag_ctor_8c07d06c(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int v4;
    int t1;
    int pm2;
    (void)home;
    TItemEquipBase_ctor_8c20989c((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c264220;
    initialize_fields_8c207358((void *)(((char *)o + 0x1e4)));
    ((ObjectData *)o)->tag = (int)(g_8c2feb48);
    ((ObjectData *)o)->size = 0x228;
    ((ObjectData *)o)->f214 = 0.0f;
    ((ObjectData *)o)->f1dc = 6300.0f;
    ((ObjectData *)o)->f1e0 = 2.0f;
    call_8c1c8ce4(a2, (void *)(((char *)o + 0x1e4)));
    t1 = operation_8c207304((void *)(((char *)o + 0x1e4)));
    call_8c074fb4(o, t1);
    o->v18(1);
    ((ObjectData *)o)->f1d8 = 0;
    v4 = (int)0;
    goto L_8c07d10a;
    v1 = (int)0;
L_8c07d0f8:
    ;
    *(int *)((char *)((char *)o + 0x1f4) + (v1 << 2)) = 0;
    pm2 = 0x1fc;
    *(int *)((char *)((char *)o + pm2) + (v1 << 2)) = 0;
    v4 = (int)(v1 + 1);
L_8c07d10a:
    ;
    v1 = (int)v4;
    if (v4 != 2) {
        goto L_8c07d0f8;
    }
    call_8c07fa4c(o);
    return o;
}
