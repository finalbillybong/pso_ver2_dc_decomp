/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05e7c0
 * function: TObjEneRe2Flower_Bomb_ctor_8c05e7c0
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 30 of 151 reference instruction lines
 * differing bytes: 42
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneRe2Flower_Bomb.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_124 Arg0_124;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    short fe8;
    char unknownea[0x2];
    Vector3 fec;
    float ff8;
    float ffc;
    float f100;
    float f104;
    float f108;
    float f10c;
    float f110;
    float f114;
    float f118;
    float f11c;
    int f120;
    Arg0_124 *f124;
    float f128;
    int f12c;
    int f130;
    int f134;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c2f3840;
extern char g_8c284c20[];
extern void operation_8c0f33fc(void *, int, int);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
Object *TObjEneRe2Flower_Bomb_ctor_8c05e7c0(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    float t1;
    float t2;
    (void)home;
    operation_8c0f33fc((void *)o, (int)a1, (int)a1);
    o->dispatch = (void *)0x8c262b3c;
    o->tag = (int)(g_8c2f3840);
    o->size = 0x138;
    o->fdc->f0c = *(float *)(g_8c284c20 + 0x8);
    o->f124 = (Arg0_124 *)a3;
    o->fe8 = a1->f20;
    *(Vector3 *)&o->fec = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->fec;
    o->f110 = 0.0f;
    o->f114 = 0.0f;
    o->f118 = 0.0f;
    t1 = njSin_8c37eb0c((void *)(o->f124));
    t2 = njCos_8c38c154((void *)(o->f124));
    o->ff8 = t1 * 4.0f;
    o->ffc = 0.0f;
    o->f100 = t2 * 4.0f;
    o->f104 = t1 * 7.0f;
    o->f108 = 0.0f;
    o->f10c = t2 * 7.0f;
    o->f11c = 0.0f;
    o->f120 = 1;
    o->f128 = 0.0f;
    o->f12c = 0;
    o->f130 = 0;
    o->f134 = 0;
    return o;
}
