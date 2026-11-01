/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f1864
 * function: TOMonumentAncient02_ctor_8c0f1864
 * language: c++
 * reference size: 456 bytes
 * compiled size: 452 bytes (-0.9%)
 * differing lines: 8 of 163 reference instruction lines
 * differing bytes: 232
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470540 S_g8c470540;
typedef struct S_g8c470540_42c S_g8c470540_42c;
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
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x9c];
    int fd8;
    char unknowndc[0x8];
    int fe4;
    char unknowne8[0x10];
    float ff8;
    float ffc;
    int f100;
    int f104;
    int f108;
    int f10c;
    float f110;
    float f114;
    float f118;
    float f11c;
    int f120;
    int f124;
} ObjectData;
struct S_g8c470540 {
    char unknown0[0x42c];
    S_g8c470540_42c *f42c;
};
struct S_g8c470540_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern "C" void operation_8c0ee870(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int get_current_area_8c032b10(void);
extern "C" int create_effect_769c(void *, int);
extern "C" Object *TOMonumentAncient02_ctor_8c0f1864(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v5;
    int t1;
    int t2;
    (void)home;
    operation_8c0ee870((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2685a8;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c309628);
    ((ObjectData *)o)->size = 0x128;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (Arg0_38 *)(*(S_g8c470540 **)0x8c470540)->f42c->f08;
    ((ObjectData *)o)->f28 = (int)((*(S_g8c470540 **)0x8c470540)->f42c->f0c);
    copy_actor_records((void *)o, (void *)((void *)0x8c3095fc), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    t1 = get_current_area_8c032b10();
    switch (t1) {
    default:
        ((ObjectData *)o)->f108 = 0x2c;
        ((ObjectData *)o)->f10c = 0x40019;
        break;
    case 4:
        ((ObjectData *)o)->f108 = 0x2d;
        ((ObjectData *)o)->f10c = 0x40016;
        break;
    case 7:
        ((ObjectData *)o)->f108 = 0x2e;
        ((ObjectData *)o)->f10c = 0x4000f;
        break;
    }
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->f100 = 0;
    ((ObjectData *)o)->f104 = 0;
    ((ObjectData *)o)->fd8 = 3;
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f110 = 0.0f;
    ((ObjectData *)o)->f114 = 0.0f;
    ((ObjectData *)o)->f118 = 0.0f;
    ((ObjectData *)o)->f11c = 0.0f;
    t2 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x7f);
    ((ObjectData *)o)->f120 = (int)t2;
    ((ObjectData *)o)->f124 = 1;
    if (*(int *)0x8c2e2ad8 == 1) {
        v5 = (int)(*(int *)0x8c510ba0 != 0);
        if (v5 == 1) {
            ((ObjectData *)o)->f04 |= 1;
        }
    }
    return o;
}
