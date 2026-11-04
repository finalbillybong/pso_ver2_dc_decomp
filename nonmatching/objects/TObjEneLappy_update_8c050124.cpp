/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c050124
 * function: TObjEneLappy_update_8c050124
 * language: c++
 * reference size: 640 bytes
 * compiled size: 640 bytes (+0.0%)
 * differing lines: 2 of 235 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneLappy.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_dc Arg0_dc;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x58];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x92];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x10];
    float f31c;
    char unknown320[0x4];
    Block_p0_324 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x3a];
    short f390;
    char unknown392[0xa];
    short f39c;
} ObjectData;
struct Arg0_334 {
    char unknown0[0x34];
    int f34;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern "C" int operation_8c03d338(void);
extern "C" void call_8c05196c(Object *);
extern "C" void operation_8c051754(Object *);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void call_8c050668(Object *);
extern "C" void call_8c0509b4(Object *);
extern "C" void call_8c050ed0(Object *);
extern "C" void operation_8c05113c(void *);
extern "C" void operation_8c051274(void *);
extern "C" void operation_8c051450(void *);
extern "C" void operation_8c027090(int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" void operation_8c0514f4(void *);
extern "C" void TObjEneLappy_update_8c050124(Object *o)
{
    float v18;
    float v19;
    int t1;
    int t2;
    int t3;
    int t4;
    *(short *)((char *)o + 0x390) |= 1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        call_8c05196c(o);
        operation_8c051754(o);
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f354));
    ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t2;
    if (((ObjectData *)o)->f334 != 0 && ((((ObjectData *)o)->f334->f34 & 0x800)) != 0) {
        ((ObjectData *)o)->f334 = (Arg0_334 *)0;
        ((ObjectData *)o)->f354 = 0xffff;
    }
    switch (((ObjectData *)o)->f30a) {
    case 0:
        call_8c050668(o);
        break;
    case 1:
        call_8c0509b4(o);
        break;
    case 2:
        call_8c050ed0(o);
        break;
    case 3:
        operation_8c05113c((void *)o);
        break;
    case 4:
        operation_8c051274((void *)o);
        break;
    case 5:
        operation_8c051450((void *)o);
    }
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    if (((((ObjectData *)o)->f34 & 0x6000000)) == 0 && ((((ObjectData *)o)->f390 & 4)) == 0) {
        operation_8c027090((int)o);
    }
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    if (((((ObjectData *)o)->f390 & 0x40)) != 0) {
        v18 = (float)((ObjectData *)o)->f31c;
        if (v18 > -6.0f) {
            v19 = (float)v18;
        } else {
            v19 = (float)-6.0f;
        }
        ((ObjectData *)o)->f31c = v19;
        if (((((ObjectData *)o)->f34 & 0x800000)) != 0) {
            ((ObjectData *)o)->f390 &= -0x41;
            play_se_8c05fbf8(0x30033, (void *)(((char *)o + 0x3c)), 0, 0);
            ((ObjectData *)o)->fdc->f18 |= 1;
        }
    }
    if (((((ObjectData *)o)->f34 & 0x800)) != 0 && ((((ObjectData *)o)->f390 & 2)) == 0) {
        *(short *)((char *)o + 0x39c) += 1;
        t3 = o->v20(0x1e);
        if (t3 != 0) {
            t4 = call_8c04a52c(o, 0, 120.0f);
            if ((unsigned short)t4 != 0xffff && !(((ObjectData *)o)->f39c >= 0x384)) {
                return;
            }
            operation_8c0514f4((void *)o);
            ((ObjectData *)o)->ff0 = 9;
        }
    }
}
