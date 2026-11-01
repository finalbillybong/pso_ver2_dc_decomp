/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0831b0
 * function: TObjContainerIdo_ctor_8c0831b0
 * language: c++
 * reference size: 448 bytes
 * compiled size: 448 bytes (+0.0%)
 * differing lines: 16 of 169 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c60 S_g8c469c60;
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
    int f38;
    Vector3 f3c;
    char unknown48[0x24];
    float f6c;
    float f70;
    char unknown74[0x18];
    int f8c;
    int f90;
    char unknown94[0x54];
    float fe8;
    Vector3 fec;
    Vector3 ff8;
    char unknown104[0x10];
    int f114;
    int f118;
    float f11c;
    float f120;
    float f124;
} ObjectData;
struct S_g8c469c60 {
    int f00;
    int f04;
};
extern int g_8c2ff45c;
extern S_g8c469c60 *g_8c469c60;
extern "C" void operation_8c080360(void *);
extern "C" void initialize_context_blend(void *);
extern "C" void start_context_blend(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TObjContainerIdo_ctor_8c0831b0(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v7;
    int v8;
    int v5;
    char *b;
    (void)home;
    operation_8c080360((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2645b4;
    initialize_context_blend((void *)(((char *)o + 0x128)));
    ((ObjectData *)o)->tag = (int)(g_8c2ff45c);
    ((ObjectData *)o)->size = 0x144;
    o->v6(a2);
    *(Vector3 *)&((ObjectData *)o)->ff8 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->fec = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->fe8 = 100.0f;
    ((ObjectData *)o)->f114 = (int)(((ObjectData *)o)->f8c);
    if (1 > ((ObjectData *)o)->f114) {
        ((ObjectData *)o)->f114 = 1;
    }
    if (((ObjectData *)o)->f114 > 4) {
        ((ObjectData *)o)->f114 = 4;
    }
    v7 = (int)0;
    v8 = (int)0x104;
    v5 = (int)0x114;
    while ((b = (char *)o, *(int *)(b + v5) > v7)) {
        *(int *)((char *)(b + v8) + (v7 << 2)) = *(int *)(b + 0x88) + v7;
        v7 = (int)(v7 + 1);
    }
    ((ObjectData *)b)->f118 = 0;
    if (((ObjectData *)o)->f90 != 0) {
        ((ObjectData *)o)->f118 |= 0x8000000;
    } else {
        ((ObjectData *)o)->f118 &= -0x8000001;
    }
    ((ObjectData *)o)->f11c = 0.0f;
    ((ObjectData *)o)->f120 = ((ObjectData *)o)->f6c / (float)((ObjectData *)o)->f114;
    ((ObjectData *)o)->f124 = ((ObjectData *)o)->f70;
    ((ObjectData *)o)->f28 = (int)(g_8c469c60->f00);
    ((ObjectData *)o)->f38 = (int)(g_8c469c60->f04);
    start_context_blend((void *)(((char *)o + 0x128)));
    copy_actor_records((void *)o, (void *)((void *)0x8c2ff430), 1);
    ((ObjectData *)o)->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    return o;
}
