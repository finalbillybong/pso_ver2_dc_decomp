/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14cb90
 * function: TOTrapAncient02_ctor_8c14cb90
 * language: c++
 * reference size: 436 bytes
 * compiled size: 436 bytes (+0.0%)
 * differing lines: 2 of 161 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOTrapAncient02.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da620 S_g8c4da620;
typedef struct S_g8c4da620_42c S_g8c4da620_42c;
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
    Vector3 f48;
    char unknown54[0x18];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0xcc];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    short f30c;
    char unknown30e[0x42];
    float f350;
    float f354;
    unsigned short f358;
    char unknown35a[0x6];
    float f360;
    float f364;
    int f368;
    int f36c;
    int f370;
} ObjectData;
struct S_g8c4da620 {
    char unknown0[0x42c];
    S_g8c4da620_42c *f42c;
};
struct S_g8c4da620_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c315638;
extern S_g8c4da620 *g_8c4da620;
extern "C" void TOTrap_ctor_8c140b28(void *, void *);
extern "C" void update_object_center(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TOTrapAncient02_ctor_8c14cb90(Object *o, int a1, int a2)
{
    Object **home = &o;
    ObjectData *pm1;
    Vector3 *src;
    Vector3 *dst;
    unsigned short pm2;
    Vector3 *pm6;
    ObjectData *pm7;
    ObjectData *pm3;
    short pm8;
    void *pm9;
    float pm4;
    void *pm10;
    pm10 = (void *)a1;
    TOTrap_ctor_8c140b28((void *)o, pm10);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26e2dc;
    pm2 = 0x374;
    ((ObjectData *)o)->tag = (int)(g_8c315638);
    ((ObjectData *)o)->size = (short)pm2;
    o->v6(a2);
    (void)home;
    dst = (Vector3 *)&((ObjectData *)o)->f164;
    pm6 = &((ObjectData *)o)->f3c;
    src = (Vector3 *)pm6;
    *dst = *src;
    *(Vector3 *)&((ObjectData *)o)->f158 = *src;
    *dst = *src;
    *(&((ObjectData *)o)->f48) = *src;
    update_object_center((void *)o);
    pm8 = 0;
    ((ObjectData *)o)->f38 = (g_8c4da620->f42c->f08);
    ((ObjectData *)o)->f28 = (int)(g_8c4da620->f42c->f0c);
    ((ObjectData *)o)->f30a = pm8;
    ((ObjectData *)o)->f30c = 0;
    ((ObjectData *)o)->f350 = 0.5f * ((ObjectData *)o)->f6c + 30.0f;
    pm1 = (ObjectData *)o;
    ((ObjectData *)o)->f354 = (pm1)->f350;
    pm1 = (ObjectData *)o;
    ((ObjectData *)o)->f36c = (int)((float)(pm1)->f88 + 30.0f);
    a2 = ((ObjectData *)o)->f36c;
    if (0 > a2) {
        pm3 = (ObjectData *)o;
        (pm3)->f36c = 0;
    }
    pm3 = (ObjectData *)o;
    ((ObjectData *)o)->f370 = ((pm3)->f36c);
    pm3 = (ObjectData *)o;
    (pm3)->f358 = (unsigned short)0xffff;
    pm9 = (void *)o;
    copy_actor_records(pm9, (void *)((void *)0x8c31560c), 1);
    transform_actor_records((void *)o);
    ((ObjectData *)o)->f34 |= 0x60000000;
    attach_and_insert_object((void *)o);
    pm4 = 0.0f;
    ((ObjectData *)o)->f364 = pm4;
    ((ObjectData *)o)->f360 = 0.0f;
    pm7 = (ObjectData *)o;
    (pm7)->f368 = 0;
    return o;
}
