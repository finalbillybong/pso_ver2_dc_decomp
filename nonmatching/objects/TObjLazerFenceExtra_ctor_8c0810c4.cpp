/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0810c4
 * function: TObjLazerFenceExtra_ctor_8c0810c4
 * language: c++
 * reference size: 592 bytes
 * compiled size: 596 bytes (+0.7%)
 * differing lines: 84 of 234 reference instruction lines
 * differing bytes: 394
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjLazerFenceExtra.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469bc4 S_g8c469bc4;
typedef struct S_g8c469bc4_42c S_g8c469bc4_42c;
typedef struct S_g8c469bc4_430 S_g8c469bc4_430;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_f8_2c Arg0_f8_2c;
typedef struct Arg0_f8_2c_30 Arg0_f8_2c_30;
typedef struct Arg0_f8_2c_30_30 Arg0_f8_2c_30_30;
typedef struct Arg0_f8_2c_30_30_30 Arg0_f8_2c_30_30_30;
typedef struct Arg0_f8_2c_30_30_30_4 Arg0_f8_2c_30_30_30_4;
typedef struct Arg0_f8_2c_30_30_4 Arg0_f8_2c_30_30_4;
typedef struct Arg0_f8_2c_30_4 Arg0_f8_2c_30_4;
typedef struct Arg0_f8_2c_4 Arg0_f8_2c_4;
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
    char unknown20[0x14];
    int f34;
    char unknown38[0x34];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x48];
    Arg0_dc *fdc;
    int fe0;
    int fe4;
    short fe8;
    char unknownea[0x2];
    int fec;
    float ff0;
    int ff4;
    Arg0_f8 *ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    int f10c;
    int f110;
} ObjectData;
struct S_g8c469bc4 {
    char unknown0[0x42c];
    S_g8c469bc4_42c *f42c;
    S_g8c469bc4_430 *f430;
};
struct S_g8c469bc4_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    char unknown1c[0xc];
    int f28;
    char unknown2c[0xc];
    int f38;
};
struct S_g8c469bc4_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct Arg0_f8 {
    char unknown0[0x2c];
    Arg0_f8_2c *f2c;
};
struct Arg0_f8_2c {
    char unknown0[0x4];
    Arg0_f8_2c_4 *f04;
    char unknown8[0x28];
    Arg0_f8_2c_30 *f30;
};
struct Arg0_f8_2c_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f8_2c_30 {
    char unknown0[0x4];
    Arg0_f8_2c_30_4 *f04;
    char unknown8[0x28];
    Arg0_f8_2c_30_30 *f30;
};
struct Arg0_f8_2c_30_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f8_2c_30_30 {
    char unknown0[0x4];
    Arg0_f8_2c_30_30_4 *f04;
    char unknown8[0x28];
    Arg0_f8_2c_30_30_30 *f30;
};
struct Arg0_f8_2c_30_30_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f8_2c_30_30_30 {
    char unknown0[0x4];
    Arg0_f8_2c_30_30_30_4 *f04;
};
struct Arg0_f8_2c_30_30_30_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    float f10;
};
extern int g_8c2fede4;
extern S_g8c469bc4 *g_8c469bc4;
extern "C" char g_8c2fecd8[];
extern "C" void operation_8c051eb8(void *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void transform_actor_records(void *);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" Object *TObjLazerFenceExtra_ctor_8c0810c4(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v15;
    int t1;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26443c;
    ((ObjectData *)o)->tag = (int)(g_8c2fede4);
    ((ObjectData *)o)->size = 0x114;
    o->v6(a2);
    ((ObjectData *)o)->fec = 0;
    ((ObjectData *)o)->ff0 = 0.0f;
    ((ObjectData *)o)->fe4 = (int)((ObjectData *)o)->f6c;
    if (!(((ObjectData *)o)->fe4 >= 0)) {
        ((ObjectData *)o)->fe4 = 0;
    }
    if (((ObjectData *)o)->fe4 > 3) {
        ((ObjectData *)o)->fe4 = 3;
    }
    ((ObjectData *)o)->fe8 = ((ObjectData *)o)->f88;
    if ((int)(((ObjectData *)o)->f90) < 0 || (int)(((ObjectData *)o)->f90) > 1) {
        ((ObjectData *)o)->f110 = 0;
        ((ObjectData *)o)->f90 = (Arg0_90 *)0;
        goto L_8c08115e;
    }
    ((ObjectData *)o)->f110 = 1;
L_8c08115e:;
    {
        Object *base = o;
        t1 = call_8c18e8a0((void *)(((ObjectData *)base)->f90), 2);
        if (t1 == 0) {
            ((ObjectData *)base)->ff4 = (int)(g_8c469bc4->f42c->f18);
            ((ObjectData *)o)->ff8 = (Arg0_f8 *)g_8c469bc4->f42c->f08;
            ((ObjectData *)o)->ffc = (int)(g_8c469bc4->f430->f04);
        } else {
            ((ObjectData *)base)->ff4 = (int)(g_8c469bc4->f42c->f38);
            ((ObjectData *)o)->ff8 = (Arg0_f8 *)g_8c469bc4->f42c->f28;
            ((ObjectData *)o)->ffc = (int)(g_8c469bc4->f430->f0c);
        }
        ((ObjectData *)o)->f100 = (int)(((ObjectData *)o)->ff8->f2c->f04->f04);
        ((ObjectData *)o)->f104 = (int)(((ObjectData *)o)->ff8->f2c->f30->f04->f04);
        ((ObjectData *)o)->f108 = (int)(((ObjectData *)o)->ff8->f2c->f30->f30->f04->f04);
        ((ObjectData *)o)->f10c = (int)(((ObjectData *)o)->ff8->f2c->f30->f30->f30->f04->f04);
        copy_actor_records((void *)o, (void *)(t1 * 0x84 + g_8c2fecd8), 3);
    }
    ((ObjectData *)o)->f34 |= 0x40000000;
    ((ObjectData *)o)->fdc->f10 = ((ObjectData *)o)->f70;
    ((ObjectData *)o)->fdc->f0c = ((ObjectData *)o)->f74;
    attach_and_insert_object((void *)o);
    transform_actor_records((void *)o);
    if (((ObjectData *)o)->f110 == 0) {
        v15 = (int)1;
        while (((ObjectData *)o)->fe0 > v15) {
            operation_8c05428c((void *)o, v15, 1);
            v15 = (int)(v15 + 1);
        }
    }
    return o;
}
