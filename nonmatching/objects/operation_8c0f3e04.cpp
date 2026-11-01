/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f3e04
 * function: operation_8c0f3e04
 * language: c++
 * reference size: 436 bytes
 * compiled size: 436 bytes (+0.0%)
 * differing lines: 12 of 166 reference instruction lines
 * differing bytes: 10
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg2 Arg2;
class Arg0_s130;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_p0_114 {
    float f00;
    float f04;
    float f08;
} Block_p0_114;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    unsigned short fe8;
    char unknownea[0x2];
    int fec;
    int ff0;
    float ff4;
    float ff8;
    float ffc;
    float f100;
    float f104;
    char unknown108[0x8];
    Arg0_110 *f110;
    Block_p0_114 f114;
    Vector3 f120;
    float f12c;
    char unknown130[0x1c];
    float f14c;
    int f150;
};
struct Arg2 {
    Vector3 f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    Vector3 f00;
    Vector3 f0c;
};
struct S_c8c053d84 {
    char unknown0[0x64];
    int f64;
};
class Arg0_s130 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
typedef struct Arg0_s130Data {

} Arg0_s130Data;
extern "C" S_c8c011290 *operation_8c011290(int, int);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void process_entries_8c0731d8(void *);
extern "C" void operation_8c0f3e04(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    S_c8c011290 *t1;
    S_c8c053d84 *t2;
    float t3;
    float t4;
    o->ff0 = a1;
    *(Vector3 *)&o->f114 = *(Vector3 *)&a2->f00;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f114;
    (&frame)->f00.f04 = 20.0f;
    t1 = operation_8c011290((int)(&frame), 0x16ef);
    if (t1 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t1->f04->f00;
        *(Vector3 *)&o->f120 = *(Vector3 *)&t1->f04->f0c;
    } else {
        o->f3c.f00 = o->f114.f00;
        o->f3c.f08 = o->f114.f08;
    }
    o->f104 = o->f114.f04 - o->f3c.f04;
    if (10.0f > o->f104) {
        o->f114.f04 = o->f3c.f04 + 10.0f;
        o->f104 = 10.0f;
    }
    t2 = lookup_object_by_id((unsigned short)(o->fe8));
    if (t2 != 0) {
        o->f64 = (Arg0_64 *)t2->f64;
    } else {
        o->f64 = (Arg0_64 *)0;
    }
    t3 = njSin_8c37eb0c((void *)(o->f64));
    o->ff4 = t3;
    o->ff8 = 0.0f;
    t4 = njCos_8c38c154((void *)(o->f64));
    o->ffc = t4;
    o->f100 = 300.0f;
    process_entries_8c0731d8((void *)(o->f110));
    o->f12c = 1.0f;
    ((Arg0_s130 *)((char *)o + 0x130))->v2();
    o->f150 = 0;
    o->f14c = 0.0f;
    o->fec = 1;
}
